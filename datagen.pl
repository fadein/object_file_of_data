#!/usr/bin/perl

use warnings;
use strict;
use Digest::MD5;
use autodie;

die "Generate a new data.c by hashing each file listed on the command line\nUsage: $0 file1 ... fileN"
	unless @ARGV;

open my $data, '> data.c';

print $data <<TOP;
#include "mystruct.h"

FileHash data[] = {
TOP

foreach my $file (grep { -f } @ARGV) {
	open my $fh, '<', $file;
	binmode $fh;
	my $digest = Digest::MD5->new->addfile($fh)->hexdigest;
	close $fh;
	my @words = ($digest =~ m/(\w{8})(\w{8})(\w{8})(\w{8})/);
	printf $data qq{\t{ .md5 = {0x%s, 0x%s, 0x%s, 0x%s}, .filename = "%s" },\n},
		@words, $file;
}

print $data <<BOTTOM;
	0  /* Sentinel value indicating the end of the array */
};

BOTTOM

close $data;

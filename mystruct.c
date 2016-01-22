#include <stdio.h>
#include "mystruct.h"

void printFileHash(FileHash* h) {
	printf("%08x%08x%08x%08x *%s\n",
			h->md5[0], h->md5[1], h->md5[2], h->md5[3],
			h->filename);
}

#include "mystruct.h"

FileHash data[] = {
	{ .md5 = {0x00000000, 0x00000000, 0x00000000, 0x00000000}, .filename = "/dev/null" },
	{ .md5 = {0x00000001, 0x00000002, 0x00000003, 0x00000004}, .filename = "/tmp/1234" },
	{ .md5 = {0x00000001, 0x00000003, 0x00000003, 0x00000007}, .filename = "/var/log/secure" },
	{ .md5 = {0x00000000, 0x00000000, 0x00000000, 0x00001337}, .filename = "/proc/sys/kernel/pid_max" },
	{ .md5 = {0xf1ff0cf8, 0x7720f71c, 0x425f16d6, 0x8b7b322a}, .filename = "data.c"},
	{ .md5 = {0x3eee2eee, 0xaceb647b, 0xc4bf422b, 0xeb189c37}, .filename = "data.o"},
	{ .md5 = {0x6d39b874, 0x1965af9f, 0x821c5dc9, 0x2222f48c}, .filename = "main.c"},
	{ .md5 = {0x5e88858c, 0x357f3249, 0x6a01e9bb, 0xa3ce40fc}, .filename = "main.exe"},
	{ .md5 = {0xd65b07a4, 0xb8ebe683, 0xfe09f404, 0xd30d7bd6}, .filename = "main.o"},
	{ .md5 = {0xb309fbec, 0x158dae59, 0x648a8a55, 0x3e104817}, .filename = "Makefile"},
	{ .md5 = {0x9c953e0b, 0xdda32798, 0x5b0b6cc5, 0xb58bce18}, .filename = "mystruct.c"},
	{ .md5 = {0x24da68e9, 0x0f676dc0, 0xa9cb1a4e, 0x2a979cf7}, .filename = "mystruct.h"},
	{ .md5 = {0x1b70971a, 0x0115b09a, 0xdebce381, 0x14b8499a}, .filename = "mystruct.o"},
	{ .md5 = {0x77777777, 0x77777777, 0x77777777, 0x77777777}, .filename = "lucky_se7ens.txt"},
	0  /* Sentinel value indicating the end of the array */
};


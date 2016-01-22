#pragma once
#include <stdio.h>

typedef struct {
	unsigned md5[4];
	char filename[256];
} FileHash;

void printFileHash(FileHash*);

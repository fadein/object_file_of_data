#include "mystruct.h"

extern FileHash data[];

int main(int argc, char** argv) {

	for (int i = 0; data[i].filename[0] != '\0'; ++i)
		printFileHash(&data[i]);

	return 0;
}

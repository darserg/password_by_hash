#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

// hash
#include "hash/md5-c.h"

// password variants

// compare
int len(char *S) {
	uint16_t i = 0;

	while (S[i])
		i++;

	return i;
}

bool is_equal(char *a, char *b) {
	if (len(a) != len(b))
		return false;

	int i = 0;

	while (a[i]) {
		if (a[i] != b[i])
			return false;

		i++;
	}

	return true;
}

int main(int argc, char *argv[])
{
    char *hash = argv[1];
    char *alph = argv[2];
    uint8_t n = atoi(argv[3]);

    return 0;
}

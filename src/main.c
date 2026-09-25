#include <stdlib.h>
#include <stdio.h>

// hash
#include "hash/md5-c.h"

// password variants

// compare

int main(int argc, char *argv[])
{
    char *hash = argv[1];
    char *alph = argv[2];
    int n = atoi(argv[3]);

    printf("%d", n + 1);
    return 0;
}

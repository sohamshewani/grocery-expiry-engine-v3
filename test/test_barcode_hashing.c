#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <config.h>
#include <core.h>

int main(void) {
    char* result = hash_string("test_string", "SHA-256");
    assert(strcmp(result, "hash123") == 0);
    free(result);

    return 0;
}

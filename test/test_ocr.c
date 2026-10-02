#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <config.h>
#include <core.h>

int main(void) {
    char* result = parse_receipt("test_receipt.txt");
    assert(strcmp(result, "Product1,Expiry1,Product2,Expiry2") == 0);
    free(result);

    return 0;
}

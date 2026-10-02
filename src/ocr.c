#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>
#include <core.h>
#include <utils.h>

char* parse_receipt(const char* path) {
    // Dummy implementation for OCR parsing
    printf("Parsing receipt from: %s\n", path);
    return (char*) "Product1,Expiry1,Product2,Expiry2";
}


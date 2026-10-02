#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>
#include <core.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <receipt_path>\n", argv[0]);
        return EXIT_FAILURE;
    }

    initialize_system();
    process_receipt(argv[1]);
    generate_forecasts();
    store_forecasts();
    shutdown_system();

    return EXIT_SUCCESS;
}

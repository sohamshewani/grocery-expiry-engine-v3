#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <config.h>
#include <core.h>

int main(void) {
    initialize_system();
    process_receipt("test_receipt.txt");
    generate_forecasts();
    store_forecasts();
    shutdown_system();

    return 0;
}

#ifndef CORE_H
#define CORE_H

// Function prototypes
void initialize_system(void);
void process_receipt(const char* receipt_path);
void generate_forecasts(void);
void store_forecasts(void);
void shutdown_system(void);

#endif // CORE_H
#ifndef CONFIG_H
#define CONFIG_H

// Configuration settings
#define DB_PATH "grocery_expiry.db"
#define OCR_MIN_CONFIDENCE 0.75
#define HASH_FUNCTION "SHA-256"

// SQLite database configuration
#define SQL_QUERY_CREATE_TABLE "CREATE TABLE IF NOT EXISTS products (id INTEGER PRIMARY KEY, product TEXT, expiration_date TEXT, hash TEXT, last_check TEXT, FOREIGN KEY(hash) REFERENCES barcodes(hash));"
#define SQL_QUERY_INSERT "INSERT INTO products (product, expiration_date, hash, last_check) VALUES (?, ?, ?, ?);"

#endif // CONFIG_H
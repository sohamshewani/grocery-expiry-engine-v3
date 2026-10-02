CFLAGS += -Wall -Wextra

all: grocery-expiry-engine

grocery-expiry-engine: src/main.o src/utils.o src/core.o src/ocr.o src/barcode_hashing.o src/forecasting.o
	$(CC) $(CFLAGS) -o $@ $^ -lm

src/main.o: src/main.c include/config.h include/core.h
	$(CC) $(CFLAGS) -c $< -o $@

src/utils.o: src/utils.c include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

src/core.o: src/core.c include/config.h include/core.h
	$(CC) $(CFLAGS) -c $< -o $@

src/ocr.o: src/ocr.c include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

src/barcode_hashing.o: src/barcode_hashing.c include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

src/forecasting.o: src/forecasting.c include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

test: test_core test_ocr test_barcode_hashing test_forecasting

test_core: tests/test_core.o src/utils.o
	$(CC) $(CFLAGS) -o test_core $^ -lm

test_ocr: tests/test_ocr.o src/utils.o
	$(CC) $(CFLAGS) -o test_ocr $^ -lm

test_barcode_hashing: tests/test_barcode_hashing.o src/utils.o
	$(CC) $(CFLAGS) -o test_barcode_hashing $^ -lm

test_forecasting: tests/test_forecasting.o src/utils.o
	$(CC) $(CFLAGS) -o test_forecasting $^ -lm

clean:
	rm -f *.o grocery-expiry-engine test_core test_ocr test_barcode_hashing test_forecasting

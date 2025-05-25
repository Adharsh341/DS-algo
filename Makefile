#c_init: c_init.c
#		gcc -Wall -g -o c_init c_init.c
CC = gcc
CFLAGS = -Wall -g -Iheader
TARGET = c_init

$(TARGET): c_init.c
	$(CC) $(CFLAGS) -o $(TARGET) c_init.c

# run: $(TARGET)
# 	./$(TARGET)
run: $(TARGET)
	./$(TARGET)
clean:
	rm -f $(TARGET)
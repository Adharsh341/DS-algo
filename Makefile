#c_init: c_init.c
#		gcc -Wall -g -o c_init c_init.c
CC = gcc
CFLAGS = -Wall -g -Iheader
TARGET = c_init
TARGET1 = D2B_exe

$(TARGET): c_init.c
	$(CC) $(CFLAGS) -o $(TARGET) c_init.c

$(TARGET1): D2B_using_recrsion.c
	$(CC) $(CFLAGS) -o $(TARGET1) D2B_using_recrsion.c

# run: $(TARGET)
# 	./$(TARGET)
run: $(TARGET)
	./$(TARGET)

run1: $(TARGET1)
	./$(TARGET1)

clean:
	rm -f $(TARGET)
clean1:
	rm -f $(TARGET1)
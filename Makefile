#c_init: c_init.c
#		gcc -Wall -g -o c_init c_init.c
CC = gcc
CFLAGS = -Wall -g -Iheader #add header folder location here
TARGET = c_init
TARGET1 = D2B_exe
TARGET2 = dyn_mem


$(TARGET): c_init.c
	$(CC) $(CFLAGS) -o $(TARGET) c_init.c

$(TARGET1): D2B_using_recrsion.c
	$(CC) $(CFLAGS) -o $(TARGET1) D2B_using_recrsion.c

$(TARGET2): dyn_mem_alloc.c
	$(CC) $(CFLAGS) -o $(TARGET2) dyn_mem_alloc.c

all: $(TARGET) $(TARGET1) $(TARGET2)

# run: $(TARGET)
# 	./$(TARGET)
run: $(TARGET)
	./$(TARGET)

run1: $(TARGET1)
	./$(TARGET1)

run2: $(TARGET2)
	./$(TARGET2)

run_all: run run1 run2

clean:
	rm -f $(TARGET)
clean1:
	rm -f $(TARGET1)
clean2:
	rm -f $(TARGET2)

clean_all: clean clean1 clean2

# make run run1 run2
# make clean clean1 clean2
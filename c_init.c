#include <stdio.h>
#include "stdlib.h" //using "" searches the lib files from the PWD ,, whereas using <> make it search the .h files from the /usr/include

/*stdlib.h is a standard library header file in C that provides functions for various general-purpose operations, including:

Memory management: malloc(), calloc(), realloc(), free() for dynamic memory allocation.
Process control: exit(), abort() for terminating programs.
String conversion: atoi(), atol(), atoll() for converting strings to integers.
Random number generation: rand(), srand() for generating random numbers.
Searching and sorting: bsearch(), qsort() for searching and sorting arrays.
Some common use cases include:
Dynamically allocating memory for data structures
Converting user input to numeric values
Generating random numbers for simulations or games
Terminating programs with specific exit codes
By including stdlib.h, you can leverage these functions to write more efficient and effective C code.*/
#include "c_init.h"

int main(){
    int a;
    a=2;
    printf("%d\n",a);
    add(4, 6);
    multiply(5, 5);
    return 0;
}
// gcc c_init.c -o c_init.exe -> compiling
//  ./c_init.exe -> run .exe

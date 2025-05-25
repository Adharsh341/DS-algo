#include <stdio.h>
#include "stdlib.h" //using "" searches the lib files from the PWD ,, whereas using <> make it search the .h files from the /usr/include
#include <string.h>
#include<math.h>
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

// Macro definition
#define LIMIT 55
//chaining of Macros 
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3
// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

//______________________________________________________MAINCODE_________________S
int main(){
    int a;
    a=2;
    char s2[10] = "Geeks";
    char s3[10] = "ForGeeks";
    long int res;
    // End of Declaration section  ---------------------------------------------->>>>>>>>>>

    printf("%d\n",a);
    add(4, 6);
    multiply(5, 5);

    // using math.h ---------------------------------------------->>>>>>>>>>
    res = pow(9, 3);
    printf("Using math.h, "
        "The value is: %ld\n",
        res);
    
    // using string.h ---------------------------------------------->>>>>>>>>>
    strcpy(s2, s3);
    printf("Using string.h, the strings\n I am printing Value of LIMIT  -->>%d \n "
        "you can add double aphsotrophe in next line to continue print\n"
        " s2 and s3: %s %s\n",
        LIMIT,s2, s3);
        printf("%dK insta followers\n",INSTAGRAM);

    // using Macros above !!! ---------------------------------------------->>>>>>>>>>
    int arr[] = { ELE };
    for (int i = 0; i < 3; i++) {
        printf("%d  \n", arr[i]);
    }

    int a1 = 18, b1 = 76;
    printf("Minimum: %d\n", min(a1, b1));
    
    printf("%d\n",add_with_Macro(a1,b1));

    if (IS_EVEN(LIMIT)){
        printf("LIMIT is an even Num\n");
    }

    if (IS_ODD(LIMIT)){
        printf("LIMIT is an odd Num\n");
    }
        
    printf("%d is %s\n", LIMIT, EVEN_ODD(LIMIT));


    printf("%d\n",sum_digi(LIMIT));
        return 0;
}


// gcc c_init.c -o c_init.exe -> compiling
//  ./c_init.exe -> run .exe

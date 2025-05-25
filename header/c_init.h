#ifndef C_INIT_H
#define C_INIT_H
// #define ELE 4, 5, 6
#define IS_EVEN(n) ((n) % 2 == 0)
#define IS_ODD(n) ((n) % 2 != 0)
#define EVEN_ODD(n) ((n) % 2 == 0 ? "even" : "odd")

#define sum_digi(num) ({ \
int n = num,sum =0 ; \
int rem=0; \
while(n!=0) { \
rem = n%10;\
sum+=rem; \
n/=10;} \
sum; \
})
 


#define add_with_Macro(a, b) (a + b)  //macro definition

void add(int a, int b)
{
    printf("Added value=%d\n", a + b);
}
void multiply(int a, int b)
{
    printf("Multiplied value=%d\n", a * b);
}

#endif  // C_INIT_H


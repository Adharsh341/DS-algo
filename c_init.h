#ifndef C_INIT_H
#define C_INIT_H
#define ELE 4, 5, 6
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
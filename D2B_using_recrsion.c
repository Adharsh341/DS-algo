#include <stdio.h>

void decimal_to_binary(int n) {
    if (n > 1) {
        decimal_to_binary(n / 2);
    }
    printf("%d", n % 2);
}

int disp_val(){
    printf("\nhello world");
    return 0;
}
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);
    decimal_to_binary(num);
    disp_val();
    printf("\n");

    return 0;
}
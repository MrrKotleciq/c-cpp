#include <stdio.h>

int multiply(int a, int b){
    return(a*b);
}

int main(){
    int i, j, result;
    printf("Please enter 2 number you want to multiply... ");
    scanf("%d%d", &i,&j);

    result = multiply(i, j);
    printf("The result is: %d", result);

    return 0;
}
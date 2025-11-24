#include <stdio.h>

/*int main()
{
    printf("Hello World");
    return 0;
}*/
int main() {
    // int num = 7;
    // char ch = 'Z';
    // float pi = 3.14;

    // printf("%i\n", &ch);
    // printf("%i\n", num);
    // num = 4;
    // printf("%i\n", *ptr);
    // printf("%i\n", num);
    // const int *ptr = &num;

    // int age;
    // char gender;
    // printf("Enter your age and then your gender (M, F or O)\n");
    // scanf("%i %c", &age, &gender);
    // printf("You entered: %i and %c", age, gender);
    
    int x = 3;
    int y = 5u;
    
    // printf("Please, input an integer: ");
    // int a = scanf("%c");
    // printf("%i", a );
    
    unsigned int z = y<<20;
    //printf("%i", z); 

    //(x>y) ? (printf("x is larger then y\n")) : (printf("x equals: %i\n", x++));
    //(x>y) ? (printf("x is larger then y\n")) : (printf("x equals: %i\n", x++));
    //(x>y) ? (printf("x is larger then y\n")) : (printf("x equals: %i\n", x++));
    //(x>y) ? (printf("x is larger then y\n")) : (printf("x equals: %i\n", x++));

    char b = 'B';
    int h = ++b;
    printf("%i", h);
    char l = --h;
    printf("%c", l);

    return 0;
}
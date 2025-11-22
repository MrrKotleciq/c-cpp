#include <stdio.h>

/*int main()
{
    printf("Hello World");
    return 0;
}*/
int main() {
    int num = 7;
    char ch = 'Z';
    float pi = 3.14;


    const int* ptr = &num;

    printf("%i\n", num);
    num = 4;
    printf("%i\n", ptr);
    printf("%i\n", num);

    return 0;
}
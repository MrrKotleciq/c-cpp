#include <stdio.h>

// void giveMeArray(int a){
    // printf("%d", a);   
// }

float findAverage(int marks[]){
    float avg;
    int i, sum = 0;
    for (i = 0 ; i <= 2; i++){
        sum += marks[i];
    }
    avg = sum/3;
    return avg;
}

int main(){
    float avg;  
    int myArray[] = {2, 3, 4};
    avg = findAverage(myArray);
    printf("Average marks = %.1f", avg);
    return 0;
}


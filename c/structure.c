#include<stdio.h>
#include<string.h>

struct Patient{
    char name[25];
    int age;
    float height;
    int weight;
};



int main(){

    struct Patient p1 = {"kornel",15,184.5,65};
    printf("%s\t%dy\t%0.1fcm\t%dkg",p1.name,p1.age,p1.height,p1.weight);

}


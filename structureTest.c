//
// Created by khine on 11/22/2022.
//
#include "stdio.h"
#include "string.h"
struct Labour{
    int age;
    char carr[100];
};
int main(){
    struct Labour L1;
    L1.age=24;
    strcpy(L1.carr,"SYH");

    printf("Labour Age: %d\n",L1.age);
    printf("Labour Name: %s",L1.carr);
    return 0;
}


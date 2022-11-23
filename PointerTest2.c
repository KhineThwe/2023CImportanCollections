//
// Created by khine on 11/22/2022.
//
#include "stdio.h"
void passByPointer(int *value);
int main(){
    int *p;
    int data =20;
    p=&data;
    passByPointer(p);
    printf("Pass by pointer value: %d",*p);//value
    return 0;
}
void passByPointer(int *value){
    (*value)++;
}


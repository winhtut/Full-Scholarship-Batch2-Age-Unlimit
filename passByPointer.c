//
// Created by National Cyber City on 8/30/2022.
//
// pointer store address of another variable

#include "stdio.h"
void doSomething(int* ptr);
int main(){


    int data=10;
    int* ptr;

    ptr = &data ;

    doSomething(ptr);

    printf(" value of ptr %d ",*ptr);

    return 0;
}

void doSomething(int* ptr){

    (*ptr)++;


}

//
// Created by National Cyber City on 8/30/2022.
//

#include "stdio.h"
void myFun(int* a, int* b);
int main(){

    int firstData=10;
    int secondData=20;
//    printf("Enter first Value:");
//    scanf("%d",&firstData);
//
//    printf("Enter Second value:");
//    scanf("%d",&secondData);

    printf("Before Passing firstData = %d , SecondData = %d ",firstData , secondData);

    myFun(&firstData , &secondData);

    //printf("Return Value : %d\n",returnValue);

    printf("\nAfter Passing firstData = %d , SecondData = %d \n",firstData , secondData);

    return 0;
}

void myFun(int* a, int* b){

    int temp= *a*10;
    *a = *b*10;
    *b = temp;
}

//
// Created by National Cyber City on 8/30/2022.
//
// pointer store address of another variable

#include "stdio.h"
#include "string.h"

int main(){


    char myarr[10]={'N','C','C'};

    char myarr2[10]= {'G','E','n','i','u','s'};

    char myString[100];
    strcpy(myString,myarr);
    strcpy(myString,myarr2);

    printf("Data: %s\n",myString);

    strcat(myarr,myarr2);

    printf("Data: %s",myarr);
    printf(" length Data: %d", strlen(myarr));


    return 0;
}

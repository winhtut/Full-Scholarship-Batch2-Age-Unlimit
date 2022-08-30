//
// Created by National Cyber City on 8/30/2022.
//
// pointer store address of another variable

#include "stdio.h"
#include "string.h"

int main(){
    int index=0;

    char myarr[10]={'N','C','C','\0'};

    char myarr2[10]= {'G','E','n','i','u','s','\0'};

    char myarr3[10]={'H','E','L','L','o','\0'};

    char totalArary[100];

    for(int i =0 ; myarr[i] != '\0' ; i++){

        totalArary[i] = myarr[i];
        index = index + i;

    }

    printf(" myarr data: %s\n",totalArary);
    printf(" Index number: %d\n",index);


    for(int i =0 ; myarr2[i] != '\0' ; i++){

        totalArary[index] = myarr2[i];
        index++;


    }
    printf(" myarr data: %s\n",totalArary);
    printf(" Last Index number: %d\n",index);

    for(int i =0 ; myarr3[i] != '\0' ; i++){

        totalArary[index] = myarr3[i];
        index++;
    }
    printf(" @myarr data: %s\n",totalArary);
    printf(" @Last Index number: %d\n",index);


    for(int x=0 ; x<index ; x++){

        if( totalArary[x] == 'n'){

            printf("We found at index %d \n",x);


        }

    }

    printf(" Sizeof arr %d\n",sizeof(totalArary));


    return 0;
}

//
// Created by National Cyber City on 9/12/2022.
//


#include "stdio.h"
#include "stdlib.h"

int main(){
    char string[1000];
    FILE *fptr;

    fptr = fopen("fullScholar.txt","a");

    if(fptr == NULL){
        printf("File opening error");
        exit(0);

    }

    printf("Enter some string:");
    fgets(string , sizeof(string) , stdin );

    fprintf(fptr , "%s" , string);
    fclose(fptr);


    return 0;
}

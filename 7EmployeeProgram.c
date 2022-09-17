//
// Created by National Cyber City on 9/5/2022.
//

#include "stdio.h"
#include "stdlib.h"

int main(){

    FILE *fptr;

    if((fptr = fopen("clients.txt","w")) == NULL){

        puts("File cannot open!");
        exit(1);

    } else{

        puts("Enter the amoutn , age , name , balance");
        puts("Enter EOF to end input.");
        printf(">:");

        unsigned int account;
        int age;
        char name[30];
        double balance;

        scanf("%d%d%20s%lf",&account , &age , name , &balance);

        while (!feof(stdin)){
            fprintf(fptr , "%d%d%20s%lf",account ,age , name , balance);
            printf(">:");
            scanf("%d%d%20s%lf",&account , &age , name , &balance);

        }

        fclose(fptr);

        return 0;

    }

}

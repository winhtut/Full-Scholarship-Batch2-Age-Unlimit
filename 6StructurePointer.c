//
// Created by National Cyber City on 9/6/2022.
//Structure Pointer
// Win Htut
//

#include "stdio.h"
#include "stdlib.h"


struct MovieInfo{

    char *name;
    char *director;
    int age;

};


int main(){

    struct MovieInfo *WinHtut;

    WinHtut =(struct MovieInfo*)malloc(sizeof(struct MovieInfo));

    WinHtut->name="WinHtut";
    WinHtut->director="NationalCyberCity";


    printf("Movie Name:%s\n",WinHtut->name);
    printf("Movie Director:%s",WinHtut->director);

    return 0;

}

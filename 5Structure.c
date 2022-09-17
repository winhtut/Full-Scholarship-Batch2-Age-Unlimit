//
// Created by National Cyber City on 9/6/2022.
//

//
// Created by National Cyber City on 9/6/2022.
//structure struct
//

#include "stdio.h"
#include "string.h"
void getNames(struct Human_data *hd);
struct Human_data{

    char name[20];
    char fname[20];
    char hobby[20];
    int age=0;

};

int main(){
    struct Human_data Name1;
    struct Human_data Name2;
    struct Human_data Name3;

    strcpy(Name1.name , "Win Htut");
    strcpy(Name1.fname , "fffWinHtut");
    strcpy(Name1.hobby , "Research");
    Name1.age=111;

    strcpy(Name2.name , "Shin");
    strcpy(Name2.fname , "xxxxxxxx");
    strcpy(Name2.hobby , "@@@@@@@@@");
    Name2.age=101;

    strcpy(Name3.name , "ShinYell");
    strcpy(Name3.fname , "shinyell");
    strcpy(Name3.hobby , "testing");
    Name2.age=101;


    getNames(&Name1);
    getNames(&Name2);
    getNames(&Name3);

    return 0;

}

void getNames(struct Human_data *hd){
    printf("Name:%s\n",hd->name);
    printf("Father Name:%s\n",hd->fname);
    printf("Hobby :%s\n",hd->hobby);
    printf("Age :%d\n",hd->age);
}



//
// Created by National Cyber City on 9/12/2022.
// For FullScholar
//

#include "stdio.h"
#define SIZE 100


int main(){

    int number ;
    int data[SIZE]={ 10 , 20, 30, 50,400,100,200,300,5};
    int lossData = data[0];

    for(int j=1 ;  j < SIZE ; j++){

        if( data[0] < data[j]){
            data[0] = data[j];
        }
    }
    printf(" Largest Elements of array : %d",data[0]);

    data[0]=lossData;

    printf("\n\nAll elements from array: ");
    for ( int k = 0 ; k<SIZE  ; k++){
        printf(" %d",data[k]);
    }

    return 0;
}

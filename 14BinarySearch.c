//
// Created by National Cyber City on 9/13/2022.
// Searching Binary Search
//

#include "stdio.h"

int binarySearch(int arrayData[] , int toFind , int low , int high ){ // return 1 or -1 (not found )

    while (low <= high){
        int mid = low + ( high-low)/2 ;

        if( arrayData[mid] == toFind)
            return mid;
        if( arrayData[mid] < toFind)
            low = mid + 1 ;
        else
            high = mid - 1 ;
    }
    return -1;
}
int main(){
    int toFind=0;
    int data[] = {1,5,6,7,8,10,20,30,40 , 100 , 200 , 300};
    printf(" Enter data to find:");
    scanf("%d",&toFind);
    int size =sizeof (data) / sizeof (data[0]);
    int result = binarySearch(data ,toFind , 0 ,size-1 );
    if (result == -1){

        printf("Data not found ");
    } else{
        printf("Data found!");

    }
    return 0;

}


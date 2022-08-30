// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// size * data =  4*3 = 12

#include <iostream>

int main()
{

    int x[10] = { 1, 50, 3, 10, 20 , 30 , 40 };
    int* ptr;

    char a='a';
    ptr = &x[2];

    printf("Address of Pointer %d\n",ptr);

    printf("value of Pointer %d\n",*ptr);


    printf("*(ptr+1) = %d \n", *(ptr + 1));


    printf("*(ptr+2)value = %d \n", *(ptr + 3));

    printf("*(ptr+2)address = %d \n", ptr + a);

    return 0;

}


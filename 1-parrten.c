// for loop

#include <stdio.h>

int main() {

    int i=0;
    int j=10;
    int x=10;
    int y=0;

    for ( i=0 ; i<x ; i++){

        for(int ii=0 ; ii<i+1 ; ii++){

            printf("*");
        }
       for ( y=0; y<(i*2)+2 ; y++){

           printf("#");
       }

// Aprial Naing
// z<x*6-((6*i)+6)
// Soe Htet
//z<=(x*6)-((i+1)*6)
// Min Thu Aung
// z<=6*((8-i)+1)

       for ( int z=0 ; z<=(x*6)-((i+1)*6) ; z++){
    printf(" ");

        }
       for( int a=0; a<(i*2)+2 ; a++){

           printf("#");
       }

        for(int b=0 ; b<i+1 ; b++){

            printf("*");
        }

        printf("\n");
    }

    return 0;
}

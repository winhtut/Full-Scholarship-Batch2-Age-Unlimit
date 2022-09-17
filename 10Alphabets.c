//
// Created by National Cyber City on 9/12/2022.
//

#include <stdio.h>
int main() {
    char line[150];


    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin); // take input


    for (int i = 0, j; line[i] != '\0'; ++i) {

        // enter the loop if the character is not an alphabet
        // and not the null character
        while (!(line[i] >= 'a' && line[i] <= 'z') &&!(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
            for (j = i; line[j] != '\0'; ++j) {

                // if jth element of line is not an alphabet,
                // assign the value of (j+1)th element to the jth element

                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(line);
    return 0;
}

// bc100cb
//asdklfja;skldfj;klasjdf;kljas;ldfjk;lasjd;fjasd;fkjas;ldfaksdfja;sdfja;sfksa;d

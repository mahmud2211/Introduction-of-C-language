#include <stdio.h>

int main() {
    int N = 11; // the size of the tree
    int i, j, k; // loop variables
    int space; // the number of spaces before each row
    int star; // the number of stars in each row

    space = N - 1; // initialize the number of spaces before the first star
    star = 1; // initialize the number of stars in the first line

    for (i = 1; i <= N; i++) { // loop for each line of the tree
        for (j = 1; j <= space; j++) { // loop to print spaces
            printf(" ");
        }
        for (k = 1; k <= star; k++) { // loop to print stars
            printf("*");
        }
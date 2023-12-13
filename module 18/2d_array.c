#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the tree

    if (N % 2 == 0) {
        printf("Please enter an odd number for the tree size.\n");
        return 1; // Exit the program with an error code
    }

    // Loop variables
    int space = N / 2; // Initialize the number of spaces before the first star
    int star = 1;      // Initialize the number of stars in the first line

    // Loop to print the tree
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= star; k++) {
            printf("*"); // Print stars
        }
        printf("\n"); // Move to the next line
        if (i < N / 2 + 1) {
            space--;
            star += 2;
        } else {
            space++;
            star -= 2;
        }
    }

    // Adjust space and star for the trunk
    space = N / 2;
    star = 3;

    // Loop to print the trunk
    for (int i = 1; i <= N / 3; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= star; k++) {
            printf("*"); // Print trunk
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
#include <stdio.h>

// Define constants for the characters
#define STAR '*'
#define SPACE ' '

// Define a function that prints one line with the given number of spaces and stars
void print_line(int space, int star) {
    for (int i = 0; i < space; i++) {
        printf("%c", SPACE); // Print spaces
    }
    for (int i = 0; i < star; i++) {
        printf("%c", STAR); // Print stars
    }
    printf("\n"); // Move to the next line
}

int main() {
    int tree_size;
    scanf("%d", &tree_size); // Input the size of the tree

    if (tree_size % 2 == 0) {
        printf("Please enter an odd number for the tree size.\n");
        return 1; // Exit the program with an error code
    }

    // Initialize the number of spaces before the first star and the number of stars in the first line
    int space = tree_size / 2;
    int star = 1;

    // Print the upper half of the tree with increasing stars and decreasing spaces
    for (int i = 0; i < tree_size / 2 + 1; i++) {
        print_line(space, star);
        space--;
        star += 2;
    }

    // Print the lower half of the tree with decreasing stars and increasing spaces
    for (int i = 0; i < tree_size / 2; i++) {
        space++;
        star -= 2;
        print_line(space, star);
    }

    // Adjust space and star for the trunk
    space = tree_size / 2;
    star = 3;

    // Print the trunk with constant stars and spaces
    for (int i = 0; i < tree_size / 3; i++) {
        print_line(space, star);
    }

    return 0;
}

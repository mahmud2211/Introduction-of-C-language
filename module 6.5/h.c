#include<stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    
    if (a >= 97 && a <= 122) {
        char i = a + 1;
        printf("%c", i);

        if (i > 122) {
            i = 97; // Wrap around to 'a'
            printf("%c", i);
        }
    }
    
    return 0;
}

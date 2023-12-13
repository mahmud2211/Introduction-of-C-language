#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        
        scanf("%d %d %d", &M1, &M2, &D);
        // Calculate the original time it takes for M1 farmers
        int original_time = D / M1;

        // Calculate the new time it takes for (M1 + M2) farmers
        int new_time = D / (M1 + M2);

        // Calculate how many fewer days it will take
        int days_saved = original_time - new_time;

        printf("%dc\n", days_saved);
    }

    return 0;
}
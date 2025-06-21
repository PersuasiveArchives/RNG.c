
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {  
    int min, max, randomNumber;

    printf("=== RANDOM NUMBER GENERATOR ===\n");

    printf("Step 1: Enter the minimum value: ");
    scanf("%d", &min);

    printf("Step 2: Enter the maximum value: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Swapping values since min > max...\n");
        int temp = min;
        min = max;
        max = temp;
    }

    srand((unsigned int) time(NULL));
    randomNumber = (rand() % (max - min + 1)) + min;

    printf("Done! Your random number between %d and %d is: %d\n", min, max, randomNumber);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char recheck[4];
    int numbers[5];

    printf("This is the third day of learning C.\n");
    printf("Complex Way To Find Largest Number.\n");
    printf("Please Enter 5 numbers.\n");


    for (int i = 0; i < 5; i++) {
        printf("Enter The Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Are these numbers correct? (yes/no): ");
    scanf(" %3s", recheck);

    if (_stricmp(recheck, "yes") == 0) {
        printf("Awesome! Let's find the largest number.\n\n");
    } else if (_stricmp(recheck, "no") == 0) {
        printf("Oh no! You must have made a typo when entering them.\n\n");
    } else {
        printf("I didn't understand that response, but let's move on!\n\n");
    }

    int largest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("----------------------------------------\n");
    printf("The largest number you entered is: %d\n", largest);
    printf("----------------------------------------\n");

    return 0;
}

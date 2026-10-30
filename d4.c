#include <stdio.h>

int main() {
    int Marks[7];
    int total_marks_obtained = 0;
    float average;
    
    printf("=== DAY 4: Student Report Card Tracker ===\n\n");
    printf("Please Enter The Marks Obtained In 7 subjects (0-100):\n\n");

   
    for (int i = 0; i < 7; i++) {
        
        
        while (1) {
            printf("Enter grade for Subject %d: ", i + 1);
            scanf("%d", &Marks[i]);

           
            if (Marks[i] >= 0 && Marks[i] <= 100) {
                break; 
            } 
            else {
                
                printf("Error: The Highest Marks possible is 100, and lowest is 0. Try again.\n\n");
            }
        }
    }

    
    printf("\nSuccess! You recorded these valid marks: ");
    for (int i = 0; i < 7; i++) {
        printf("%d%% ", Marks[i]);
    }
    printf("\n");
    for (int i=0; i<7; i++){
        total_marks_obtained  += Marks[i];
    }
    average = (float) total_marks_obtained  / 7;
     printf("========================================\n");
    printf("         OFFICIAL REPORT CARD          \n");
    printf("========================================\n");
    printf("Total Points Earned: %d / 500\n", total_marks_obtained );
    printf("Final Grade Average: %.2f%%\n", average);
    printf("----------------------------------------\n");
     if (average >= 50.0) {
        printf("Final Status: PASSED \n");
    } else {
        printf("Final Status: FAILED (Needs Academic Review)\n");
    }
    printf("========================================\n");

    return 0;
}



#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    printf("Student Grade Calculator\n");

    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    if (mark1 < 0 || mark1 > 100 ||
        mark2 < 0 || mark2 > 100 ||
        mark3 < 0 || mark3 > 100) {
        printf("Invalid marks! Enter marks from 0 to 100.\n");
        return 1;
    }

    average = (mark1 + mark2 + mark3) / 3.0f;

    printf("Average: %.2f\n", average);

    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}

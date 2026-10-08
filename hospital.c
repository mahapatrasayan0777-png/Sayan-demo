#include <stdio.h>
int main() {
    int n, i;
    int patients[100];
    int max, min, maxHour;
    int aboveAverage = 0;
    float sum = 0, average;
    printf("Enter number of hours: ");
    scanf("%d", &n);
    printf("Enter number of patients for each hour:\n");
    for (i = 0; i < n; i++) {
        printf("Hour %d: ", i + 1);
        scanf("%d", &patients[i]);
        sum += patients[i];
    }
    max = patients[0];
    min = patients[0];
    maxHour = 0;

    for (i = 1; i < n; i++) {
        if (patients[i] > max) {
            max = patients[i];
            maxHour = i;
        }

        if (patients[i] < min) {
            min = patients[i];
        }
    }

    average = sum / n;

    for (i = 0; i < n; i++) {
        if (patients[i] > average)
            aboveAverage++;
    }
    printf("\nMaximum patients = %d", max);
    printf("\nHour of maximum patients = %d", maxHour + 1);
    printf("\nMinimum patients = %d", min);
    printf("\nPeak hour = Hour %d", maxHour + 1);
    printf("\nAverage patients = %.2f", average);
    printf("\nHours above average = %d\n", aboveAverage);

    return 0;
}

#include <stdio.h>
int main() {
    int n, i, count = 0, pos = 0;
    float attendance[100], threshold;
    float min, sum = 0, average;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter attendance percentages:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &attendance[i]);
        sum += attendance[i];
    }
    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

    min = attendance[0];

    for (i = 0; i < n; i++) {
        if (attendance[i] < threshold)
            count++;
        if (attendance[i] < min) {
            min = attendance[i];
            pos = i;
        }
    }

    average = sum / n;

    printf("\nStudents below threshold = %d", count);
    printf("\nLowest attendance = %.2f%%", min);
    printf("\nPosition of lowest attendance = %d", pos + 1);
    printf("\nAverage attendance = %.2f%%\n", average);

    return 0;
}

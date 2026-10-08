#include <stdio.h>
#include <string.h>
#include <ctype.h>

int caseInsensitiveCompare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (tolower(str1[i]) != tolower(str2[i]))
            return 0;
        i++;
    }

    return str1[i] == '\0' && str2[i] == '\0';
}

int main() {
    int n, i;
    char names[100][50];
    char searchName[50];
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("\nEnter name to search: ");
    scanf("%s", searchName);

    /* Case-sensitive search */
    printf("\nCase-Sensitive Search:\n");

    found = 0;

    for (i = 0; i < n; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Student found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
    printf("\nCase-Insensitive Search:\n");

    found = 0;

    for (i = 0; i < n; i++) {
        if (caseInsensitiveCompare(names[i], searchName)) {
            printf("Student found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");

    return 0;
}

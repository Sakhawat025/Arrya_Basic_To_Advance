#include <stdio.h>

int main() {
    int marks[100];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    int highestMark = marks[0];
    int lowestMark = marks[0];

    for (int i = 1; i < 10; i++) {
        if (marks[i] > highestMark) {
            highestMark = marks[i];
        }
        if (marks[i] < lowestMark) {
            lowestMark = marks[i];
        }
    }

    printf("Highest Mark: %d\n", highestMark);
    printf("Lowest Mark: %d\n", lowestMark);

    return 0;
}

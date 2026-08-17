#include <stdio.h>
#include <stdlib.h>

// Sort array using bubble sort
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Calculate mean
double calculateMean(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (double) sum / size;
}

// Calculate median
double calculateMedian(int arr[], int size) {
    int *copy = malloc(size * sizeof(int));

    if (copy == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        copy[i] = arr[i];
    }

    sortArray(copy, size);

    double median;

    if (size % 2 == 0) {
        median = (copy[size / 2 - 1] + copy[size / 2]) / 2.0;
    } else {
        median = copy[size / 2];
    }

    free(copy);
    return median;
}

// Calculate mode
void calculateMode(int arr[], int size) {
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
        }
    }

    printf("Mode(s): ");

    for (int i = 0; i < size; i++) {
        int count = 0;
        int alreadyPrinted = 0;

        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                alreadyPrinted = 1;
            }
        }

        if (count == maxCount && !alreadyPrinted) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int numbers[] = {1, 2, 2, 3, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("C Statistics Calculator\n");
    printf("-----------------------\n");

    printf("Numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Mean: %.2f\n", calculateMean(numbers, size));
    printf("Median: %.2f\n", calculateMedian(numbers, size));
    calculateMode(numbers, size);

    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100



void insert(int arr[], int *size, int element, int position) {
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

void deleteElement(int arr[], int *size, int position) {
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
 search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}


void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
    } else {
        printf("Array elements: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0, choice, element, position, result;

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element :");
                scanf("%d", &element);
                printf("Enter position (1 to %d): ", size + 1);
                scanf("%d", &position);
                if (position >= 1 && position <= size + 1) {
                    insert(arr, &size, element, position - 1);
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Invalid Operation!");
                }
                break;

            case 2:
                printf("Enter position to delete (1 to %d): ", size);
                scanf("%d", &position);
                if (position >= 1 && position <= size) {
                    deleteElement(arr, &size, position - 1);
                    printf("Element deleted successfully.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                result = search(arr, size, element);
                if (result != -1) {
                    printf("Element found at position %d.\n", result + 1);
                } else {
                    printf("Element not found.\n");
                }
                break;

            case 4:
                    display(arr,size);
                    break;


            case 5:
               printf("Exiting The Program");
               break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}


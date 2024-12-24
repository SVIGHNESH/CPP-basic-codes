#include <stdio.h>
#define MAX_SIZE 100

int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

void insert(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }
    
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

// New function to insert multiple elements
void insertMultiple(int arr[], int *size) {
    int count;
    printf("How many elements do you want to insert? ");
    scanf("%d", &count);
    
    if (*size + count > MAX_SIZE) {
        printf("Cannot insert %d elements. Only space for %d more elements.\n", 
               count, MAX_SIZE - *size);
        count = MAX_SIZE - *size;
    }
    
    if (count <= 0) {
        printf("Invalid number of elements!\n");
        return;
    }
    
    printf("Enter %d elements:\n", count);
    for (int i = 0; i < count; i++) {
        if (*size >= MAX_SIZE) {
            printf("Array is now full. Stopping insertion.\n");
            break;
        }
        int element;
        printf("Element %d: ", i + 1);
        scanf("%d", &element);
        arr[*size] = element;
        (*size)++;
    }
    printf("%d elements inserted successfully.\n", count);
}

void deleteElement(int arr[], int *size, int position) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete elements.\n");
        return;
    }
    
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
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
        printf("1. Insert Single Element\n");
        printf("2. Insert Multiple Elements\n");
        printf("3. Delete Element\n");
        printf("4. Search in the Array\n");
        printf("5. Display Array\n");
        printf("6. Exit from the implementation\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                if (size >= MAX_SIZE) {
                    printf("Array is full!\n");
                    break;
                }
                printf("Enter the element: ");
                scanf("%d", &element);
                printf("Enter position (1 to %d): ", size + 1);
                scanf("%d", &position);
                if (position >= 1 && position <= size + 1) {
                    insert(arr, &size, element, position - 1);
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 2:
                insertMultiple(arr, &size);
                break;

            case 3:
                if (size <= 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter position to delete (1 to %d): ", size);
                scanf("%d", &position);
                if (position >= 1 && position <= size) {
                    deleteElement(arr, &size, position - 1);
                    printf("Element deleted successfully.\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 4:
                if (size <= 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter element to search: ");
                scanf("%d", &element);
                result = search(arr, size, element);
                if (result != -1) {
                    printf("Element found at position %d.\n", result + 1);
                } else {
                    printf("Element not found.\n");
                }
                break;

            case 5:
                display(arr, size);
                break;

            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    return 0;
}
#include <iostream>
#include "queue.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("SIMPLE LINKED LIST using structures\n");
    printf("1. Add an element to the queue\n");
    printf("2. Remove an element from the queue\n");
    printf("3. Read an element from the queue\n");
    printf("4. Is the queue empty\n");
    printf("5. Print the queue inventory\n\n");
    printf("0. Exit\n\n");
}

int main()
{
    int value = 0, index = 0, option = 0, errorCode = 0;

    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("Not an integer! Input an integer: ");
            clear();
        }
        switch (option) {
            case 1: // add at the front

                printf("Input a number to be added: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = insertBack(value);
                !errorCode ? printf("Added successfully!\n\n") : printf("Failed to add.\n\n");
                break;


            case 2: // add at the back

                errorCode = deleteBack();
                !errorCode ? printf("Last element deleted successfully!\n\n") : printf("Failed to delete the last element.\n\n");
                break;
            case 3: // add after a certain node


                if (!isStackempty()) {
                    int value = Top();
                    printf("Recorded element: %d\n", value);
                } else {
                    printf("Operacja niedozwolona: kolejka pusty!!!\n\n");
                }
                break;

            case 4: // delete the first element

                if (isStackempty()) {
                    printf("Queue is empty.\n");
                }
                else {
                    printf("Queue is not empty.\n");
                }
                break;

            case 5: // delete the first element
                printf("Queue: ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;


            case 0:
                freeList();
                return 0;

            default:

                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }
    freeList();
    return 0;
}
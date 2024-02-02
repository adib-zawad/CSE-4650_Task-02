// test_reverse.c

#include <stdio.h>
#include <stdlib.h>

void reverse_arr(char *array, int num_elements);

int main(int argc, char *argv[]) {
    // Check if there are enough command-line arguments
    if (argc < 2) {
        printf("Usage: %s <NUM_ELEMENTS> <ELEMENT0 ELEMENT1 ELEMENT2 ...>\n", argv[0]);
        return 1;
    }

    // Parse the number of elements
    int num_elements = atoi(argv[1]);

    // Check if the number of provided elements matches the expected number
    if (argc != num_elements + 2) {
        printf("Invalid number of elements provided\n");
        return 1;
    }

    // Create an array to store the elements
    char array[num_elements];

    // Parse and store the elements in the array
    for (int i = 0; i < num_elements; i++) {
        array[i] = *argv[i + 2];
    }

    // Reverse the array
    reverse_arr(array, num_elements);

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");

    return 0;
}

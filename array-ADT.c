#include <stdio.h>
#include <stdlib.h>

// Defining the structure for the abstract data type myArray
struct myArray
{
    int total_size; // Total size of the array
    int used_size;  // Number of elements used in the array
    int *ptr;       // Pointer to the dynamically allocated array
};

// Function to create an array
void createArray(struct myArray *a, int tSize, int uSize)
{
    // Assigning total_size, used_size, and allocating memory for the array
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

// Function to display elements of the array
void show(struct myArray *a)
{
    // Loop through each used element and print it
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

// Function to set values of elements in the array
void setVal(struct myArray *a)
{
    int n;
    // Loop through each used element and take input from the user
    for (int i = 0; i < a->used_size; i++) // used size is 2 on that case
    {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

// Main function
int main()
{
    // Creating an instance of myArray struct named marks
    struct myArray marks;
    // Creating an array with total size 10 and used size 2
    createArray(&marks, 10, 2);

    printf("We are running setVal now\n");
    // Setting values for elements in the array
    setVal(&marks);

    printf("We are running show now\n");
    // Displaying elements of the array
    show(&marks);

    // Freeing dynamically allocated memory
    free(marks.ptr);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int columns, int values) 
{
    int **matrix; 
    // allocate space for the number of rows in the matrix
    matrix = malloc(sizeof(int *) * rows);

    // fill each space with a value
    for (int i = 0; i < rows; i++)
    {
        // allocate space for the columns
        matrix[i] = malloc(sizeof(int) * columns);
        for (int l=0; l < columns; l++)
        {
            matrix[i][l] = values;
        }     
    }
    // return the matrix
    return matrix;
}

int main() 
{
    // define number of rows and columns and fill value
    int rows = 4;
    int columns = 4;
    int fill_value = 9;

    // create matrix
    int **matrix = create_matrix(rows, columns, fill_value);

    // print the value at each row
    for (int i = 0; i < rows; i++)
    {
        for (int l=0; l < columns; l++)
           printf("%d ", matrix[i][l]);
        // go to a new line after each row
        printf("\n");
    }

    // free the memory of the pointers to ints
    for (int i = 0; i < rows; i++) 
    {
        free(matrix[i]);
    }
    // free memory
    free(matrix);
    
}
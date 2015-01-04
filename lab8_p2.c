/*	Author: Parker Mathewson
 *	Date: 3/28/12
 *	Comment: This program is to read a 5x5 matrix in using 2D arrays and do a simple function.
 */

#include <stdio.h>
#define ROWS 5
#define COLS 5

int main(void)
{
	float our_array[ROWS][COLS];
	float minimum_value;
	FILE *input_file;
	int row_counter = 0, col_counter = 0, store_counter_row = 0, store_counter_col = 0;

	input_file = fopen("data.txt", "r");
	if(input_file == NULL)
	{
		printf("There was an error reading the file");
	}
	else
	{
		for(row_counter = 0; row_counter < ROWS; row_counter++)
		{
			for(col_counter = 0; col_counter < COLS; col_counter++)
			{
				fscanf(input_file,"%f", &our_array[row_counter][col_counter]);
				if(row_counter == 0 && col_counter == 0)
				{
					minimum_value = our_array [row_counter][col_counter];
				}
				else if(our_array[row_counter][col_counter] <= minimum_value)
				{
					minimum_value = our_array[row_counter][col_counter];
					store_counter_row = row_counter;
					store_counter_col = col_counter;
				}
				printf("%.2f ", our_array[row_counter][col_counter]);
			}
			printf("\n");
		}
		printf("The minimium (%.2f) is at row %d and column %d\n", minimum_value, (store_counter_row+1), (store_counter_col+1));
	}
	

	return(0);
}

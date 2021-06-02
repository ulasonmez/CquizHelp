#include <stdio.h>
#include <stdlib.h>

int main() {
  //Creating of the array matrix.
	int matrix[5][5]={{2,0,2,0,0},{0,1,0,0,0},{3,0,6,0,0},{0,4,0,1,0},{0,0,0,7,1}};

//looping thru all the elements of the array with nested for loop
	for(int i=0;i<5;i++){
		for(int j =0;j<5;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

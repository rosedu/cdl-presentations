#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, **a, j;
	n = 6;
	a = (int*) malloc(n * sizeof(char));
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++)
			a[i][j] = i + (j-1);
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}

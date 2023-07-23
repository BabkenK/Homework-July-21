#include <stdio.h>

int main () {
	int n, i;

	printf("Enter the size  of the array: ");
	scanf("%d", &n);

	char array[n];
	printf("Enter  %d characters in the  array: ", n);
	scanf("%s", array);
       	}
	printf("Numbers  in the array : ");
	for (int i = 0, i < n; i++) {
       	if (array [i] >= '0' && array [i] <= '9'){
		printf("%c", array[i]);
	}
	return 0;
}


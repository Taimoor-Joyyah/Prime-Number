#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	printf("Prime Number in Limit/n");
	printf("Limit > ");
	int lim;
	scanf("%d", &lim);
	int slim = sqrt(lim);
	int arr[slim], i, k, w = 1, over, c = 1;
	arr[0] = 2;
	printf("2  ");
	for(i = 3; i <= lim; i+=2) {
		over = 0;
		k = 0;
		while(over != 1) {
			if(i % arr[k] == 0) {
				over = 1;
			}
			else if(arr[k] > sqrt(i)) {
				printf("%d  ", i);
				if(arr[w - 1] <= slim) {
					arr[w] = i;
					w++;
				}
				c++;
				over = 1;
			}
			k++;
		}
	}
	printf("\nCount = %d", c);
	return 0;
}

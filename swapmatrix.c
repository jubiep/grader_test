#include <stdio.h>

int main(){
	
	int A[4][5];
	int a, b, c, d, temp, i, j, count = 0, max;
	
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	temp = A[a][b];
	A[a][b] = A[c][d];
	A[c][d] = temp;
	
	for (i=0; i<4; i++){
		max = A[i][0];
		for (j=0; j<5; j++){
			if (A[i][j] > max){
				max = A[i][j];
			}
		}
		printf("%d ", max);
	}
	
	return 0;
}

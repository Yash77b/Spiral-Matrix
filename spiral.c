#include <stdio.h>
int main()  {
	int n = 5;
	int a[5][5] = {0};
	int num = 1;

	a[0][0] = num++;
	
	for (int k = 2; k <= n; k++) {
		int col = k - 1;
		int row = k - 1;

		for (int r = 0; r <= row; r++) {
				a[r][col] = num++;
		}

		for (int c = col - 1; c >= 0; c--) {
				a[row][c] = num++;
		}
}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%3d ", a[i][j]);
			}
			printf("\n");
		}
		return 0;
}

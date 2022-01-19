#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
//commit

void black_white(int a[][COLS]) {
	int *p, *endp;
	p = &a[0][0];
	endp = &a[ROWS - 1][COLS - 1];

	while (p <= endp) {
		
		if (*p > 128) {
			*p = 256;
		}
		else {
			*p = 0;
		}
		*p++;
	}
	
	for (int i = 0; i < COLS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (a[i][j] == 256)
				printf("бс ");
			else
				printf("бр ");
		}
		printf("\n");
	}
}
void main() {
	int a[ROWS][COLS] = { 0 };
	
	srand((unsigned)time(NULL));
	for (int i = 0; i < COLS; i++) {
		for (int j = 0; j < COLS; j++) {
			a[i][j] = rand() % 256;
		}
	}
	for (int i = 0; i < COLS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	black_white(a);


}
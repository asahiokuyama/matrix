#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define arraysize 10
// #define arraysize 100
// #define arraysize 1000
#define arraysize 10000

int main(){
	long cpu_time = 0.0;
	srand(time(NULL));
	double a[arraysize][arraysize];
	double b[arraysize][arraysize];
	double c[arraysize][arraysize];

	for (int i = 0; i < arraysize; ++i)
	{
		for (int j = 0; j < arraysize; ++j)
		{
			// scanf("%f",&a[i][j]);
			a[i][j] = (double)rand()/32767.0;
		}
	}

	for (int i = 0; i < arraysize; ++i)
	{
		for (int j = 0; j < arraysize; ++j)
		{
			// scanf("%f", &b[i][j]);
			b[i][j] = (double)rand()/32767.0;
		}
	}

	for (int i = 0; i < arraysize; ++i)
	{
		for (int j = 0; j < arraysize; ++j)
		{
			for (int k = 0; k < arraysize; ++k)
			{
				c[i][j]+=a[i][k] * b[k][j];
			}
		}
	}


	for (int i = 0; i < arraysize; ++i)
	{
		for (int j = 0; j < arraysize; ++j)
		{
			printf("%f ", c[i][j]);
		}
		printf("\n");
		
	}
	cpu_time = clock();
	printf("time for multiplying = %ld\n", cpu_time);
	printf("the size of matricies = %lu\n", sizeof(c)/sizeof(double));
	printf("the memory size of matrices = %lu\n", sizeof c);

	return 0;
}
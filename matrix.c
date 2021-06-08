#include <stdio.h>

#define arraysize 4
int main(){
	float a[arraysize][arraysize];
	float b[arraysize][arraysize];
	float c[arraysize][arraysize]={0,0,0,0,
					0,0,0,0,
					0,0,0,0,
					0,0,0,0};

	for (int i = 0; i < arraysize; ++i)
	{
		for (int j = 0; j < arraysize; ++j)
		{
			scanf("%f",&a[i][j]);
		}
	}

	for (int i = 0; i < arraysize; ++i)
	{
		for (int j = 0; j < arraysize; ++j)
		{
			scanf("%f", &b[i][j]);
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
			printf("%.2f ", c[i][j]);
		}
		printf("\n");
		
	}
	// for (int i = 0; i < 4; ++i)
	// {
	// 	for (int j = 0; j < 4; ++j)
	// 	{
	// 		printf("%d", b[i][j]);
	// 	}
	// 	printf("\n");
		
	// }

	return 0;
}
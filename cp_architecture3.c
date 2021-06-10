#include <stdio.h>
#include <float.h>

int main(){
	// float x = 1.00;
	// double x = 1.00;
	// float x = FLT_MAX;
	double x = DBL_MAX;
	int count = 0;

	while(x > 0.0){
		x = x/2;
		count++;
		printf("%.100f\n", x);
	}

	printf("the number of iterations of loop = %d\n", count);

	return 0;
}
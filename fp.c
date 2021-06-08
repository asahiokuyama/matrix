#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

typedef union {
  float f;
  int i;
 } u;

int main(int argc, char *argv[])
{

	u a[] = { {.i = 0b00000000000000000000000000000000},
		  {.i = 0b00000000000000000000000000000001},
		  {.i = 0b00111101110011001100110011001101}, // 0x3dcccccd
		  {.i = 0b00111111100000000000000000000000},
		  {.i = 0b10111111100000000000000000000000},
		  {.i = 0b00111111000000000000000000000000},
		  {.i = 0b01000000000000000000000000000000},
		  {.i = 0b01000000010000000000000000000000},
		  {.i = 0b01000000010000000000000000000001},
		  {.i = 0b01000000010010010000111111011010},
		  {.i = 0b01000000001011011111100001010100 }
	};
	int i;

	u afp[] = { 0.0,
		    0.1,
		    1.0,
		    -1.0,
		    2.0,
		    4.0,
		    2.72,
		    3.14159,
		    10.0,
		    -10.0
	};

	printf("sizeof(float): %lu\n",sizeof(float));
	for (i = 0 ; i < sizeof(a)/sizeof(float); i++) {
		printf("a[%d]: %.30f 0x%x\n",i,a[i].f,a[i].i);
	}

	printf("\n");

	for (i = 0 ; i < sizeof(afp)/sizeof(float); i++) {
		printf("afp[%d]: %.30f 0x%08x\n",i,afp[i].f,afp[i].i);
	}


}
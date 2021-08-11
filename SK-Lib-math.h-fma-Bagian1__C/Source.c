#include <stdio.h>      /* printf */
#include <math.h>       /* fma, FP_FAST_FMA */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double x, y, z, hasil;
	x = 10.0, y = 20.0, z = 30.0;

#ifdef FP_FAST_FMA
	hasil = fma(x, y, z);
#else
	hasil = x * y + z;
#endif

	printf("10.0 * 20.0 + 30.0 = %f\n", hasil);

	_getch();
	return 0;
}
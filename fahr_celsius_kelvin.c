#include <stdio.h>

int main()
{
	float fahr, cels, kelvin;
	int LOWER, UPPER, STEP;

	STEP = 20; // step size of temperature table
	LOWER = 0; // lower limit of temperature table
	UPPER = 300; // figure it out

	printf("F°  C      K\n");
	printf("==================\n");

	fahr = LOWER;

	while (fahr <= UPPER) {

		cels = (5.0/9.0) * (fahr-32.0);
		kelvin = cels + 273.15;
		printf("%3.0f %6.1f %6.1f\n", fahr, cels, kelvin);
		fahr = fahr + STEP;

	}

}
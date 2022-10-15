#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int a = 3;
	int b = -15;
	int c = 12;
	int delta;
	int xUm;
	int xDois;
	
	delta = (pow (b,2) - 4 * a * c);
	xUm = (((-1 * b) + sqrt(delta)) / (2 * a));
	xDois = (((-1 * b) - sqrt(delta)) / (2 * a));
	
	printf("o valor de delta eh: %d\n", delta);
	printf("o valor de x eh: %d e %d\n", xUm, xDois);
}

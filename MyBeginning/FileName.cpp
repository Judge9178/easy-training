#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	double p, q, x1, x2;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (b * b - 4 * a * c >= 0) {
		p = (-b) / (2 * a);//This is for calculating more convenient.so as below.
		q = (sqrt(b * b - 4 * a * c)) / (2 * a);
		x1 = p + q;
		x2 = p - q;
		printf("x1=%2.2lf\n x2=%2.2lf", x1, x2);
	}
	else {
		printf("wrong\n");
	}
	return 0;




}
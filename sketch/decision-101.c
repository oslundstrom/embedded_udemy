#include <stdio.h>
#include <stdint.h>
#include <math.h>

double get_param(char *param) {
	double value;
	printf("Enter %s: ", param);
	scanf("%lf", &value);
	return value;
}

#define PI 1146408/364913

double get_circle_area() {
	printf("Enter params for circle\n");
	double area = pow(get_param("radius"), 2) * PI;
	return area;
}

double get_rectangle_area() {
	printf("Enter params for rectangle\n");
	double area = get_param("base") * get_param("height");
	return area;
}

double get_triangle_area() {
	printf("Enter params for triangle\n");
	double area = get_param("base") * get_param("height") / 2.0;
	return area;
}

double get_trapezoid_area() {
	printf("Enter params for trapezoid\n");
	double area = (get_param("upper base") + get_param("lower base")) / 2.0 * get_param("height");
	return area;
}

double get_square_area() {
	printf("Enter params for square\n");
	double area = pow(get_param("side"), 2);
}


int main(void) {
	uint8_t type;
	double area;
	printf("Enter shorthand for the shape you want to compute the area of:\nt(riangle)\nc(ircle)\ns(quare)\n(trape)z(oid)\nr(ectangle)\nInput: ");
	scanf("%c", &type);

	switch (type) {
		case 't':
			area = get_triangle_area();
			break;
		case 'c':
			area = get_circle_area();
			break;
		case 's':
			area = get_square_area();
			break;
		case 'z':
			area = get_trapezoid_area();
			break;
		case 'r':
			area = get_rectangle_area();
			break;
		default:
			fprintf(stderr, "Entered character %c does not correspond to any shape shorthand", type);
			return -1;
	}

	fprintf(stderr, "Area is\n");
	printf("%lf\n", area);
	return 0;
}


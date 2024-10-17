#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

double on2(double x) {

	return x * 2;
}


double in2(double x) {

	return x * x;
}

double module(double x) {

	if (x < 0) {
		x = x* (-1);
		return x;
	}

	else {
		return x;
	}
}

double sin2(double x, const double PI){

	double radians = x * PI / 180;

	return sin(radians);
}

double minus_seven_and_half_squared(double x) {

	return (x * x) * -7.5;
}

double three_sqrt(double x) {
;
	return sqrt(x) * 3;
}


double sinl_plus_b(double x, double y, const double PI) {
	
	double radians_x = x * PI / 180;
	double radians_y = y * PI / 180;

	return sin(radians_x) + sin(radians_y);
}


int main() {
	const double PI = 3.14159265358979323846;
	
	cout << sin2(90, PI);

	return 0;
}
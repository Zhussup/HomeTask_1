#include<iostream>
#include<cmath>

using namespace std;


double module(double x) {

	if (x < 0) {
		x = x * (-1);
		return x;
	}

	else {
		return x;
	}
}


double first_func(double x, double y){//sqrt(x1^2 + x2^2)

    double left = x+x;
    double right = y*y;

    double under_root = left + right;

    return sqrt(under_root);
}

double second_func(double x, double y, double z){//x1*x2 + x1*x3 + x2*x3

    double left = x*y;
    double center = x*z;
    double right = y*z;

    return left + center + right;
}

double third_func(double v, double t, double a){// v0 * t + at^2/2

    double left = v * t;
    double right_up = a * t * t;
    double right_down = 2;

    return left + (right_up / right_down);
}

double fourth_func(double m, double v, double h){

    double g = 10;
    double left_up = m*v*v;
    double left_down = 2;
    double right = m * g * h;
    
    return (left_up / left_down) + right; 
}

double fifth_func(double r1, double r2){

    double left = 1/ r1;
    double right 1 / r2;

    return left + right;
}

double sixth_func(double m, double a, double const PI){

    double g = 10;
    double left = m * g;
    double radians_x = x * PI / 180;
    
    return left * cos(radians_x);
}

double seventh_func(double PI, double r){

    return 2 * PI * r;
}

double eighth_func(double b. double a, double c){

    return b*b - 4 * a * c;
}

double nineth_func(double y. double m1, double m2, double r){

    double up = m1*m2;
    double down = r*r;
    
    return = y * up / down;
}

double tenth_func(double I, double R){

    return I*I * R;
}

double eleventh_func(double a, double b, double c, double PI){

    double radians_c = c * PI / 180;
    
    return a * b * sin(radians_c);
}

double twelveth_func(double a, double b, double c, double PI){

    double radians_c = c * PI / 180;

    return sqrt(a*a + b*b - 2 * a * b * cos(radians_c));
}

double threeteenth_func(double a, double d, double c){

    return (a*d + b*c) / (a*d);
}


double fifteenth_func(double x, double PI){

    double radians_x = x* PI / 180;
    return sqrt(1 - sin(radians_x)*sin(radians_x));
} 

double sixteenth_func(double x, double b, double c){

    return 1 / (sqrt(a*x*x + b * x + c));
}

double seventeenth_func(double x){

    double left_up = sqrt(x + 1);
    double right_up = sqrt(x - 1);
    double down = 2 * sqrt(x);

    return (left_up + right_up) / down;
}


int main(){
    double const PI = 3.14159265358979323846;

    
}
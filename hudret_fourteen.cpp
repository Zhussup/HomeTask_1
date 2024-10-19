#include<iostream>
#include<cmath>
#include<math.h>
#include<fstream>

using namespace std;


double on2(double x) {
	// ����� ���������� �����, ���������� �� 2:  x * 2
	return x * 2;
}


double in2(double x) {
	// ����� ���������� �����, ����������� � ������� 2:  x * � (�� ����, � ������ ������� ���� �� ��� �� �����).
	return x * x;
}

double module(double x) {
	// ����� ���������� �����, ���������� �� -1, � ������, ���� ��� �������� ������, ��� 0.
	if (x < 0) {
		x = x * (-1);
		return x;
	}

	else {
		return x;
	}
}

double sin2(double x, const double PI) {
	// ������� � ������� � �������. ��� ����� ����� ���� ����� ��. � ������ ������� ��� ��������� ���������
	// ������� � ������ ���, ����� ������� ��������� ��, ��� ��������. ��� �� ��������� ������������� ���������,
	// ������ ��� �������� � �������� ������������ �� ���������������
	double radians = x * PI / 180;

	return sin(radians);
}

double minus_seven_and_half_squared(double x) {
	// ����� ���������� �����, ���������� �� ��� �� ����� � �� -7.5
	return (x * x) * -7.5;
}

double three_sqrt(double x) {
	;	// ����� ���������� ������ �����, ���������� �� 3.
	return sqrt(x) * 3;
}


double sinl_plus_b(double x, double y, const double PI) {
	// ����� ��������� 2 ����� � ����� �� (������ ��� ��������, ������)
	// ����� ����� �������������� ������� sinacosb + sinbcosa, ��� ����� sin(a+b).(������������� �����)
	double radians_x = x * PI / 180;
	double radians_y = y * PI / 180;

	return sin(radians_x) * cos(radians_y) + sin(radians_y) * cos(radians_x);
}

double cos_five(double x, double PI) {
	//��� 5 * cos(x)
	double radians_x = x * PI / 180;

	return cos(radians_x) * 5;
}

double sqrt_and_two(double x, double y) {//a * sqrt(2*b)
	double under_root = x * 2;//������ ��������� ���������� ��� ������������, �� ������, ���� ����� ���� ����� 
	//������� �� ����������� �������� � �������(������� �� ����� ��� ����������)

	return y * sqrt(under_root);
}

double three_sin_2_cos_3(double x, double y, double PI) {
	double radians_x = x * PI / 180;
	double dbld_radians_x = radians_x * 2;

	double radians_y = y * PI / 180;
	double trpld_radians_y = radians_y * 3;


	return 3 * sin(dbld_radians_x) * cos(trpld_radians_y);
}

double minus_fifth_sqrt_in_sqrt(double x, double y) {
	return -5 * sqrt(x + sqrt(y));
}



int main() {
    // ���������� �� �����, ��� ������������� ������������������ �����. �� ����, ���� �  ������� ���������.
    const double PI = 3.14159265358979323846;
    // ���������� ����� �������� �� �������� ����
    int start;
    cout << "Enter '1' to start(type '0' to stop): \n";


    while (true) {
        cout << "\n choose action! \n";
        cout << "\n 1- (x2), 2- (x^2), 3-(|x|) ,4-(sinx),5-(x^2 * (-7.5)) ,6- (sqrt(x) * 3),7- (sin(x) * cos(y) + sin(y) * cos(x)) \n";
        cin >> start;
		double x, y;

        if (start == 0) {//����� �� �����
            break;
        }
        else if (start == 1) {//��������� �� 2
			cin >> x;

			cout << " " << x << " *2 = " << on2(x) << endl;
        }
		else if (start == 2) {//���������� � �������
			cin >> x;

			cout << " " << x << "^2 = " <<  in2(x) << endl;
		}
		else if (start == 3) {// ������
			cin >> x;

			cout << " |" << x << "| = " << module(x) << endl;
		}
		else if (start == 4) {//�����
			cin >> x;

			cout << " sin(" << x << ") = " << sin2(x, PI) << endl;//��� �� ����������� ����������� ������ ����������
		}
		else if (start == 5) {//��� � �������� �������� �� ����� ���� ����� ���� �������
			cin >> x;

			cout << " " << x << " ^ 2 * (-7.5) = " << minus_seven_and_half_squared(x) << endl;
		}
		else if (start == 6) {
			cin >> x;

			cout << " (sqrt(" << x << ") * 3 " << three_sqrt << endl;
		}
		else if (start == 7) {
			cin >> x;
			cout << "\n";
			cin >> y;

			cout << " (sin(" << x << ")* cos(" << y << ") + sin(" << y << ")* cos(" << x << ")) \n" << sinl_plus_b(x, y, PI);
		}
    }


    return 0;
}
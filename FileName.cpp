#include<iostream>
#include<cmath>
#include<math.h>
#include<fstream>

using namespace std;


double on2(double x) {
	// функц возвращает число, умноженное на 2:  x * 2
	return x * 2;
}


double in2(double x) {
	// функц возвращает число, возведенное в степень 2:  x * х (по сути, я просто умножил чисо на это же число).
	return x * x;
}

double module(double x) {
	// функц возвращает число, умноженное на -1, в случае, если оно окажется меньше, чем 0.
	if (x < 0) {
		x = x * (-1);
		return x;
	}

	else {
		return x;
	}
}

double sin2(double x, const double PI) {
	// сначала я перевел в радианы. для этого нужно было число ПИ. в каждую функцию его вставлять невыгодно
	// поэтому я сделал так, чтобы функция принимала ПИ, как аргумент. это не затруднит использование программы,
	// потому что напрямую с функцией пользователь не взаимодействует
	double radians = x * PI / 180;

	return sin(radians);
}

double minus_seven_and_half_squared(double x) {
	// функц возвращает число, умноженное на это же число и на -7.5
	return (x * x) * -7.5;
}

double three_sqrt(double x) {
	;	// функц возвращает корень числа, умноженный на 3.
	return sqrt(x) * 3;
}


double sinl_plus_b(double x, double y, const double PI) {
	// функц принимает 2 числа и число ПИ (Раннее уже объяснял, почему)
	// вывод будет соответсвовать формуле sinacosb + sinbcosa, что равно sin(a+b).(тригонометрия рулит)
	double radians_x = x * PI / 180;
	double radians_y = y * PI / 180;

	return sin(radians_x) * cos(radians_y) + sin(radians_y) * cos(radians_x);
}



int main() {
    // переменная ПИ нужна, для использования тригонометрических функц. ну типа, чтоб в  радианы перевести.
    const double PI = 3.14159265358979323846;
    // переменная старт отвечает за основной цикл
    int start;
    cout << "Enter '1' to start(type '0' to stop): \n";


    while (true) {
        cout << "\n choose action! \n";
        cout << "\n 1- (x2), 2- (x^2), 3-(|x|) ,4-(sinx),5-(x^2 * (-7.5)) ,6- (sqrt(x) * 3),7- (sin(x) * cos(y) + sin(y) * cos(x)) \n";
        cin >> start;
		double x, y;

        if (start == 0) {//выход из проги
            break;
        }
        else if (start == 1) {//умножение на 2
			cin >> x;

			cout << " " << x << " *2 = " << on2(x) << endl;
        }
		else if (start == 2) {//возведение в квадрат
			cin >> x;

			cout << " " << x << "^2 = " <<  in2(x) << endl;
		}
		else if (start == 3) {// модуль
			cin >> x;

			cout << " |" << x << "| = " << module(x) << endl;
		}
		else if (start == 4) {//синус
			cin >> x;

			cout << " sin(" << x << ") = " << sin2(x, PI) << endl;//тут ПИ принимается ОБЯЗАТЕЛЬНО вторым аргументом
		}
		else if (start == 5) {//икс в квадрате умножить на минус семь целых пять дестяых
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
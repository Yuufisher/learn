#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float a, b, c, x1, x2;
	cout << "请输入系数a,b和常数c" << endl;
	cin >> a >> b >> c;
	if ((b * b - 4 * a * c) >= 0) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "方程有1或2个实数根分别为" << endl;
		cout << "x1=" << x1 << endl << "x2=" << x2;

	} else
		cout << "方程无实数根";
	//asdasd
	return 0;
}


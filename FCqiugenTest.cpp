#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float a, b, c, x1, x2;
	cout << "������ϵ��a,b�ͳ���c" << endl;
	cin >> a >> b >> c;
	if ((b * b - 4 * a * c) >= 0) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "������1��2��ʵ�����ֱ�Ϊ" << endl;
		cout << "x1=" << x1 << endl << "x2=" << x2;

	} else
		cout << "������ʵ����";
	//asdasd
	return 0;
}


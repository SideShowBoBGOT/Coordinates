#include<iostream>
#include<math.h>
using namespace std;
class City {
public: pair<int, int> width;pair<int, int> length;
};
pair<int,int> FloatWidth(City &A, City &B) {
	pair<int, int>c;
	c.first = abs(A.width.first - B.width.first);
	c.second =abs(A.width.second - B.width.second);
	return c;
}
pair<int, int> FloatLength(City& A, City& B) {
	pair<int, int>c;
	c.first = abs(A.length.first - B.length.first);
	c.second = abs(A.length.second - B.length.second);
	return c;
}
pair<int, int> Average(City& A, City& B) {
	pair<int, int>c;
	c.first = abs(A.length.first + B.length.first)/2;
	c.second = abs(A.length.second + B.length.second)/2;
	return c;
}
double IntoRadians(pair<int, int>& a) {
	return (a.first + a.second / 60) * 3.14 / 180;
}
void FloatDestination(City& A, City& B) {
	cout << "�������� �������: D(" << FloatWidth(A, B).first << '*' << FloatWidth(A, B).second << "'" << ";" << FloatLength(A, B).first << '*' << FloatLength(A, B).second << "')" << endl;
}
void NumberDestination(City& A, City& B) {
	auto a = FloatWidth(A, B);
	int b = IntoRadians(a);
	auto c = Average(A, B);
	auto d = IntoRadians(c);
	auto e = FloatLength(A, B);
	auto f= IntoRadians(e);
	auto g = cos(d) * f;
	double result = floor(6371*sqrt(b*b +g*g)*1000000)/1000000;
	cout <<"³������ �� �������(��): "<< result;
}
void Result(City& A, City& B) {
	FloatDestination(A, B);
	NumberDestination(A, B);
}
void Set(City& A,City& B) {
	cout << "�����!!! �������� ������ ����� ��� ������ ������ �� ������ �������" << endl;
	cout << "������ ���������� ������� ����. �������� �������, ���� �����:" << endl;
	cout << "������:�������: ";cin >> A.width.first;cout << "������:�����: ";cin >> A.width.second;
	cout << "�������:�������: ";cin >> A.length.first;cout << "�������:�����: ";cin >> A.length.second;cout << endl;
	cout << "������ ���������� ������� ����. �������� �������, ���� �����: " << endl;
	cout << "������:�������: ";cin >> B.width.first;cout << "������:�����: ";cin >> B.width.second;
	cout<<  "�������:�������: ";cin >> B.length.first;cout << "�������:�����: ";cin >> B.length.second;cout << endl;
}
void End() {
	cout <<endl<< "���� �������� ��������� ��������, �� ������ ��� �������� ���������� �� ������:\n5168 7559 0064 5538" << endl;
}
int main() {
	setlocale(LC_CTYPE, "Ukrainian");
	City A; City B;
	Set(A, B);
	Result(A, B);
	End();
	system("pause");
	return 0;
}
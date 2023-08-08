#include <iostream>

using namespace std;

const float USD = 1316.07, JPY = 9.20, EUR = 1448.81, CNY = 182.49, GBP = 1680.07;

int main() {

	float inputWon;

	cout << "환전을 원하는 금액을 입력하세요(KRW) : ";

	cin >> inputWon;

	cout << "환전을 원하는 금액은...." << inputWon << endl;

	return 0;
}

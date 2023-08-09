#include <iostream>
#include <cstring>
#include <stdio.h>
#include "exchange.h"


using namespace std;

const float USD = 1316.07, JPY = 9.20, EUR = 1448.81, CNY = 182.49, GBP = 1680.07;

void Exchange::inputTask() {
	cout << "환전을 원하는 금액을 입력하세요(원화) : ";
	cin >> inputWon;

}

void Exchange::choiceTask() {

	do {
	cout << "환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ";
       	cin >> choiceRate;
	
	if(choiceRate == 1) {
		strcpy(choiceNation, "USD");
		exchangeRate = USD;
	} else if(choiceRate == 2) {
		strcpy(choiceNation, "JPY");
		exchangeRate = JPY;
	} else if(choiceRate == 3) {
		strcpy(choiceNation, "EUR");
		exchangeRate = EUR;
	} else if(choiceRate == 4) {
		strcpy(choiceNation, "CNY");
		exchangeRate = CNY;
	} else if(choiceRate == 5) {	
		strcpy(choiceNation, "GBP");
		exchangeRate = GBP;
	} else {
		cout << "잘못입력하셨습니다." << endl;
	}
	} while (choiceRate > 5);

	cout << "기준환율 : " << exchangeRate << endl;
	
}

void Exchange::exchangeResult() {

	cout << "환전결과" << endl;
	
	resultCash = inputWon / exchangeRate;
	
	printf("환전금액 : %d(%s)\n",(int)resultCash,choiceNation);
	
	printf("거스름돈 : %d(원)\n",(int)((inputWon-(int)resultCash*exchangeRate)/10)*10);
        
}

int Exchange::receipt() {
	
	do {
	cout << "계속하시겠습니까?(1:YES, 2,NO) : ";
	cin >> tempNum;

	if(tempNum == 1) {
		return 1;
	} else if(tempNum == 2) {
		cout << "프로그램을 종료합니다." << endl;
		return 0;
	} else {
		cout << "잘못입력하셨습니다." << endl;
	}
	} while (tempNum > 1);
}

#include <iostream>

using namespace std;

const int& Greedy(int n)
{
	int count = 0;

	while (n >= 10)
	{
		if (n >= 1000)
		{
			n -= 1000;
			count++;
		}
		else if (n >= 500)
		{
			n -= 500;
			count++;
		}
		else if (n >= 100)
		{
			n -= 100;
			count++;
		}
		else if (n >= 50)
		{
			n -= 50;
			count++;
		}
		else if (n >= 10)
		{
			n -= 10;
			count++;
		}
	}
	return count;
}

int main()
{
#pragma region 탐욕법
	// 최적의 해를 구하는 데에 사용되는 근사적인 방법으로
	// 여러 경우 중 하나를 결정해야 할 때마다 그 순간에
	// 최적이라고 생각되는 것을 선택해 나가는 방식으로 진행
	// 하여 최종적인 해답을 구하는 알고리즘입니다.

	// 1. 탐욕 선택 속성
	// 각 단계에서 '최적의 선택'을 했을 때 전체 문제에 대한
	// 최적의 해를 구할 수 있는 경우입니다.

	// 2. 최적 부분 구조
	// 전체 문제의 최적의 해가 '부분 문제의 최적의 해로 구성'될 
	// 수 있는 경우 입니다.

	// 그리디 알고리즘 단계

	// 1. 문제의 최적의 구조를 결정합니다.

	// 2. 문제의 구조에 맞게 선택 절차를 정의합니다.

	// 3. 선택 절차에 따라 선택을 수행합니다.

	// 4. 선택된 해가 문제의 조건을 만족하는지 검사합니다.

	// 5. 조건을 만족하지 않으면 해당 해를 제외합니다.

	// 6. 모든 선택이 완료되면 해답을 검사합니다.

	// 7. 조건을 만족하지 않으면 해답으로 인정되지 않습니다.

	int money = 1370;
	cout << Greedy(money);

#pragma region 내가 만든 거
	/* int price = 10000;
	int money;
	cout << "물건의 가격은: " << price << endl << "얼마를 낼까? ";
	cin >> money;
	while (money < 10000)
	{
		cout << "돈이 부족합니다! " << endl;
		cin >> money;
	}

	int num = money - price;

	int chonwon = 0;
	int obackwon = 0;
	int backwon = 0;
	int oshipwaon = 0;
	int shipwon = 0;

	while (num >= 0)
	{
		while (num / 1000 > 0)
		{
			num -= 1000;
			chonwon++;
		}
		while (num / 500 > 0)
		{
			num -= 500;
			obackwon++;
		}
		while (num / 100 > 0)
		{
			num -= 100;
			backwon++;
		}
		while (num / 50 > 0)
		{
			num -= 50;
			oshipwaon++;
		}
		while (num / 10 > 0)
		{
			num -= 10;
			shipwon++;
		}
		break;
	}
	cout << "당신이 낸 거스름돈: " << endl;
	cout << "천원: " << chonwon << "개" << endl;
	cout << "오백원: " << obackwon << "개" << endl;
	cout << "백원: " << backwon << "개" << endl;
	cout << "오십원: " << oshipwaon << "개" << endl;
	cout << "십원: " << shipwon << "개" << endl;

	cout << "당신이 낸 화폐의 개수 : " <<
		chonwon + obackwon + backwon + oshipwaon + shipwon << endl;
		*/

#pragma endregion



#pragma endregion

	return 0;
}

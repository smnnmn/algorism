#include <iostream>

using namespace std;

#define SIZE 10

int main()
{
#pragma region 계수 정렬
	// 데이터의 값을 비교하지 않고 각 원소에 데이터가
	// 몇 개 있는지 개수를 세어 저장한 후 정렬하는 알고리즘입니다.

	const int min = 2; // 배열안의 최솟값
	const int max = 7; // 배열안의 최댓값

	const int size = max - min + 1; // 배열안의 값의 개수

	int list[SIZE] = { 5,6,2,2,6,7,5,3,4,7 };

	int count[size] = { 0, }; // 값의 개수를 나타낼 배열


	// 알고리즘
	for (int element : list)
	{
		count[element - min]++;
	}

	for (int i = 0; i < size; i++)
	{
		if (list[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				cout << i + min << " ";
			}
		}
	}

#pragma endregion


	return 0;
}

#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.

	int list[SIZE] = { 4,1,3,2,5 };
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - 1 - i); j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
			}
		}
	}



	cout << "결과" << endl;
	for (const int& element : list) // const로 읽기 전용, & 로 복사비용 X
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}

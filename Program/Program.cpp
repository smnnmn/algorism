#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한
	// 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int list[SIZE] = { 5,13,9,1,2 };

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = i; j < SIZE - 1; j++)
		{
			if (list[i] > list[j + 1])
			{
				swap(list[i], list[j + 1]);
			}
		}
	}


	for(const int & element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}

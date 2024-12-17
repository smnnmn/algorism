#include <iostream>

using namespace std;

#define SIZE 8

void BinarySearch(int list[], int key)
{

	int left = 0;
	int right = SIZE - 1;

	int pivot = 0;

	while (left <= right)
	{
		pivot = (left + right) / 2;

		if (list[pivot] == key)
		{
			cout << "Key Found : " << list[pivot] << endl;
			return;
		}
		else if (list[pivot] < key)
		{
			left = pivot + 1;
		}
		else
		{
			right = pivot - 1;
		}
	}
	cout << "Not Key Found" << endl;
}

int main()
{
#pragma region 이진 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀나가는 방식으로 동작하는 알고리즘입니다.

	int list[SIZE] = { 1, 6,15,22,26,30,47,56 };

	BinarySearch(list, 12);

#pragma endregion



	return 0;
}

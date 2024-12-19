﻿#include <iostream>

using namespace std;

#define SIZE 6

void QuickSort(int list[], int start, int end)
{

	if (start >= end)
	{
		return;
	}

	// pivot의 변수의 값을 설정합니다.
	int pivot = start;

	// left 변수의 값을 설정합니다.
	int left = start + 1;

	// right 변수의 값을 설정합니다.
	int right = end;


	// left가 right보다 크거나 같을 때까지 반복합니다.

	while (left <= right)
	{
		// left가 end보다 작거나 같고 list[left]가
		// list[pivot]보다 작거나 같을 때 까지 반복합니다.
		while (left <= end && list[pivot] >= list[left])
		{
			left++; // left의 값을 증가합니다.
		}

		// right가 start보다 크고 list[right]가
		// list[pivot]보다 크거나 같을 때까지 반복합니다.
		while (right > start && list[pivot] <= list[right])
		{
			right--; // right의 값을 감소시킵니다.
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);
		}
		else
		{
			std::swap(list[left], list[right]);
		}
	}

	// pivot을 기준으로 나누어진 두 배열에 대해
	// 재귀적으로 퀵 정렬을 호출합니다.
	QuickSort(list, start, right - 1);
	QuickSort(list, right + 1, end);
}

int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을
	// 나누고 한 쪽에는 기준점보다 작은 값들이 위치하고
	// 다른 한 쪽에는 기준점보다 큰 값들이 위치하도록
	// 정렬하는 알고리즘입니다.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여 
	// 모든 배열이 기본 배열이 될 때 까지 반복하면서 정렬합니다.

	int list[SIZE] = { 5,4,6,2,1,3 };

	QuickSort(list, 0, SIZE - 1);

	for (int element : list)
	{
		cout << element << " ";
	}
#pragma endregion

	return 0;
}

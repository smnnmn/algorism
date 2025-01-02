#include <iostream>

using namespace std;

int main()
{
#pragma region 브루트 포스
	// 가능한 모든 경우의 수를 탐색하면서
	// 결과를 도출하는 알고리즘입니다.
	// (무식하게 힘으로 밀어붙히는 거라고 생각하면 됨)

	int password[3] = { 9,4,5 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (i == password[0] && j == password[1] && k == password[2])
				{
					cout << "해결!!" << endl;
					cout << "비밀번호는: " <<
						password[0] << password[1] << password[2] << endl;
				}
			}
		}
	}

#pragma endregion


	return 0;
}

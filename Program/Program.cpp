﻿#include <iostream>
#include <vector>
using namespace std;

#define SIZE 8

class Graph
{
private:

	bool visited[SIZE];
	vector<int> graph[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void InsertEdge(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
		graph[edge].push_back(vertex);
	}
};


int main()
{
#pragma region 깊이 우선 탐색(Depth First Search)
	// root 노드에서 시작해서 다음 분기로 넘어가기 전에
	// 해당 분기를 완벽하게 탐색하는 방법입니다.

	// 깊이 우선 탐색은 스택 자료 구조를 사용합니다.

	// 1. 시작 노드를 스택에 넣고 방문 처리를 합니다.

	// 2. 스택의 최상단 노드에 방문하지 않은 인접 노드가 있으면
	//	  그 노드를 스택에 넣고 방문 처리합니다.

	// 3. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼냅니다.

	// 4. 더 이상 2번의 과정을 수행할 수 없을 때까지 반복합니다.

	Graph graph;

	graph.InsertEdge(1, 2);
	graph.InsertEdge(1, 3);
	graph.InsertEdge(2, 4);
	graph.InsertEdge(2, 5);
	graph.InsertEdge(4, 5);
	graph.InsertEdge(3, 6);
	graph.InsertEdge(3, 7);
	graph.InsertEdge(6, 7);



#pragma endregion


	return 0;
}

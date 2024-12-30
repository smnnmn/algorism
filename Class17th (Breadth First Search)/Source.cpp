#include <iostream>
#include <queue>
#include <vector>


#define SIZE 8

using namespace std;

class Graph
{
private:
    queue<int> queue;
    bool visited[SIZE];
    vector<int> parent[SIZE];

public:
    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = false;
        }
    }
    void Insert(int vertex, int edge)
    {
        parent[vertex].push_back(edge);
        parent[edge].push_back(vertex);
    }
    void Search(int start)
    {
        queue.push(start); // queue에 값 넣기

        visited[start] = true; // 방문헀음을 알림

        while (queue.empty() == false) // 모든 방문을 한후 멈춤
        {
            int x = queue.front(); // 현재 방문할 값

            queue.pop(); // x에 값을 넣었기에 저장된 값 삭제

            cout << x << " ";

            for (int i = 0; i < parent[x].size(); i++) // 인접한 노드를 모두 탐색
            {
                int next = parent[x][i]; // 탐색할 노드를 저장

                if (visited[next] == false) // 탐색을 아직 안한 노드일때
                {
                    queue.push(next); // queue에 값 넣기
                    visited[next] = true; // 방문했음을 알림
                }
            }
        }
    }
};

int main()
{
#pragma region 너비 우선 탐색
    // 시작 정점을 방문한 후 시작 정점에 인접한
    // 모든 정접들을 우선 방문하는 방법입니다.

    // 더 이상 방문하지 않은 정점이 없을 때까지
    // 방문하지 않은 모든 정점들에 대해서도 너비 우선 탐색을 적용합니다.

    Graph graph;

    graph.Insert(1, 2);
    graph.Insert(1, 3);
    graph.Insert(2, 4);
    graph.Insert(2, 5);
    graph.Insert(3, 6);
    graph.Insert(3, 7);

    graph.Search(1);

#pragma endregion

    return 0;
}
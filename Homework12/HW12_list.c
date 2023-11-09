#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000000 

//노드 구조체 
typedef struct GraphNode
{
	int vertex;
	struct GraphNode* link;
}GraphNode;

//그래프 구조체 
typedef struct GraphType {
	int n; //정점의 개수 
	GraphNode* adj_list[MAX_VERTICES];
}GraphType;

//시작정점으로부터의 최단경로 거리 
int distance[MAX_VERTICES];

//방문한 정점 표시 
int found[MAX_VERTICES];


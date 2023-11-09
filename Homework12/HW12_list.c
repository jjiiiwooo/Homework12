#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000000 

//��� ����ü 
typedef struct GraphNode
{
	int vertex;
	struct GraphNode* link;
}GraphNode;

//�׷��� ����ü 
typedef struct GraphType {
	int n; //������ ���� 
	GraphNode* adj_list[MAX_VERTICES];
}GraphType;

//�����������κ����� �ִܰ�� �Ÿ� 
int distance[MAX_VERTICES];

//�湮�� ���� ǥ�� 
int found[MAX_VERTICES];


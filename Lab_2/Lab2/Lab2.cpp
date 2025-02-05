#include <iostream>
#include "EdgeList.h"
#include "AdjacencyMatrix.h"
#include "AdjacencyList.h"

namespace EL = GraphEdgeList;
namespace AM = GraphAdjacencyMatrix;
namespace AL = GraphAdjacencyList;

int main()
{
	setlocale(LC_ALL, "rus");
	AM::Graph graphSecond;
	//��� �������
	cout << "1) ����� � ������ (������� ������ ������):" << endl;
	graphSecond.BFS(1);
	cout << "\n2) ����� � ������� (������� ������ ������):" << endl;
	graphSecond.DFS(1);

	cout << "\n\n\n���� (������ ����): " << endl;
	vector<EL::Edge> edges = {
		{1, 2}, {1, 5}, {5, 6}, {2, 7}, {2, 8}, {7, 8}, {3, 8}, {4, 6}, {4, 9}, {9, 10}
	};
	EL::Graph graphFirst(edges, 10);
	graphFirst.print();

	cout << "\n���� (������� ���������):" << endl;
	graphSecond.print();	

	cout << "\n\n���� (������ ���������): " << endl;
	AL::Graph graphThird(10);

	graphThird.addEdge(1, 2);
	graphThird.addEdge(1, 5);
	graphThird.addEdge(2, 1);
	graphThird.addEdge(2, 7);
	graphThird.addEdge(2, 8);
	graphThird.addEdge(3, 8);
	graphThird.addEdge(4, 6);
	graphThird.addEdge(4, 9);
	graphThird.addEdge(5, 1);
	graphThird.addEdge(5, 6);
	graphThird.addEdge(6, 4);
	graphThird.addEdge(6, 5);
	graphThird.addEdge(6, 9);
	graphThird.addEdge(7, 2);
	graphThird.addEdge(7, 8);
	graphThird.addEdge(8, 2);
	graphThird.addEdge(8, 3);
	graphThird.addEdge(8, 7);
	graphThird.addEdge(9, 4);
	graphThird.addEdge(9, 6);
	graphThird.addEdge(9, 10);
	graphThird.addEdge(10, 9);
	graphThird.print();

	cout << endl;

	system("pause");
	return 0;
}
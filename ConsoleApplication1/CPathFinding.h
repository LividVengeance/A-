#include <iostream>
#include <list>
#include <iterator> 
#include "CNode.h"
#include <math.h>

using namespace std;

class CPathFinding {
private:

	const int moveStraightCost = 10;
	const int moveDiagonalCost = 14;

	// Sim User Inputs
	int startY = 0;
	int startX = 0;

	int endX = 3;
	int endY = 5;

	// Nodes queued for searching
	list <int> openList;
	// Node that have already been searched
	list <int> closedList;

	int grid[10][10];

	CNode* startNode = grid[startX][startY];
	CNode* endNode = grid[startX][startY];

	//int firstNode = openList.front();
	//CNode* prevousNode = nullptr;
};

int CalculateDistance(CNode a, CNode b)
{
	int xDistance = abs(startX - endX);
	int yDistance = abs(startY - endY);
	int remaining = abs(xDistance - yDistance);

	if (xDistance < yDistance)
	{
		int minDis = xDistance;
	}
	else
	{
		int minDis = yDistance;
	}
	return(moveDiagonalCost * minDis + moveStraightCost * remaining);
}

void TestFunction()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			CNode.gCost = 9999; // Set to infinate
			CNode.CalculateFCost();
			CNode.prevousNode = NULL;
		}
	}

	// For first node
	startNode.gCost = 0;
	startNode.hCost = CalculateDistance(startNode, endNode);
	startNode.CalculateFCost();

	// Every node after that

	while (openList.size() > 0)
	{
		CNode currentNode = lowestFCostNode;
		if (currentNode == endNode)
		{
			// Reached final Node
			return CalculatePath(endNode);
		}

		openList.pop(currentNode);
		closedList.push(currentNode);

		// Check neighbour node is in closed list

		int tentativeGCost = currentNode.gCost + CalculateDistance(currentNode, neighbourNode);

		if (tentativeGCost < neighbourNode.gCost)
		{
			neightbourNode.prevousNode = currentNode;
			neightbourNode.gCost = tentativeGCost;
			neightbourNode.hCost = CalculateDistance(neighbourNode, endNode);
			neighbourNode.CalcFCost();

			// If neighbourNode is NOT in openList
			// Then add neighbourNode into openList
		}
	}

	// Out of nodes on the openList
	// COULD NOT FIND PATH
}

void GetLowestFCostNode()
{
	// Search through all nodes to get lowest F cost Node

	return lowestFCostNode;
}

void CalculatePath(CNode endNode)
{
	list <int> pathNodes;

	pathNodes.push_front(endNode);
	CNode currentNode = endNode;
	while (currentNode.prevousNode != NULL)
	{
		pathNodes.push_front(currentNode.prevousNode);
		currentNode = currentNode.prevousNode;
	}
	pathNodes.reverse();
	return pathNodes;
}

void GetNeighboursList(CNode currentNode)
{
	list <int> neighbourNodes;

	// Checks all the nodes around current node and puts them in list
}
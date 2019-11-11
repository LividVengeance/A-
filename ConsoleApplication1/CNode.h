#pragma once

class CNode {
private:
	// f = g + h
	double fCost;
	// Walking cost from the start node
	double gCost;
	// Estimate cost to end
	double hCost;

	CNode* prevousNode;

	int CalcFCost();
};

int CNode::CalcFCost()
{
	fCost = gCost + hCost;
}
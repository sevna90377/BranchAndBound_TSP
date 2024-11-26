#pragma once
#include "DynamicArray.h"
#include "FileHandler.h"
#include "Structures.h"

class BB_TSP
{
public:

	~BB_TSP() {
		delete graph;
		delete filer;
		delete solution;
	};

	int solveTSP();

	int SetConfig(std::string config_filename);
	SubSolutionNode* GetSolution() const { return solution; }
	int GetCost() const { return resultCost; }

private:

	DynamicArray* graph;

	SubSolutionNode* solution;
	int resultCost;

	DynamicArray* BFS();
	
	FileHandler* filer;

};
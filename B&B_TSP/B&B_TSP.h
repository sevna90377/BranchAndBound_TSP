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

	int SetConfig(std::string config_filename);
	SubSolutionNode* GetSolution() const { return solution; }

private:

	FileHandler* filer;
	DynamicArray* graph;
	SubSolutionNode* solution;

	DynamicArray* solveBFS();
	

};
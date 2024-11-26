#pragma once

#include <string>

// struct pozwalaj�cy zachowa� reprezentacje kolejnych rozwi�za� cz�ciowych
// do p�niejszego rozpatrzenia

struct SubSolutionNode {

	int* path;	// cz�ciowa �cie�ka 
	int depth;	// jak daleko od pocz�tkowego wierzcho�ka, d�ugo�� path

	int subCost;
	int subBound;

	SubSolutionNode* previous;
	SubSolutionNode* next;

	SubSolutionNode(int depth, int prevCost, SubSolutionNode* previous, SubSolutionNode* next){
		this->depth = depth;
		path = new int[depth];
		subCost = prevCost;
		subBound = 0;
		this->previous = previous;
		this->next = next;
	}

	~SubSolutionNode() {
		delete path;
	}

	std::string toString() {
		std::string ret;

		return ret;
	}
};
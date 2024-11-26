#pragma once

#include <string>

// struct pozwalaj¹cy zachowaæ reprezentacje kolejnych rozwi¹zañ czêœciowych
// do póŸniejszego rozpatrzenia

struct SubSolutionNode {

	int* path;	// czêœciowa œcie¿ka 
	int depth;	// jak daleko od pocz¹tkowego wierzcho³ka, d³ugoœæ path

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
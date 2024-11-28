#pragma once

#include <string>
#include <vector>

// struct pozwalaj¹cy zachowaæ reprezentacje kolejnych rozwi¹zañ czêœciowych
// do póŸniejszego rozpatrzenia

struct SubSolutionNode {

	std::vector<bool> visited;
	std::vector<int> path;	// czêœciowa œcie¿ka
	int path_length;		// jak daleko od pocz¹tkowego wierzcho³ka

	int subCost;
	int subBound;

	// wskaŸniki wykorzystywane przez Queue
	SubSolutionNode* previous;
	SubSolutionNode* next;

	SubSolutionNode(int path_length, std::vector<int> path, std::vector<bool> visited, int subCost, int subBound)
        : path_length(path_length), subCost(subCost), subBound(subBound), previous(nullptr), next(nullptr) {
    }

	bool operator<(const SubSolutionNode& other) const {
		return subBound > other.subBound; // nadpisanie operatora mniejszoœci tak, ¿e priorytet bazuje na subBound
	}

	std::string toString() {
		std::string ret = "";

		return ret;
	}
};
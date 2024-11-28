#pragma once

#include <string>
#include <vector>

// struct pozwalaj�cy zachowa� reprezentacje kolejnych rozwi�za� cz�ciowych
// do p�niejszego rozpatrzenia

struct SubSolutionNode {

	std::vector<bool> visited;
	std::vector<int> path;	// cz�ciowa �cie�ka
	int path_length;		// jak daleko od pocz�tkowego wierzcho�ka

	int subCost;
	int subBound;

	// wska�niki wykorzystywane przez Queue
	SubSolutionNode* previous;
	SubSolutionNode* next;

	SubSolutionNode(int path_length, std::vector<int> path, std::vector<bool> visited, int subCost, int subBound)
        : path_length(path_length), subCost(subCost), subBound(subBound), previous(nullptr), next(nullptr) {
    }

	bool operator<(const SubSolutionNode& other) const {
		return subBound > other.subBound; // nadpisanie operatora mniejszo�ci tak, �e priorytet bazuje na subBound
	}

	std::string toString() {
		std::string ret = "";

		return ret;
	}
};
//
// Created by 1310i on 21.10.2024.
//

#include "FileHandler.h"

DynamicArray* FileHandler::loadFromFile(std::string filename) {

    DynamicArray* matrix = new DynamicArray();
    int graph_order;
    file = new std::ifstream(filename);

    if (!file->is_open()) {
        std::cerr << "FAILURE on loading the file" << std::endl;
    }

    *file >> graph_order;

    matrix->allocate(graph_order);

    int value;
    for (int i = 0; i < graph_order; i++) {
        for (int j = 0; j < graph_order; j++) {
            *file >> value;
            matrix->setEdge(i, j, value);
        }
    }

    matrix->display();
    return matrix;
}
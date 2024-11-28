//
// Created by 1310i on 21.10.2024.
//
#pragma once

#include <string>
#include <iostream>
#include <vector>

class DynamicArray
{
public:
    DynamicArray() {
        graph_order = 0;
        matrix = nullptr;
    };

    ~DynamicArray() {
        deallocate();
    };

    void display() const;
    void allocate(int size);
    void setEdge(int v1, int v2, int weight);

    int isEmpty() const;  // 0 == empty
    int GetEdge(int v1, int v2) const { return matrix[v1][v2]; }
    int GetSize() const { return graph_order; }

private:
    int graph_order;
    int** matrix;

    void deallocate();

    static std::string pad(const std::string& string);
};
//
// Created by 1310i on 21.10.2024.
//

#include "DynamicArray.h"

void DynamicArray::display() const 
{
    std::cout << "Graf w reprezentacji macierzowej: \n";
    for (int i = 0; i < graph_order; i++) {
        std::cout << i << "|";
        for (int j = 0; j < graph_order; j++) {
            std::cout << "  " << pad(std::to_string(matrix[i][j]));
        }
        std::cout << "\n";
    }
}
std::string DynamicArray::pad(const std::string& string) {
    std::string padding = " ";
    std::string result = string;
    unsigned long long size = 3 - string.length();
    if (size < 0)
    {
        return "  ";
    }
    for (int i = 0; i < size; i++)
    {
        result = padding + result;
    }
    return result;
}

void DynamicArray::allocate(int order)
{
    deallocate();

    graph_order = order;

    matrix = new int* [graph_order];
    for (int i = 0; i < graph_order; i++) {
        matrix[i] = new int[graph_order];
        for (int j = 0; j < graph_order; j++) {
            if (i == j)
                matrix[i][j] = -1;
            else
                matrix[i][j] = 0;
        }
    }
}

void DynamicArray::deallocate()
{

    for (int i = 0; i < graph_order; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
    graph_order = 0;
}

void DynamicArray::setEdge(int v1, int v2, int weight)
{
    matrix[v1][v2] = weight;
}

int DynamicArray::minimise()
{
    return 0;

}

int DynamicArray::isEmpty() const
{
    if (matrix == nullptr || graph_order == 0) {
        return 0;
    }
    else
    {
        return 1;
    }
}

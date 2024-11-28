//
// Created by 1310i on 21.10.2024.
//
#pragma once

#include "DynamicArray.h"
#include <fstream>
#include <string>

class FileHandler
{
public:
    DynamicArray* loadFromFile(std::string filename);
    void loadConfig();

private:
    std::ifstream* file;
};
#include "B&B_TSP.h"



int main()
{
    BB_TSP* solver = new BB_TSP();
    solver->SetConfig("6x6.txt");
}


int BB_TSP::SetConfig(std::string config_filename)
{
    filer = new FileHandler();
    graph = filer->loadFromFile(config_filename);

    if (graph->isEmpty()) {
        return 1;
    }

    return 0;
}

DynamicArray* BB_TSP::solveBFS()
{
    return nullptr;
}

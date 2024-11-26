#include "pch.h"
#include "Queue.h"


void Structures::Queue::Enqueue(SubSolutionNode* newNode)
{
    // domy�lne warto�ci previous i next dla struct StateNode to nullptr
    // dzi�ki czemu w tej metodzie jest "mniej roboty" - warto�ci wska�nik�w
    // przypisywane s� tylko, gdy istotnie co� oznaczaj�
    
    if (first_ptr == nullptr) { // wstawianie pierwszego el.
        last_ptr = newNode;
        first_ptr = newNode;
    }
    else {
        last_ptr->next = newNode;       // ustawienie wska�nika ostatniego el.
        newNode->previous = last_ptr;   // ustawienie wska�nika nowego ostatniego na poprzedni ostatni el.
        last_ptr = newNode;             // "podmianka" na wska�niku trzymaj�cym ostatni el.
    }

    if (priority) {
        //...
    }
}

SubSolutionNode* Structures::Queue::DequeueFirst(int pop)
{
    if (first_ptr == nullptr) return nullptr;

    SubSolutionNode* first = first_ptr;

    if (pop) {
        first_ptr = first_ptr->next;
        first_ptr->previous = nullptr;
    }

    return first;
}
SubSolutionNode* Structures::Queue::DequeueLast(int pop)
{
    if (last_ptr == nullptr) return nullptr;

    SubSolutionNode* last = last_ptr;
    last->previous = nullptr;
    last->next = nullptr;

    if (pop) {
        last_ptr = last_ptr->previous;
        last_ptr->next = nullptr;
    }

    return last;
}

void Structures::Queue::showQueue()
{
    SubSolutionNode* holder = first_ptr;
    while (holder->next != nullptr) {
        std::cout << holder->toString();
        holder = holder->next;
    }
    std::cout << holder->toString();
}

void Structures::Queue::deallocate()
{
    if (first_ptr != nullptr) {
        SubSolutionNode* next;
        while (first_ptr->next != nullptr) {
            next = first_ptr->next;
            delete first_ptr;
            first_ptr = next;
        }
        delete first_ptr;
    }
}

#pragma once
#include <iostream>
#include "SubSolutionNode.h"

namespace Structures {
	
	class Queue {
	
	public:
		Queue(int priority) {
			first_ptr = nullptr;
			last_ptr = nullptr;
			this->priority = priority;
		};
		~Queue() {
			deallocate();
		};

		void Enqueue(SubSolutionNode* state);
		
		// pop == 1 - pop, 0 - only peek
		// WA¯NE zwrócone z kolejki wartoœi nale¿y usun¹æ po zakoñczeniu operacji
		SubSolutionNode* DequeueFirst(int pop);		// FIFO
		SubSolutionNode* DequeueLast(int pop);		// LIFO

		void showQueue();

	private:
		SubSolutionNode* first_ptr;	// wskaŸnik na pierwszy element
		SubSolutionNode* last_ptr;	// wskaŸnik na ostatni element

		int priority;	// 1 - kolejka siê priorytetyzuje, w przeciwnym razie nie ma wp³ywu na dzia³anie

		void deallocate();
	};
}
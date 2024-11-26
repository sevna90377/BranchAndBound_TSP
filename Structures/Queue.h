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
		// WA�NE zwr�cone z kolejki warto�i nale�y usun�� po zako�czeniu operacji
		SubSolutionNode* DequeueFirst(int pop);		// FIFO
		SubSolutionNode* DequeueLast(int pop);		// LIFO

		void showQueue();

	private:
		SubSolutionNode* first_ptr;	// wska�nik na pierwszy element
		SubSolutionNode* last_ptr;	// wska�nik na ostatni element

		int priority;	// 1 - kolejka si� priorytetyzuje, w przeciwnym razie nie ma wp�ywu na dzia�anie

		void deallocate();
	};
}
#ifndef __ZOO_H__
#define __ZOO_H__

#include <iostream>
#include <vector>

#include "animal.h"

using std::cout;
using std::endl;


class Zoo{
	public:
		void printAnimals();
		void add_animal(Animal* new_animal);
	private:
		std::vector<Animal*> animals;
};





#endif /* __ZOO_H__ */

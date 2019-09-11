#ifndef __ZOO_H__
#define __ZOO_H__

#include <iostream>
#include <vector>

#include "animal.h"
#include "lion.h"
#include "moneky.h"
#include "dog.h"
#include "goose.h"
#include "snowy_owl.h"
#include "shark.h"
#include "clown_fish.h"

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

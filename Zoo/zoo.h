#ifndef __ZOO_H__
#define __ZOO_H__

#include <iostream>
#include <vector>

#include "../animal.h"

using std::cout;
using std::endl;


class Zoo{
	public:
		inline void printAnimals();
		inline void add_animal(Animal* new_animal);
	private:
		std::vector<Animal*> animals;
};

void Zoo::printAnimals(){
	for (size_t i=0; i < animals.size();i++){
		cout << "animal No: "<< (i+1) ;
		cout << *animals[i] << endl;
	}
}

void Zoo::add_animal(Animal* new_animal){
	animals.push_back(new_animal);
}



#endif /* __ZOO_H__ */

#include "zoo.h"


void Zoo::printAnimals(){
	for (size_t i=0; i < animals.size();i++){
		cout << "animal No: "<< (i+1) << endl;
		cout << *animals[i] << endl;
	}
}

void Zoo::add_animal(Animal* new_animal){
	animals.push_back(new_animal);
}


#include "test.h"

using std::cout;
using std::endl;


void test(){

	Zoo myZoo;	
	
	Lion simba("Simba");
	Lion mufasa("Musfasa");
	Monkey rafiki("Rafiki");
	Goose akka("Akka");
	Goose morten("Morten");
	SnowyOil hedwig("Hedwig");
	Dog toto("Toto");
	Shark jaws("Jaws");
	ClownFish nemo("Nemo");
	
	myZoo.add_animal(&simba);
	myZoo.add_animal(&mufasa);
	myZoo.add_animal(&rafiki);
	myZoo.add_animal(&akka);
	myZoo.add_animal(&morten);
	myZoo.add_animal(&hedwig);
	myZoo.add_animal(&toto);
	myZoo.add_animal(&jaws);
	myZoo.add_animal(&nemo);
	
	myZoo.printAnimals();
	
}


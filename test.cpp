#include "test.h"
#include <vector>
#include "mamal.h"
#include "animal.h"
#include "bird.h"
#include "fish.h"


using std::cout;
using std::endl;


typedef std::vector<Animal*> vector_animals;


void test(){
	/*
		Mamal(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,
			size_t &pregnancy_duration, size_t &young_born);*/
	/* 
		Fish(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,size_t &lowest_depth);
	*/
	/*
		Bird(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,size_t &typical_height,size_t &wing_span);
	*/
			

	String b("bb");
	String c("cc");
	String d("dd");
	String e("ee");
	size_t  f = 5;
	size_t  g = 6;
	size_t  h = 7;
	
	Mamal lion("Simba",b,c,d,e,f,g,h);
	Mamal lion2("Mufasa",b,c,d,e,f,g,h);
	Mamal monkey("Rafiki",b,c,d,e,f,g,h);
	Bird goose("Akka",b,c,d,e,f,g,h);
	Bird goose2("morten",b,c,d,e,f,g,h);
	Bird snowy_owl("Hedwig",b,c,d,e,f,g,h);
	Mamal dog("Toto",b,c,d,e,f,g,h);
	Fish shark("Jaws",b,c,d,e,f,g);
	Fish clown_fish("Nemo",b,c,d,e,f,g);
	
	vector_animals  animals;
	animals.push_back(&lion);
	animals.push_back(&lion2);
	animals.push_back(&monkey);
	animals.push_back(&goose);
	animals.push_back(&goose2);
	animals.push_back(&snowy_owl);
	animals.push_back(&dog);
	animals.push_back(&shark);
	animals.push_back(&clown_fish);
	for (size_t i=0; i < animals.size();i++){
		cout << "animal No: "<< i << endl;
		cout << *animals[i] << endl;

	}


	
}


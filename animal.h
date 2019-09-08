#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include "string.h"

class Animal {
    
	public:
	 	inline Animal(const String &animal_name,const String &species,const String &life_expentancy,
				const String &continent,const String &type_food,size_t &speed);
		inline virtual ~Animal();
		
	   	String get_attr() const ;
	   	virtual String get_extra_attr() const = 0;

		friend std::ostream& operator<<(std::ostream& os, const Animal &animal);
		
    protected:
		String animal_name;
		String species;
		String life_expentancy;
		String continent;
		String type_food;
		size_t speed;
    
};
Animal::Animal(const String &animal_name,const String &species,const String &life_expentancy,
		const String &continent,const String &type_food,size_t &speed)
    : animal_name(animal_name)
    , species(species)
    , life_expentancy(life_expentancy)
    , continent(continent)
    , type_food(type_food)
    , speed(speed)	 {}

Animal::~Animal(){ }
#endif //__ANIMAL_H__

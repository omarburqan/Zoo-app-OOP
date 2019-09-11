#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include "string.h"
#include <sstream> /* stringstream */

class Animal {
    
	public:
	 	inline Animal(const String &animal_name);
				
		virtual inline ~Animal();
		
	   	virtual String get_name() const = 0;
	   	
	   	virtual String get_species()const = 0 ;
    
		virtual String get_type_food() const = 0;

		virtual String get_found_in() const = 0;

		virtual String get_life_expectancy() const = 0 ;

		virtual String get_speed() const = 0;
		
		String get_all_attr() const;
		
		
		virtual String get_extra_attr() const =0;
		
		
		friend std::ostream& operator<<(std::ostream& os, const Animal &animal);
		
    protected:
		String m_animal_name;
    
};
Animal::Animal(const String &animal_name)
    : m_animal_name(animal_name){}

Animal::~Animal(){ }



#endif //__ANIMAL_H__

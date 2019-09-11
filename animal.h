#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include "string.h"
#include <sstream> /* stringstream */

class Animal {
    
	public:
	 	inline Animal(const String &animal_name);
				
		virtual inline ~Animal();
		
	   	inline const String& get_name() const ;
		
		virtual String get_all_attr() const = 0 ;
		
		friend std::ostream& operator<<(std::ostream& os, const Animal &animal);
		
    protected:
		String m_animal_name;
    
};
Animal::Animal(const String &animal_name)
    : m_animal_name(animal_name){}

Animal::~Animal(){ }

const String& Animal::get_name() const {
	return m_animal_name;
}


#endif //__ANIMAL_H__

#ifndef __Dog_H__
#define __Dog_H__

#include "string.h"
#include "mamal.h"
#include <sstream>  /* stringstream */

class Dog : public Mamal {

public:
    inline Dog(const String &animal_name);
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline unsigned char get_duration_of_pregnancy() const ;

    inline unsigned char get_young_born() const ;
    
    String get_all_attr() const ;
    
    inline ~Dog();
 	
};


Dog::Dog(const String &animal_name)
        :
        Mamal(animal_name) {}
        
Dog::~Dog(){}    

        
String Dog::get_species()const{
	return "Dog";
}

String Dog::get_type_food() const {
        return "banana";
}

String Dog::get_found_in() const {
    return "AFRICA, AISA";
}

String Dog::get_life_expectancy() const {
    return "13";
}

String Dog::get_speed() const {
    return "25 kmh";
}

unsigned char Dog::get_duration_of_pregnancy() const {
    return '9';
}

unsigned char Dog::get_young_born() const {
    return '3';
}

#endif //__Dog_H__

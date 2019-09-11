#ifndef __LION_H__
#define __LION_H__

#include "../string.h"
#include "mamal.h"
#include <sstream>  /* stringstream */

class Lion : public Mamal {

public:
    inline Lion(const String &animal_name);
    
    inline String get_name() const ;
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline unsigned char get_duration_of_pregnancy() const ;

    inline unsigned char get_young_born() const ;

    
    inline ~Lion();
 	
};


Lion::Lion(const String &animal_name)
        :
        Mamal(animal_name) {}
        
Lion::~Lion(){}    

String Lion::get_name() const {
	return m_animal_name;
}         
String Lion::get_species()const{
	return "LION";
}

String Lion::get_type_food() const {
        return "Meat";
}

String Lion::get_found_in() const {
    return "AFRICA, AISA";
}

String Lion::get_life_expectancy() const {
    return "13";
}

String Lion::get_speed() const {
    return "30 kmh";
}

unsigned char Lion::get_duration_of_pregnancy() const {
    return '2';
}

unsigned char Lion::get_young_born() const {
    return '5';
}

#endif //__LION_H__

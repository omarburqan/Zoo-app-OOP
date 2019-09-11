#ifndef __Monkey_H__
#define __Monkey_H__

#include "string.h"
#include "mamal.h"
#include <sstream>  /* stringstream */

class Monkey : public Mamal {

public:
    inline Monkey(const String &animal_name);
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline unsigned char get_duration_of_pregnancy() const ;

    inline unsigned char get_young_born() const ;
    
    String get_all_attr() const ;
    
    inline ~Monkey();
 	
};


Monkey::Monkey(const String &animal_name)
        :
        Mamal(animal_name) {}
        
Monkey::~Monkey(){}    

        
String Monkey::get_species()const{
	return "MONKEY";
}

String Monkey::get_type_food() const {
        return "banana";
}

String Monkey::get_found_in() const {
    return "AFRICA, AISA";
}

String Monkey::get_life_expectancy() const {
    return "13";
}

String Monkey::get_speed() const {
    return "25 kmh";
}

unsigned char Monkey::get_duration_of_pregnancy() const {
    return '9';
}

unsigned char Monkey::get_young_born() const {
    return '3';
}

#endif //__Monkey_H__

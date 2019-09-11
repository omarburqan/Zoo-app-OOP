#ifndef __GOOSE_H__
#define __GOOSE_H__

#include "string.h"
#include "bird.h"
#include <sstream>  /* stringstream */

class Goose : public Bird {

public:
    inline Goose(const String &animal_name);
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline size_t get_typical_height() const ;

    inline unsigned char get_wing_span() const ;
    
    String get_all_attr() const ;
    
    inline ~Goose();
 	
};


Goose::Goose(const String &animal_name)
        :
        Bird(animal_name) {}
        
Goose::~Goose(){}    

        
String Goose::get_species()const{
	return "Goose";
}

String Goose::get_type_food() const {
        return "Banana";
}

String Goose::get_found_in() const {
    return "AFRICA, AISA";
}

String Goose::get_life_expectancy() const {
    return "13";
}

String Goose::get_speed() const {
    return "30 kmh";
}

size_t Goose::get_typical_height() const {
	return 5;

}
unsigned char Goose::get_wing_span() const {
	return '5';
}

#endif //__GOOSE_H__

#ifndef __WHALE_H__
#define __WHALE_H__

#include "string.h"
#include "animal.h"
#include "MamalInterface.h"
#include "FishInterface.h"

#include <sstream>  /* stringstream */

class Whale:public Animal  {

public:

    inline Whale(const String &animal_name);
    
   	inline String get_name() const ;
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;
    
    inline unsigned char get_duration_of_pregnancy() const ;

    inline unsigned char get_young_born() const ;
    
	inline size_t lowest_depth() const ;
	
	inline String get_extra_attr() const ;
    
    inline ~Whale();
 	
};
Whale::Whale(const String &animal_name)
        :Animal(animal_name)
        {}
        
Whale::~Whale(){}    

String Whale::get_name() const {
	return m_animal_name;
}

String Whale::get_species()const{
	return "Whale";
}

String Whale::get_type_food() const {
    return "whale food";
}

String Whale::get_found_in() const {
    return "AFRICA, AISA";
}

String Whale::get_life_expectancy() const {
    return "13 year";
}

String Whale::get_speed() const {
    return "30 kmh";
}
size_t Whale::lowest_depth() const {
	return 90;
}
unsigned char Whale::get_duration_of_pregnancy() const {
	return '9';
}

unsigned char Whale::get_young_born() const {
	return '5';
}
String Whale::get_extra_attr() const {
	std::stringstream res;
	res <<
		"\npregnancy duration: " << get_duration_of_pregnancy() <<
		"\nyoung porn: " << get_young_born() <<
		"\nlowest_depth: "<< lowest_depth();
	return res.str().c_str();
}

#endif //__WHALE_H__

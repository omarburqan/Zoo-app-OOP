#ifndef __SNOWYOIL_H__
#define __SNOWYOIL_H__

#include "string.h"
#include "bird.h"


class SnowyOil : public Bird {

public:
    inline SnowyOil(const String &animal_name);
    
    inline String get_name() const ;
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline size_t get_typical_height() const ;

    inline unsigned char get_wing_span() const ;
    
    inline ~SnowyOil();
 	
};


SnowyOil::SnowyOil(const String &animal_name)
        :
        Bird(animal_name) {}
        
SnowyOil::~SnowyOil(){}    

String SnowyOil::get_name() const {
	return m_animal_name;
}        
String SnowyOil::get_species()const{
	return "SnowyOil";
}

String SnowyOil::get_type_food() const {
        return "Banana";
}

String SnowyOil::get_found_in() const {
    return "AFRICA, AISA";
}

String SnowyOil::get_life_expectancy() const {
    return "13";
}

String SnowyOil::get_speed() const {
    return "30 kmh";
}

size_t SnowyOil::get_typical_height() const {
	return 5;

}
unsigned char SnowyOil::get_wing_span() const {
	return '5';
}

#endif //__SNOWYOIL_H__

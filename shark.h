#ifndef __Shark_H__
#define __Shark_H__

#include "string.h"
#include "fish.h"
#include <sstream>  /* stringstream */

class Shark : public Fish {

public:
    inline Shark(const String &animal_name);
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline size_t lowest_depth() const ;
    
    String get_all_attr() const ;
    
    inline ~Shark();
 	
};
Shark::Shark(const String &animal_name)
        :
        Fish(animal_name) {}
        
Shark::~Shark(){}    

        
String Shark::get_species()const{
	return "Shark";
}

String Shark::get_type_food() const {
        return "Banana";
}

String Shark::get_found_in() const {
    return "AFRICA, AISA";
}

String Shark::get_life_expectancy() const {
    return "13";
}

String Shark::get_speed() const {
    return "30 kmh";
}
size_t Shark::lowest_depth() const {
	return 90;
}

#endif //__Shark_H__

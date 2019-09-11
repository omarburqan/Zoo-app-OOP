#ifndef __ClownFish_H__
#define __ClownFish_H__

#include "string.h"
#include "fish.h"
#include <sstream>  /* stringstream */

class ClownFish : public Fish {

public:
    inline ClownFish(const String &animal_name);
    
    inline String get_species()const;
    
    inline String get_type_food() const;

    inline String get_found_in() const ;

    inline String get_life_expectancy() const ;

    inline String get_speed() const ;

    inline size_t lowest_depth() const ;
    
    String get_all_attr() const ;
    
    inline ~ClownFish();
 	
};
ClownFish::ClownFish(const String &animal_name)
        :
        Fish(animal_name) {}
        
ClownFish::~ClownFish(){}    

        
String ClownFish::get_species()const{
	return "ClownFish";
}

String ClownFish::get_type_food() const {
        return "Banana";
}

String ClownFish::get_found_in() const {
    return "AFRICA, AISA";
}

String ClownFish::get_life_expectancy() const {
    return "13";
}

String ClownFish::get_speed() const {
    return "30 kmh";
}
size_t ClownFish::lowest_depth() const {
	return 90;
}

#endif //__ClownFish_H__

#ifndef __BIRD_H__
#define __BIRD_H__

#include "animal.h"
#include "string.h"

class Bird: public Animal {

public:
	inline Bird(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,size_t &typical_height,size_t &wing_span);
	
   	 String get_extra_attr() const ;
   	
protected:

    size_t typical_height;
    size_t wing_span;	    

};
Bird::Bird(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,
			size_t &typical_height,size_t &wing_span)
        :
        Animal(animal_name,species,life_expentancy,continent,type_food,speed)
        ,typical_height(typical_height),wing_span(wing_span) {}

#endif //__BIRD_H__

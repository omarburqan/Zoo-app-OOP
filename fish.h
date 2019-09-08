#ifndef __FISH_H__
#define __FISH_H__

#include "animal.h"
#include "string.h"

class Fish: public Animal {
protected:
    size_t lowest_depth;
public:
	inline Fish(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,size_t &lowest_depth);
	
   	String get_extra_attr() const ;
	    

};
Fish::Fish(const String &animal_name,const String &species,
    	const String &life_expentancy,const String &continent,const String &type_food,
    	size_t &speed , size_t &lowest_depth)
        :
        Animal(animal_name,species,life_expentancy,continent,type_food,speed)
        ,lowest_depth(lowest_depth) {}

#endif //__FISH_H__

#ifndef __MAMAL_H__
#define __MAMAL_H__

#include "animal.h"
#include "string.h"

class Mamal : public Animal {

protected:
	size_t pregnancy_duration;
	size_t young_born;

public:
    inline Mamal(const String &animal_name,const String &species,const String &life_expentancy,
			const String &continent,const String &type_food,size_t &speed,
			size_t &pregnancy_duration, size_t &young_born);

   	String get_extra_attr() const ;

    

	
};
Mamal::Mamal(const String &animal_name,const String &species,
    	const String &life_expentancy,const String &continent,const String &type_food,
    		size_t &speed , size_t &pregnancy_duration, size_t &young_born)
        :
        Animal(animal_name,species,life_expentancy,continent,type_food,speed)
        ,pregnancy_duration(pregnancy_duration),young_born(young_born) {}

#endif //__MAMAL_H__

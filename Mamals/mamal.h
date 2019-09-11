#ifndef __MAMAL_H__
#define __MAMAL_H__

#include <sstream>  /* stringstream */
#include "../animal.h"
#include "../string.h"
#include "../InterFaces/MamalInterface.h"

class Mamal : public MamalInterface,public Animal {

public:
    inline Mamal(const String &animal_name);	
    
	virtual inline  ~Mamal();
	
	inline String get_extra_attr() const;
};

Mamal::Mamal(const String &animal_name)
        :
        Animal(animal_name) {}

Mamal::~Mamal(){}

String Mamal::get_extra_attr() const{ 
	std::stringstream res;
	res <<
       "\npregnancy duration: " << get_duration_of_pregnancy() <<
       "\nyoung porn: " << get_young_born() ;
	return res.str().c_str();
}

#endif //__MAMAL_H__

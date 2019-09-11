#ifndef __MAMAL_H__
#define __MAMAL_H__

#include "animal.h"
#include "string.h"


class Mamal : public Animal {

public:
    inline Mamal(const String &animal_name);	
    
	virtual inline  ~Mamal();
};

Mamal::Mamal(const String &animal_name)
        :
        Animal(animal_name) {}

Mamal::~Mamal(){}


#endif //__MAMAL_H__

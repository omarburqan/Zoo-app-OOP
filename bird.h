#ifndef __BIRD_H__
#define __BIRD_H__

#include "animal.h"
#include "string.h"

class Bird: public Animal {

public:
	inline Bird(const String &animal_name);
    
	virtual inline  ~Bird();
};

Bird::Bird(const String &animal_name)
        :
        Animal(animal_name) {}

Bird::~Bird(){}

#endif //__BIRD_H__

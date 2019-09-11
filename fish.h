#ifndef __FISH_H__
#define __FISH_H__

#include "animal.h"
#include "string.h"


class Fish: public Animal {

public:
	inline Fish(const String &animal_name);
    
	virtual inline  ~Fish();
};
Fish::Fish(const String &animal_name)
        :
        Animal(animal_name) {}
Fish::~Fish(){}

#endif //__FISH_H__

#ifndef __FISH_H__
#define __FISH_H__

#include <sstream>  /* stringstream */
#include "animal.h"
#include "string.h"
#include "FishInterface.h"

class Fish: public FishInterface,public Animal{

public:
	inline Fish(const String &animal_name);
    
	virtual inline ~Fish();
	
	inline String get_extra_attr() const;
};
Fish::Fish(const String &animal_name)
        :
        Animal(animal_name) {}
Fish::~Fish(){}


String Fish::get_extra_attr() const{ 
	std::stringstream res;
	res << 
	"\nlowest_depth: "<< lowest_depth();
	return res.str().c_str();
}
#endif //__FISH_H__

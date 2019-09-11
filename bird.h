#ifndef __BIRD_H__
#define __BIRD_H__

#include <sstream>  /* stringstream */
#include "animal.h"
#include "string.h"

class Bird: public Animal {

public:
	inline Bird(const String &animal_name);
    
	virtual inline  ~Bird();
	
    virtual unsigned char get_wing_span() const =0;
    
    virtual size_t get_typical_height() const =0;
    
	inline String get_extra_attr() const;
};

Bird::Bird(const String &animal_name)
        :
        Animal(animal_name) {}

Bird::~Bird(){}


String Bird::get_extra_attr() const{ 
	std::stringstream res;
	res <<
       "\ntypical height: " << get_typical_height() <<
       "\nwing span: " << get_wing_span() ;
	return res.str().c_str();
}

#endif //__BIRD_H__

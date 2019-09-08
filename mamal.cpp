#include <iostream>
#include "mamal.h"
#include <sstream>  /* stringstream */


String  Mamal::get_extra_attr() const { /* TODO :: CALL THE ANIMAL GET_ATTR() FUNCTION */
	std::stringstream res;
	res <<  "\npregnancy_duration: " << pregnancy_duration  <<
       "\nyoung_born: " << young_born << std::endl;
	return res.str().c_str();
}






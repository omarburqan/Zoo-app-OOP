 #include <iostream>
 #include "fish.h"
 #include <sstream>  /* stringstream */
 


String  Fish::get_extra_attr()const{ /* TODO :: CALL THE ANIMAL GET_ATTR() FUNCTION */
	std::stringstream res;
	res << "\nlowest_depth: " << lowest_depth  << std::endl;
	return res.str().c_str();
}



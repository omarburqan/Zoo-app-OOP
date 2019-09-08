 #include <iostream>
 #include "bird.h"
 #include <sstream>  /* stringstream */
 


String  Bird::get_extra_attr()const{ /* TODO :: CALL THE ANIMAL GET_ATTR() FUNCTION */
	std::stringstream res;
	res << "\ntypical_heigh: " << typical_height <<	
		"\nwing_span: " << wing_span << 
    std::endl;
	return res.str().c_str();
}



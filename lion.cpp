#include <iostream>
#include "lion.h"
 

String Lion::get_all_attr() const{ 
	std::stringstream res;
	res << 
       "\nspecies: " << get_species() <<
       "\nlife expentancy: " << get_life_expectancy() <<
       "\ncontinent: " << get_found_in() <<
       "\nfood type: " << get_type_food() <<
       "\nspeed: " << get_speed() <<
       "\npregnancy duration: " << get_duration_of_pregnancy() <<
       "\nyoung porn: " << get_young_born() ;
	return res.str().c_str();

}




#include <iostream>
#include "clown_fish.h"
 
 

String ClownFish::get_all_attr() const{ 
	std::stringstream res;
	res << 
       "\nspecies: " << get_species() <<
       "\nlife expentancy: " << get_life_expectancy() <<
       "\ncontinent: " << get_found_in() <<
       "\nfood type: " << get_type_food() <<
       "\nspeed: " << get_speed() <<
       "\nlowest_depth: "<< lowest_depth();
	return res.str().c_str();

}




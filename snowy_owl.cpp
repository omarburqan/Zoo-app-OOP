#include <iostream>
#include "snowy_owl.h"
 
 

String SnowyOil::get_all_attr() const{ 
	std::stringstream res;
	res << 
       "\nspecies: " << get_species() <<
       "\nlife expentancy: " << get_life_expectancy() <<
       "\ncontinent: " << get_found_in() <<
       "\nfood type: " << get_type_food() <<
       "\nspeed: " << get_speed() <<
       "\ntypical height: " << get_typical_height() <<
       "\nwing span: " << get_wing_span() ;
	return res.str().c_str();

}




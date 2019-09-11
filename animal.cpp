#include "animal.h"

String Animal::get_all_attr() const{
	std::stringstream res;
	res << 
       "\nName: " << get_name() <<
       "\nspecies: " << get_species() <<
       "\nlife expentancy: " << get_life_expectancy() <<
       "\ncontinent: " << get_found_in() <<
       "\nfood type: " << get_type_food() <<
       "\nspeed: " << get_speed() ;
	return res.str().c_str();
}
std::ostream &operator<<(std::ostream &os, const Animal &animal) {
    os <<  animal.get_all_attr() << animal.get_extra_attr() << std::endl ;
    return os;
}


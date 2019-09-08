#include "animal.h"

#include <sstream>  /* stringstream */



String  Animal::get_attr() const {
	std::stringstream res;
	res <<  "animal_name: " << animal_name <<
       "\nspecies: " << species <<
       "\nlife expentancy: " << life_expentancy <<
       "\ncontinent: " << continent <<
       "\nfood type: " << type_food <<
       "\nspeed: " << speed ;
	return res.str().c_str();
}

std::ostream &operator<<(std::ostream &os, const Animal &animal) {
    os <<  animal.get_attr() << animal.get_extra_attr() << "\n";
    return os;
}


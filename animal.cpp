#include "animal.h"


std::ostream &operator<<(std::ostream &os, const Animal &animal) {
    os <<  animal.get_name() << animal.get_all_attr() << std::endl ;
    return os;
}


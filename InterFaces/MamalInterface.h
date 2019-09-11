#ifndef __MAMALINTERFACE_H__
#define __MAMALINTERFACE_H__

#include "string.h"

struct MamalInterface {
		
	virtual unsigned char get_duration_of_pregnancy() const = 0 ;

    virtual unsigned char get_young_born() const = 0;

};


#endif //__MAMALINTERFACE_H__

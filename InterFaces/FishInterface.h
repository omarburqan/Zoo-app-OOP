#ifndef __FISHINTERFACE_H__
#define __FISHINTERFACE_H__

#include "string.h"

struct FishInterface {

    virtual size_t lowest_depth() const = 0;		
    
};


#endif //__FISHINTERFACE_H__

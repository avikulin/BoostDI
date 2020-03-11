#ifndef RENDERER_H
#define RENDERER_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

struct renderer: public iserializable
{
 int id;
 int device;
 // iserializable interface
public:
 //renderer(int dev_id, int app_id);
 BOOST_DI_INJECT(renderer, (named = dev_id_named) int dev_id, (named = app_id_named) int app_id);
 string to_string() const;
};

#endif // RENDERER_H

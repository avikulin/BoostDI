#ifndef USER_H
#define USER_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

using namespace std;

class user : public iserializable
{
private:
    int _id;
    string _first_name;
    string _last_name;
public:
    //user(string first_name, string last_name, int app_id);
    BOOST_DI_INJECT(user, (named = first_name_named) string first_name, (named = last_name_named) string last_name, (named = app_id_named) int app_id);
    string to_string() const;
    ~user();
};

#endif // USER_H

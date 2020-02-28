#ifndef USER_H
#define USER_H

#include <sstream>
#include <iostream>
#include "../interfaces/base_interfaces.hpp"

using namespace std;

class user : public iserializable
{
private:
    string _first_name;
    string _last_name;
public:
    user(string first_name, string last_name);
    string to_string();
    ~user();
};

#endif // USER_H

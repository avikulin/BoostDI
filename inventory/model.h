#ifndef MODEL_H
#define MODEL_H

#include <sstream>
#include <iostream>
#include "../interfaces/base_interfaces.hpp"

using namespace std;

class model: public iserializable {
private:
    string _name;
public:
    model(string name);

    string to_string() override;

    ~model();
};

#endif // MODEL_H

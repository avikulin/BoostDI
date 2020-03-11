#ifndef MODEL_H
#define MODEL_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

//---DEPENDACIES---
#include "../interfaces/base_interfaces.hpp"

using namespace std;

class model: public iserializable {
private:
    int _id;
    string _name;
public:
    //--canonical decl: model(string name, int app_id);
    BOOST_DI_INJECT(model, (named = model_name_named) string name, (named = app_id_named) int app_id);
    string to_string() const override;

    ~model();
};

#endif // MODEL_H

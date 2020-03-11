#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

using namespace std;

class text_view: public iview {
private:
    int _id;
public:
    //text_view(int app_id);
    BOOST_DI_INJECT(text_view, (named = app_id_named) int app_id);
    string to_string() const override;
    void update() override;
    ~text_view();

};

#endif // TEXT_VIEW_H

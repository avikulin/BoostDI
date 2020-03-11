#ifndef CONTROLLER_H
#define CONTROLLER_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

//---DEPENDACIES---
#include "model.h"

using namespace std;

class controller: public iserializable {
 private:
    int _id;
    model& _model;
    iview& _view;

 public:
  //controller(model& model_item, iview& view_item, int app_id);
  BOOST_DI_INJECT(controller, model& model_item, iview& view_item, (named = app_id_named) int app_id);
  string to_string() const override;
  ~controller();
};

#endif // CONTROLLER_H

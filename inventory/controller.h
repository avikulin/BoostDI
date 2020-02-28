#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <sstream>

#include "../interfaces/base_interfaces.hpp"
#include "model.h"

using namespace std;

class controller: public iserializable {
 private:
    model& _model;
    iview& _view;

 public:
  controller(model& model_item, iview& view_item);
  string to_string() override;
  ~controller();
};

#endif // CONTROLLER_H

#ifndef APP_H
#define APP_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

//---DEPENDANCIES---
#include "controller.h"
#include "user.h"

using namespace std;

class app: public iserializable {
 private:
    int _id;
    controller& _controller;
    user& _user;
 public:
  //app(controller& controller_item, user& user_item, int app_id);
  BOOST_DI_INJECT(app, controller& controller_item, user& user_item, (named = app_id_named) int app_id);
  string to_string() const override;
  ~app();
};
#endif // APP_H

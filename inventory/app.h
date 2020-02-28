#ifndef APP_H
#define APP_H

#include <sstream>
#include <iostream>

#include "../interfaces/base_interfaces.hpp"
#include "controller.h"
#include "user.h"

using namespace std;

class app: public iserializable {
 private:
    controller& _controller;
    user& _user;
 public:
  app(controller& controller_item, user& user_item);
  string to_string() override;
  ~app();
};
#endif // APP_H

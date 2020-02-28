#ifndef GUI_VIEW_H
#define GUI_VIEW_H

#include <iostream>
#include <sstream>

#include "../interfaces/base_interfaces.hpp"
#include "renderer.h"

using namespace std;

class gui_view: public iview {
private:
    string _title;
    const renderer& _renderer;
public:
  gui_view(string title, const renderer& renderer_item);

  string to_string() override;

  void update() override;

  ~gui_view();
};

#endif // GUI_VIEW_H

#ifndef GUI_VIEW_H
#define GUI_VIEW_H

//---STL----
#include <sstream>
#include <iostream>

//---EXT-LIBS----
#include "../boost/di.hpp"

//---INTERGACES---
#include "../interfaces/base_interfaces.hpp"
#include "../bindings/named_types.h"

//---DEPENDACIES---
#include "renderer.h"

using namespace std;

class gui_view: public iview {
private:
    int _id;
    string _title;
    const renderer& _renderer;
public:
  //gui_view(string title, const renderer& renderer_item, int app_id);
  BOOST_DI_INJECT(gui_view, (named = gui_view_title_named) string title, const renderer& renderer_item, (named = app_id_named) int app_id);
  string to_string() const override;
  void update() override;
  ~gui_view();
};

#endif // GUI_VIEW_H

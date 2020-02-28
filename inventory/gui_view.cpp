#include "gui_view.h"

gui_view::gui_view(string title, const renderer &renderer_item)
    :_title(title), _renderer(renderer_item){
    //      cout << "gui_view: created "<< to_string() << endl;
}

string gui_view::to_string() {
    stringstream ss;
    ss <<"( title = "<< _title << " renderer.device = " << _renderer.device <<" )";
    return ss.str();
}

void gui_view::update() {
    cout << "gui_view: upadte() method launched."<< endl;
}

gui_view::~gui_view(){
    cout << "gui_view: deleted."<< endl;
}

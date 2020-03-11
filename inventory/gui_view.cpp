#include "gui_view.h"

gui_view::gui_view(string title, const renderer &renderer_item, int app_id)
    :_title(title), _renderer(renderer_item), _id(app_id){
    cout << "gui_view ["<< this->_id <<"]: created "<< to_string() << endl;
}

string gui_view::to_string() const {
    stringstream ss;
    ss <<"(title = "<< _title << " renderer = " << _renderer.to_string() <<" app id = "<< this->_id <<")";
    return ss.str();
}

void gui_view::update() {
    cout << "gui_view ["<< this->_id <<"]: upadte() method launched."<< endl;
}

gui_view::~gui_view(){
    cout << "gui_view ["<< this->_id <<"]: deleted."<< endl;
}

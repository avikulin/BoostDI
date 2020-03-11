#include "text_view.h"

text_view::text_view(int app_id): _id(app_id){
    cout << "text_view ["<< this->_id <<"]: created " << to_string() << endl;
}

string text_view::to_string() const {
    stringstream ss;
    ss << "( app id = "<< _id << " )";
    return ss.str();
}

void text_view::update(){
    cout << "text_view ["<< this->_id <<"]: upadte() method launched."<< endl;
}

text_view::~text_view(){
    cout << "text_view ["<< this->_id <<"]: deleted."<< endl;
}

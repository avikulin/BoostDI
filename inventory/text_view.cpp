#include "text_view.h"

text_view::text_view(int id): _id(id){
    cout << "text_view: created " << to_string() << endl;
}

string text_view::to_string()  {
    stringstream ss;
    ss << "( id = "<< _id << " )";
    return ss.str();
}

void text_view::update(){
    cout << "text_view: upadte() method launched."<< endl;
}

text_view::~text_view(){
    cout << "text_view: deleted."<< endl;
}

#include "model.h"


model::model(string name, int app_id):_name(name), _id(app_id){
    cout << "model ["<< this->_id <<"]: created "<< to_string() << endl;
}

string model::to_string() const {
    stringstream ss;
    ss << "( name = "<< _name << " app id = "<< this->_id <<" )";
    return ss.str();
}

model::~model(){
    cout << "model ["<< this->_id <<"]: deleted."<< endl;
}

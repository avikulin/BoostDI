#include "model.h"


model::model(string name):_name(name){
    cout << "model: created "<< to_string() << endl;
}

string model::to_string() {
    stringstream ss;
    ss << "( name = "<< _name << " )";
    return ss.str();
}

model::~model(){
    cout << "model: deleted."<< endl;
}

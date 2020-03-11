#include "controller.h"

controller::controller(model &model_item, iview &view_item, int app_id)
    :_model(model_item), _view(view_item), _id(app_id){
    cout << "controller["<<this->_id<<"]: created" << to_string() << endl;
}

string controller::to_string() const {
    stringstream ss;
    ss << "( model = "<< _model.to_string() <<", view = "<< _view.to_string() << " )";
    return ss.str();
}

controller::~controller(){
    cout << "controller ["<< this->_id <<"]: deleted."<< endl;
}

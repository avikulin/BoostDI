#include "controller.h"


controller::controller(model &model_item, iview &view_item)
    :_model(model_item), _view(view_item){
    cout << "controller: created" << to_string() << endl;
}

string controller::to_string() {
    stringstream ss;
    ss << "( model = "<< _model.to_string() <<", view = "<< _view.to_string() << " )";
    return ss.str();
}

controller::~controller(){
    cout << "controller: deleted."<< endl;
}

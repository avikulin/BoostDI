#include "app.h"

app::app(controller &controller_item, user &user_item, int app_id)
    :_controller(controller_item), _user(user_item), _id(app_id){
    cout << "application ["<< this->_id <<"]: created" << to_string() << endl;
}

string app::to_string() const {
    stringstream ss;
    ss << "( application = "<< _controller.to_string() <<", user = "<< _user.to_string() << " )";
    return ss.str();
}

app::~app(){
    cout << "app: deleted."<< endl;
}

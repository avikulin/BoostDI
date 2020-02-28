#include "app.h"

app::app(controller &controller_item, user &user_item)
    :_controller(controller_item), _user(user_item){
    cout << "controller: created" << to_string() << endl;
}

string app::to_string() {
    stringstream ss;
    ss << "( controller = "<< _controller.to_string() <<", user = "<< _user.to_string() << " )";
    return ss.str();
}

app::~app(){
    cout << "app: deleted."<< endl;
}

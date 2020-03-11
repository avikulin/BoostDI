#include "user.h"

user::user(string first_name, string last_name, int app_id)
    :_first_name(first_name), _last_name(last_name), _id(app_id){
    cout << "user ["<< this->_id <<"]: created " << to_string() << endl;
}

string user::to_string() const{
    stringstream ss;
    ss<<"( first name = " << _first_name << " last_name = " << _last_name << " app id = "<<this->_id << " )";
    return ss.str();
}

user::~user(){
    cout << "user ["<< this->_id <<"]: deleted."<< endl;
}

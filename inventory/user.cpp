#include "user.h"



user::user(string first_name, string last_name)
    :_first_name(first_name), _last_name(last_name){
    cout << "user: created " << to_string() << endl;
}

string user::to_string(){
    stringstream ss;
    ss<<"( first name = " << _first_name << " last_name = " << _last_name << " )";
    return ss.str();
}

user::~user(){
    cout << "user: deleted."<< endl;
}

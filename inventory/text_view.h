#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H


#include <sstream>
#include <iostream>

#include "../interfaces/base_interfaces.hpp"

using namespace std;

class text_view: public iview {
private:
    int _id;
public:
    text_view(int id);
    string to_string() override;
    void update() override;
    ~text_view();

};

#endif // TEXT_VIEW_H

#include "renderer.h"


renderer::renderer(int dev_id, int app_id):device(dev_id), id(app_id)
{
    cout << "renderer ["<< this->id <<"]: created "<< to_string() << endl;
}

string renderer::to_string() const
{
    stringstream ss;
    ss << "( device# = "<< this->device<< " app id = "<< this->id <<" )";
    return ss.str();
}

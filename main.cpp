#include <iostream>
#include <sstream>

#include "boost/di.hpp"
#include "inventory/app.h"

using namespace std;
namespace di = boost::di;

int main()
{
    cout << "Hello DI!" << endl<< endl;
    auto injector = di::make_injector();
    injector.create<app>();
    return 0;
}

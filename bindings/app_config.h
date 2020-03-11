#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#include "../inventory/app.h"

struct params {
    app_id
    model_name
    first_name
    last_name
    dev_id
   title
};

class app_config
{
public:
    static get_app_injector(int app_id);
};

#endif // APP_CONFIG_H

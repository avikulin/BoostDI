#include "controller_config.h"


static auto controller_config::get_controller_injector(int app_id)
{
    auto injector = di::make_injector(
                di::bind<int>().named(app_id_named).to(app_id)
              );
    return injector;
}

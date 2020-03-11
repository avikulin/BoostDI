#include "app_config.h"
//####################################################################################
//--bindings constructor for "app" class...
//
//  List of the constructor managed:
//    x app(controller& controller_item, user& user_item, int app_id);
//    x controller(model& model_item, iview& view_item, int app_id);
//    x gui_view(string title, const renderer& renderer_item, int app_id);
//    x text_view(int app_id);
//    x model(string name, int app_id);
//    x renderer(int dev_id, int app_id);
//    x user(string first_name, string last_name, int app_id);
//
// List of interfaces:
//   x iview - abstraction of the presenter method.
//
// List of named types needed:
//   x app_id(@app) - id of the instance of "app" class
//   x model_name(@model) - the name of the model
//   x first_name(@user) - the user's first name
//   x last_name(@user) - the user's last name
//   x dev_id (@renderer) - the number of renderer device
//   x title (@gui_view) - the title of the instance
//#####################################################################################

#include "named_types.h"

static auto app_config::get_app_injector(int app_id)
{
    auto injector = di::make_injector(
                di::bind<int>().named(app_id_named).to(app_id)
              );
    return injector;
}

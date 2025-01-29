#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <httplib.h>
#include "models/User.h"
#include "views/UserView.h"

class UserController {
public:
    static void showUser(const httplib::Request& req, httplib::Response& res) {
        // Create a sample user (in a real app, this would come from a database)
        User user("John Doe", 30);

        // Render the view
        std::string html = UserView::render(user);
        res.set_content(html, "text/html");
    }
};

#endif // USERCONTROLLER_H

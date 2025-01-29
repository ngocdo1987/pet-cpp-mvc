#ifndef USERVIEW_H
#define USERVIEW_H

#include <string>
#include "inja.hpp"
#include "models/User.h"

class UserView {
public:
    static std::string render(const User& user) {
        // Create an inja environment
        inja::Environment env;

        // Load the template from a file
        inja::Template temp = env.parse_template("../views/user.html.j2");

        // Create a JSON object with user data
        nlohmann::json data;
        data["name"] = user.getName();
        data["age"] = user.getAge();
        data["title"] = "User Profile";

        // Render the template with the data
        return env.render(temp, data);
    }
};

#endif // USERVIEW_H
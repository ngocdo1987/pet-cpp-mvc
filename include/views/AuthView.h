#ifndef AUTHVIEW_H
#define AUTHVIEW_H

#include <string>
#include "inja.hpp"

class AuthView {
public:
    static std::string login() {
        // Create an inja environment
        inja::Environment env;

        try {
            // Load the template from a file
            inja::Template temp = env.parse_template("include/views/auth/login.html.j2");

            // Create a JSON object with user data
            nlohmann::json data;
            data["title"] = "Login";

            // Render the template with the data
            return env.render(temp, data);
        } catch (const std::exception& e) {
            std::cerr << "Error in AuthView::login: " << e.what() << "\n";
            return "<html><body><h1>Error rendering template</h1></body></html>";
        }
    }

    static std::string register() {
        // Create an inja environment
        inja::Environment env;

        try {
            // Load the template from a file
            inja::Template temp = env.parse_template("include/views/auth/register.html.j2");

            // Create a JSON object with user data
            nlohmann::json data;
            data["title"] = "Register";

            // Render the template with the data
            return env.render(temp, data);
        } catch (const std::exception& e) {
            std::cerr << "Error in AuthView::register: " << e.what() << "\n";
            return "<html><body><h1>Error rendering template</h1></body></html>";
        }
    }
};

#endif // AUTHVIEW_H
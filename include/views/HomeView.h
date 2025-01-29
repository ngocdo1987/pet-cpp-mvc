#ifndef HOMEVIEW_H
#define HOMEVIEW_H

#include <string>
#include "inja.hpp"

class HomeView {
public:
    static std::string renderIndex() {
        // Create an inja environment
        inja::Environment env;

        try {
            // Load the template from a file
            inja::Template temp = env.parse_template("include/views/home/index.html.j2");

            // Create a JSON object with user data
            nlohmann::json data;
            data["title"] = "User Profile";

            // Render the template with the data
            return env.render(temp, data);
        } catch (const std::exception& e) {
            std::cerr << "Error in HomeView::render: " << e.what() << "\n";
            return "<html><body><h1>Error rendering template</h1></body></html>";
        }
    }
};

#endif // USERVIEW_H
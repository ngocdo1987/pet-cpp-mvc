#ifndef HOMECONTROLLER_H
#define HOMECONTROLLER_H

#include <httplib.h>

class HomeController {
public:
    static void index(const httplib::Request& req, httplib::Response& res) {
        
        // Render the view using Inja
        std::string html = HomeView::renderIndex();
        res.set_content(html, "text/html");
    }
};

#endif // HOMECONTROLLER_H
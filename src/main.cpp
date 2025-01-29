#include "httplib.h"
#include "controllers/UserController.h"

int main() {
    httplib::Server svr;

    // Home route
    svr.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Welcome to the C++ MVC Framework!", "text/plain");
    });

    // User route
    svr.Get("/user", UserController::showUser);

    // Start the server
    std::cout << "Server started at http://localhost:1239\n";
    svr.listen("localhost", 1239);

    return 0;
}

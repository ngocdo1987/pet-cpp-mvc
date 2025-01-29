#include <httplib.h>
#include "controllers/HomeController.h"
#include "controllers/UserController.h"

int main() {
    httplib::Server svr;

    // Home route
    svr.Get("/", HomeController::index);

    // User route
    svr.Get("/user", UserController::showUser);

    // Start the server
    std::cout << "Server started at http://localhost:1239\n";
    svr.listen("localhost", 1239);

    return 0;
}

#ifndef USERVIEW_H
#define USERVIEW_H

#include <string>
#include "models/User.h"

class UserView {
public:
    static std::string render(const User& user) {
        return "<html><body><h1>User: " + user.getName() + "</h1><p>Age: " + std::to_string(user.getAge()) + "</p></body></html>";
    }
};

#endif // USERVIEW_H

#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& name, int age) : name(name), age(age) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }

private:
    std::string name;
    int age;
};

#endif // USER_H

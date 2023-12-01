#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>

using namespace std;

class Package {
public:
    Package(const std::string& sender, const std::string& receiver, const std::string& data)
        : sender(sender), receiver(receiver), data(data) {}

    void send() {
        cout << "Package sent from " << sender << " to " << receiver << ": " << data << endl;
    }

private:
    string sender;
    string receiver;
    string data;
};

#endif 


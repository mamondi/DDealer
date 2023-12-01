#ifndef PACKAGE_DTO_H
#define PACKAGE_DTO_H
#include <string>


class PackageDTO {
public:
    PackageDTO(const std::string& sender, const std::string& receiver, const std::string& data)
        : sender(sender), receiver(receiver), data(data) {}

    string getSender() const { return sender; }
    string getReceiver() const { return receiver; }
    string getData() const { return data; }

private:
    string sender;
    string receiver;
    string data;
};

#endif 


#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
    public:
    Contact(void);
    ~Contact(void);
    void    init_param(void);
    void    print_contact(void);
    void    set_firstname(std::string info);
    void    set_lastname(std::string info);
    void    set_nickname(std::string info);
    void    set_phone(std::string info);
    void    set_secret(std::string info);
    private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone;
    std::string secret;
};

#endif
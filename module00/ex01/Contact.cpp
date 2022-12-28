#include "PhoneBook.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

void    Contact::init_param(void) {
    this->first_name = "0";
    this->last_name = "0";
    this->nick_name = "0";
    this->phone = "0";
    this->secret = "0";
    return ;
}

void    Contact::print_contact(void) {
    std::cout << "first_name: " << this->first_name << std::endl;
    std::cout << "last_name: " << this->last_name << std::endl;
    std::cout << "nick_name: " << this->nick_name << std::endl;
    std::cout << "phone: " << this->phone << std::endl;
    std::cout << "secret: " << this->secret << std::endl;
    return ;
}

void    Contact::set_firstname(std::string info) {
    this->first_name = info;
    return ;
}

void    Contact::set_lastname(std::string info) {
    this->last_name = info;
    return ;
}

void    Contact::set_nickname(std::string info) {
    this->nick_name = info;
    return ;
}

void    Contact::set_phone(std::string info) {
    this->phone = info;
    return ;
}

void    Contact::set_secret(std::string info) {
    this->secret = info;
    return ;
}
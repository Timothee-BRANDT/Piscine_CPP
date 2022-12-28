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

void    Contact::print_contact(int i) {
    int first_len = this->first_name.length();
    int last_len = this->last_name.length();
    int nick_len = this->nick_name.length();
    std::cout << i;
    std::cout << "|";
    if (first_len <= 10)
    {
        for (int i = 0; i < (10 - first_len); i++)
            std::cout << " ";
        std::cout << this->first_name;
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << this->first_name[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (last_len <= 10)
    {
        for (int i = 0; i < (10 - last_len); i++)
            std::cout << " ";
        std::cout << this->last_name;
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << this->last_name[i];
        std::cout << ".";
    }
    std::cout << "|";
    if (nick_len <= 10)
    {
        for (int i = 0; i < (10 - nick_len); i++)
            std::cout << " ";
        std::cout << this->nick_name;
    }
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << this->nick_name[i];
        std::cout << ".";
    }
    std::cout << std::endl;
    return ;
}

void    Contact::print_info(void) {
    std::cout << "First name : " << this->first_name << std::endl;
    std::cout << "Last name : " << this->last_name << std::endl;
    std::cout << "Nick name : " << this->nick_name << std::endl;
    std::cout << "Phone number : " << this->phone << std::endl;
    std::cout << "Darkest secret : " << this->secret << std::endl;
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
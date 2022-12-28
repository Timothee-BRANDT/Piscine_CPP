#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    std::cout << "PhoneBook Constructor called" << std::endl;
    for (int i = 0; i < 8; i++) {
        this->contact[i].init_param();
    }
}

PhoneBook::~PhoneBook(void) {
    std::cout << "PhoneBook Desctuctor Called" << std::endl;
}

void    PhoneBook::new_contact(int i) {
    std::string info;
    std::cout << "Enter a firstname : ";
    std::cin >> info;
    this->contact[i].set_firstname(info);
    std::cout << "Enter a lastname : ";
    std::cin >> info;
    this->contact[i].set_lastname(info);
    std::cout << "Enter a nickname : ";
    std::cin >> info;
    this->contact[i].set_nickname(info);
    std::cout << "Enter a phone number : ";
    std::cin >> info;
    this->contact[i].set_phone(info);
    std::cout << "Enter a dark secret : ";
    std::cin >> info;
    this->contact[i].set_secret(info);
    // for (int j = 0; j < 8; j++) {
        // this->contact[j].print_contact();
    }
}
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = Contact.cpp PhoneBook.cpp main.cpp
OBJECTS = $(SOURCES:.cpp=.o)

phone_book: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) phone_book

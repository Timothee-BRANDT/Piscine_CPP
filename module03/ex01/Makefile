CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) a.out

re : clean all
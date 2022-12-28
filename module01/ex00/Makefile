CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS = $(SOURCES:.cpp=.o)

zombie: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o zombie

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

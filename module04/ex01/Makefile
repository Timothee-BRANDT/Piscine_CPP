CC = c++
NAME = animal
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJECTS) animal

re : clean all

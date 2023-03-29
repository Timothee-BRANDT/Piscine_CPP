CC = c++
NAME = PmergeMe
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Pmerge.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJECTS) $(NAME)

fclean : clean
	rm -f $(OBJECTS)

re : clean all

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Harl.cpp
OBJECTS = $(SOURCES:.cpp=.o)

HarlFilter: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o HarlFilter

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) HarlFilter

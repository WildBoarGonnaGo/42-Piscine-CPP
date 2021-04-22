NAME := phonebook
CC := clang++
CFLAGS := -Wall -Wextra -Werror -g -std=c++98
SRCS := Phonebook.class.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
DEPS := $(OBJS:.o=.d)
-include $(DEPS)
DEPSFLAGS = -MMD -MF $(@:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< $(DEPSFLAGS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all
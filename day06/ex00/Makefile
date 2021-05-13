NAME := convert
CC := clang++
CFLAGS := -Wall -Wextra -Werror -g -std=c++98
SRCS :=	ConvertOutput.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
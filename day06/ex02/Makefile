NAME := identReal
CC := clang++
CFLAGS := -Wall -Wextra -Werror -g -std=c++98
SRCS :=	Base.cpp A.cpp B.cpp C.cpp identReal.cpp main.cpp
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
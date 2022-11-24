NAME	= libft.a
AR		= ar

CC		= cc
CFLAGS	= -Wall -Werror -Wextra

SRCS	= \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS	= $(SRCS:.c=.o)

BSRCS	= \
ft_lstnew.c ft_lstadd_front.c ft_lstsize.c
BOBJS	= $(BSRCS:.c=.o)

%.o:
	$(CC) $(CFLAGS) -c $(@:.o=.c) -o $@

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(BOBJS)
	$(AR) rcs $(NAME) $(OBJS) $(BOBJS)

.PHONY: all clean fclean re bonus

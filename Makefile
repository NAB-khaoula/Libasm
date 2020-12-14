NAME = libasm.a

CC = nasm

CFLAGS = -f macho64

SRC =	ft_read.s	\
		ft_strcmp.s	\
		ft_strcpy.s	\
		ft_strlen.s	\
		ft_write.s	\
		ft_strdup.s

OBJECTS = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@echo  "\033[92m" "Object files created, ready to compile your main."

%.o : %.s
	    @$(CC) $(CFLAGS)  $< 

clean:
		@rm -rf $(OBJECTS)

fclean: clean
		@rm -rf $(NAME)
		@rm -rf a.out
		@echo "\033[0;33m" "Cleaned succesfully."

re: fclean all
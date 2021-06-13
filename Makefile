CC = gcc
CFLAGS = I
DEPS = push_swap.h
OBJ = push_swap.o 
%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

push_swap: $(OBJ)
		$(CC) -o $@ $^ $^ $(CFLAGS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:			clean
				$(RM) $(NAME)


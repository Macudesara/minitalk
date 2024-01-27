# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 13:28:10 by mde-sara          #+#    #+#              #
#    Updated: 2024/01/27 20:37:18 by macudesaras      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Names
NAME = minitalk
MKFL = Makefile
SERVER = server
CLIENT = client
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

# Comandos
CC = gcc
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -MMD -MP -MT $@
RM = rm -rf

# Paths
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

# Files
SRCS_SERVER = server.c
OBJ_SERVER = $(SRCS_SERVER:.c=.o)

SRCS_CLIENT = client.c
OBJ_CLIENT = $(SRCS_CLIENT:.c=.o)

SRCS_SERVER_BONUS = server_bonus.c
OBJ_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)

SRCS_CLIENT_BONUS = client_bonus.c
OBJ_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)

all: makelib $(NAME)

makelib:
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(SERVER): $(OBJ_SERVER) 
	$(CC) $(CFLAGS) $(OBJ_SERVER) -L $(LIBFT_PATH) -lft -o $(SERVER)

$(CLIENT): $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) -L $(LIBFT_PATH) -lft -o $(CLIENT)

$(SERVER_BONUS): $(OBJ_SERVER_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER_BONUS) -L $(LIBFT_PATH) -lft -o $(SERVER_BONUS)

$(CLIENT_BONUS): $(OBJ_CLIENT_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT_BONUS) -L $(LIBFT_PATH) -lft -o $(CLIENT_BONUS)

# Regla de compilación de archivos fuente a objetos
%.o: %.c $(MKFL)
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencias automáticas
$(OBJ_SERVER): $(SRCS_SERVER)
$(OBJ_CLIENT): $(SRCS_CLIENT)
$(OBJ_SERVER_BONUS): $(SRCS_SERVER_BONUS)
$(OBJ_CLIENT_BONUS): $(SRCS_CLIENT_BONUS)

clean:
	@$(MAKE) clean -C $(LIBFT_PATH)
	@$(RM) $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_SERVER_BONUS) $(OBJ_CLIENT_BONUS)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_PATH)
	@$(RM) $(SERVER) $(CLIENT)

re: fclean all

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

.PHONY: all clean fclean re bonus

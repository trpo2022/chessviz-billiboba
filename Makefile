all: chess

chess: main.c
    gcc main.c -Wall -Werror -o chess
WARNINGS = -Wall -Werror -Wextra -Wpedantic -Wconversion -Wcast-align -Wno-unused -Wshadow -Wformat-security -Wmissing-prototypes -Wmissing-format-attribute
CFLAGS = -std=c17 -O0 -g -I. $(WARNINGS)
SRC = $(wildcard *.c)

main: $(SRC)
	mkdir -p out
	gcc $(CFLAGS) $^ -o out/main

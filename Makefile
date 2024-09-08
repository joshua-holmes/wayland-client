
run: src/main.c
	@gcc src/*.c -lwayland-client && ./a.out && rm a.out

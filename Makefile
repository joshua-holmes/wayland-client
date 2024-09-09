
run: src/main.c
	@gcc src/*.c -lwayland-client -lrt && ./a.out && rm a.out

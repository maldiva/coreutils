#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv) {
	unlinkat(AT_FDCWD, argv[1], 0);
	return 0;
}


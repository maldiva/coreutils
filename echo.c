#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv) {
	char mystring[100];
	strcpy(mystring, "");
		for (int i = 1; i < argc; ++i) {
			strcat(mystring, argv[i]);
			if (i < argc-1) {
			strcat(mystring, " ");
			}
		}
	write(1, mystring, strlen(mystring));
	write(1, "\n", 1);
	return 0;
}

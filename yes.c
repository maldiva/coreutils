
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {

	if (argc == 1) {
		while (1) {
		write(1,"y\n",2);
		}
	} else {
		char mystring[100];
		strcpy(mystring, "");
		for (int i = 1; i < argc; ++i) {
			strcat(mystring, argv[i]);
			if (i < argc-1) {
			strcat(mystring, " ");
			}
		}
		strcat(mystring, "\n");
		while (1) {
		write(1,mystring, strlen(mystring) );
		}
	}
	return 0;
}

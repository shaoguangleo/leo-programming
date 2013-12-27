#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
	FILE *fp;
	fp = fopen("filedoesnotexist.txt", "rb");
	if (fp == NULL) {
		fprintf(stderr, "Value of errno: %d\n", errno);
		fprintf(stderr, "Error opening the file: %s\n",
			strerror(errno));
		perror("Error printed by perror");
	} else {
		fclose(fp);
	}
	return 0;
}

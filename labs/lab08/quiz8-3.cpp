#include <cstdio>

int main(int argc, char *argv[]) {
    FILE *fpin = fopen(argv[1], "r");
    if (fpin != NULL) {
	int x;
	while (!feof(fpin)) {
	    int rv = fscanf(fpin, "%d", &x);
	    if (rv == 1) {
		printf("%d\n", x);
		break;
	    } else {
		getc(fpin);
	    }
	}
	fclose(fpin);
    }
    return 0;
}

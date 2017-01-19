#include <stdio.h>
#include <errno.h>

int main (int argc, char *argv[]) {
	FILE* led = NULL;
	int DEBUG = 0;
	if (argc > 1) {
		DEBUG = 1;
	}
	if ( DEBUG == 1 ) {
		printf("\nStarting critical application\n");
	}
	led = fopen("/sys/class/leds/d3/brightness", "w");
	if (led == NULL) {
		perror("Error: ");
		return(1);
	}
	fprintf(led, "1");
        fclose(led);
	if ( DEBUG == 1 ) {
		printf("\nDone critical application\n");
	}
	return(0);
}

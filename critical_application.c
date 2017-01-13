#include <stdio.h>
#include <errno.h>

int main (void) {
	FILE* led = NULL;

	led = fopen("/sys/class/leds/d3/brightness", "w");
	if (led == NULL) {
		perror("Error: ");
		return(1);
	}
	fprintf(led, "1");
        fclose(led);
	return(0);
}

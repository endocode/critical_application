all: critical_application.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o critical_application
clean:
	rm -rf critical_application

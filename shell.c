#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAXCOM 1000
#define MAXLIST 100

#define clear() printf("\033[H\033[J")

// Print Current User
void printUsr() {
	char* username = getenv("USER");
	printf("\nUsername:\t%s", username);
}

// Print Current Host
void printHost() {
	char hostname[1024];
	gethostname(hostname, sizeof(hostname));
	printf("\nHostname:\t%s", hostname);
}

// Print Current Directory
void printDir() {
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("\nDirectory:\t%s\n", cwd);
}

// Initialize
void init_shell() {
	clear();
	printf("\n-------------------------");
	printf("\nDWARF SHELL\n");
	printf("\nAuthor:  Jagan Ganesh");
	printf("\nVersion: 0.0.1");
	printf("\nLicense: GPLv3");
	printf("\n-------------------------\n");
	printUsr();
	printHost();
	printDir();
	printf("\n\n");
	// sleep(1);
	// clear();
}

int main() {
	init_shell();
	return 0;
}

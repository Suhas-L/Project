// C program for the Examination
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"declarations.h"

// Driver Code
int main()
{
	printf("Welcome to Student "
		"database registration \n");

	printf("Enter 0 to exit \n");
	printf("Enter 1 to add student"
		" record \n");
    int option;
	scanf("%d", &option);

	// Switch Statements
	switch (option) {
	case 0:
		exit(0);

	case 1:
		add(s);
		break;

	default:
		printf("Only enter 0 or 1");
		execute();
	}
	return 0;
}

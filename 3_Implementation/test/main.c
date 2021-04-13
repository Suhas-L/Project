#include "declfile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int option = 0;
int i = 0;
int n = 0;
int j = 0;
float present = 75.00;
char money = 'P';
float tdays = 1;

    printf("Welcome to Student "
        "database registration \n");

    printf("Enter 0 to exit \n");
    printf("Enter 1 to add student"
        " record \n");

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

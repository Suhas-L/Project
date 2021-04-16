#include"declarations.h"

// Function to print the student
// details of the eligible students
void eligibleStudents(struct student s[])
{   
    float present = 75.00;
    char money = 'P';
    int n,i;
	printf("________________"
		"________________"
		"_______________"
		"_____________ \n");
	printf("Qualified student are = \n");

	// Iterate over the list of the
	// students records
	for (i = 0; i < n; i++) {
		// Condition to check the
		// eligibility of the student
		if (s[i].fees == money || 'B' == money) {
			if (s[i].attend >= present) {
				printf("Student name = %s \n",
					s[i].name);

				printf("Student roll no. = %d \n",
					s[i].rno);

				printf(" Student fees = %c \n",
					s[i].fees);

				printf(" Student attendence = %f \n",
					s[i].attend);
			}
		}
	}
}

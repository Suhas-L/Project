#include"declarations.h"

// Function to print the students record
void print_student(struct student s[])
{   int n,i;
	// Iterate over the students
	// students records
	for (i = 0; i < n; i++) {
		printf("Name of student %s \n",
			s[i].name);
		printf("Student roll number = %d \n",
			s[i].rno);
		printf("Student fees status = %c \n",
			s[i].fees);
		printf("student number of days "
			"present = %d \n",
			s[i].days);
		printf("Student attendence = %f \n",
			s[i].attend);
	}
}

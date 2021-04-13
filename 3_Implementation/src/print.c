#include "declfile.h"
void printStudents(struct student s[])
{
    // Loop to iterate over the students
    // students records
    for (i = 0; i < n; i++) {

        printf("Name of student %s \n",
            s[i].name);
        printf("Student roll number = %d \n",
            s[i].rno);
        printf("Student fees status = %c \n",
            s[i].fees);
        printf("Student number of days "
            "present = %f \n",
            s[i].days);
        printf("Student attendence = %f \n",
            s[i].attend);
    }
}

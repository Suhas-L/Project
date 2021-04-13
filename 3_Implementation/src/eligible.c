#include "declfile.h"

void eligibleStudents(struct student s[])
{
    printf("________________"
        "________________"
        "_______________"
        "_____________ \n");
    printf("Qualified student are = \n");

    // Iterate over the list
    // of the students records
    for (i = 0; i < n; i++) {
        // Check for the eligibility
        // of the student
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

/**
 * @file declfile.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2021
 **/

# ifndef __DECLFILE_H__
# define __DECLFILE_H__
/**
 * @brief Function to add students to the existing record
 * 
 */
#include <stdio.h>

struct student {
    char name[20];
    int rno;
    char fees;
    float days;
    float attend;
} s[50];

void add(struct student s[]);
/**
 * @brief Function to find the eligible students
 * 
 */
void eligibleStudents(struct student s[]);
/**
 * @brief Function to ask what the user want to do
 * 
 */
void execute();
/**
 * @brief Function to print the details of the student
 * 
 */
void printStudents(struct student s[]);
/**
 * @brief Function to delete a students record
 * 
 */
void deleteRecord(struct student s[]);

#endif /** __DECLFILE_H__ **/

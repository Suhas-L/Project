/**
 * @file declarations.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * 
 * @copyright Copyright (c) 2021
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#ifndef __DECLARATIONS_H__
#define __DECLARATIONS_H__

 
struct student {
    char name[20];
    int rno;
    char fees;
    float days;
    float attend;
} s[50];

/**
 * @brief Prototype for adding a student record.
 * 
 */
void add(struct student s[]);
/**
 * @brief Prototype for executing a student record.
 * 
 */
void execute();
/**
 * @brief Prototype for printing the eligible student.
 * 
 */
void eligibleStudents(struct student s[]);
/**
 * @brief Prototype for deleion of a student record.
 * 
 */
void delete (struct student s[]);

/**
 * @brief Prototype for printing a student record
 * 
 * @param s 
 * @return Prototype 
 */
void print_student(struct student s[]);

#endif

//Demonstrates file I/0

#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

int main(void)
{
    //allocate space for students
    int enrollment = get_int("How many practicum students will you enter now? ");
    student students[enrollment];
    
    //prompt for students' names and supervisors
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("student: ");
        students[i].supervisor = get_string("supervisor: ");
    }
    // save students to disk
    FILE *file = fopen("students.csv", "w");
    if (file)
    {
        for (int i = 0; i < enrollment; i++)
        {
            fprintf(file, "%s,%s\n", students[i].name, students[i].supervisor);
        }
        fclose(file);
    }
}

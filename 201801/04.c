/* playing with file outputs */
#include <stdio.h>
#include <string.h>
#include "cs50.h"
#
int main (void) // (int argc, char *argv[])
{
 // represent a students
 typedef struct
 {
	char *name;
	char *supervisor;
 }
 student;

 // allocate space for students
 int enrollment = get_int("enrollment: ");
 student students[enrollment];
 
 // prompt for students' names and supervisors
 for (int i = 0; i < enrollment; i++)
 {
   students[i].name = get_string("name: ");
   students[i].supervisor = get_string("supervisor: ");
 }
 
 //save students to disk
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

/* C program for play wityh structs */
#include <string.h>
#define LEN 80

void
greeting(void);
 
void
print_Intern(struct Intern);

int main()
{
  greeting();  

  struct Intern {
  char name [LEN + 1];
  double hours;
  } intern1 = { .name = "Tim", .hours = 16.22 },
    intern2 = { .name = "Victoria", .hours = 13.25 };

  print_Intern(intern1);
  print_Intern(intern2);
  

  return 0;
}


void
print_Intern(struct Intern)
{
  printf("Intern Name: %s\n", name);
  printf("Cumulative Hours: %lf\n", hours);
}

void
greeting(void)
{
  printf("Hello dude!\n");
}

#include <stdio.h>
#include <stdlib.h>

struct employee
{   int id;
    char name[50];
    float salary;
    float experience;
}e1,e2,e3,e4,e5;
int main( )
{
   e1.id=001;
   strcpy(e1.name, "Varun Bharadwaj");
   e1.salary=+75000;
   e1.experience= 4.2;

   e2.id=002;
   strcpy(e2.name, "Stefan Salvatore");
   e2.salary=126000;
   e2.experience= 6.5;

    e3.id=003;
   strcpy(e3.name, "Tarang Saini");
   e3.salary=+51000;
   e3.experience= 2.6;

    e4.id=004;
   strcpy(e4.name, "Hemanth Kumar");
   e4.salary=+84000;
   e4.experience= 5.0;

    e5.id=005;
   strcpy(e5.name, "Rishi Das");
   e5.salary=+67000;
   e5.experience= 3.7;


   printf( "employee 1 id : %d\n", e1.id);
   printf( "employee 1 name : %s\n", e1.name);
   printf( "employee 1 salary : %0.2f\n", e1.salary);
   printf( "employee 1 experience : %0.1f years\n\n", e1.experience);


   printf( "employee 2 id : %d\n", e2.id);
   printf( "employee 2 name : %s\n", e2.name);
   printf( "employee 2 salary : %0.2f\n", e2.salary);
   printf( "employee 2 experience : %0.1f years\n\n", e2.experience);

   printf( "employee 3 id : %d\n", e3.id);
   printf( "employee 3 name : %s\n", e3.name);
   printf( "employee 3 salary : %0.2f\n", e3.salary);
   printf( "employee 3 experience : %0.1f years\n\n", e3.experience);

   printf( "employee 4 id : %d\n", e4.id);
   printf( "employee 4 name : %s\n", e4.name);
   printf( "employee 4 salary : %0.2f\n", e4.salary);
   printf( "employee 4 experience : %0.1f years\n\n", e4.experience);

   printf( "employee 5 id : %d\n", e5.id);
   printf( "employee 5 name : %s\n", e5.name);
   printf( "employee 5 salary : %0.2f\n", e5.salary);
   printf( "employee 5 experience : %0.1f years\n\n", e5.experience);
   return 0;
}

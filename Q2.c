//4.Write a function to find the highest salary employee from a given array of 10 employees
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
 int id;
 char name[30];
 int salary;
};
int main()
{
 struct employee e[100];
 int high;
int n;
printf("how many empolyee data you want to enter \n");
scanf("%d",&n);
    int i;
        printf("Enter the details\n");
        printf("_______________");
        printf("\n employee id,emplpoyee name,employee salary:");
        for(i=0;i<n;i++)
        {
            printf("\n employee id :");
            scanf("%d",&e[i].id);
            printf("\n employee name :");
            scanf("%s",&e[i].name);
            printf("\n employee salary :");
            scanf("%d",&e[i].salary);
        }
       high=e[0].salary;
       for(i=0;i<n;i++)
       {
           if(e[i].salary>high)
            high=e[i].salary;

       }
     printf("Highest Salary Employee\n");
     for(i=0;i<n;i++)
     {
         if(e[i].salary==high)
            printf("id=%d\t name=%s\t salary=%f\n",e[i].id,e[i].name,e[i].salary);
            break;
     }
    return 0;
}

//1.Define a structure Employee with member variables id, name, salary
//2.Write a function to take input employee data from the user.
//3.Write a function to display employee data.
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
 int emp_id;
 char emp_name[30];
 float emp_salary;
};
int main()
{
    struct employee e1;
        printf("Enter the details\n");
        printf("\n employee id :");
        scanf("%d",&e1.emp_id);
        printf("\n employee name :");
        scanf("%s",&e1.emp_name);
        printf("\n employee salary :");
       scanf("%f",&e1.emp_salary);
       printf("\n all details of employee\n");
       printf("id=%d\nname=%s\nsalary=%f",e1.emp_id,e1.emp_name,e1.emp_salary);
}

//Write a function to sort employees according to their salaries [ refer structure from question
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
 struct employee e[100],temp;
int n;
printf("how many empolyee data you want to enter \n");
scanf("%d",&n);
    int i,j;
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

for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(e[i].salary>e[j].salary)
   {
    temp = e[i];
    e[i] = e[j];
    e[j] = temp;
   }
  }
 }
 printf("\n Salary in asending order\n");
 for(i=0;i< n;i++)
 {
  printf("Name = %s\tId = %d\tSalary = %d\n",e[i].name, e[i].id, e[i].salary);
 }
}

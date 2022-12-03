//Write a program to store information of n students and display them using structure
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float mathmarks;
    float physicsmarks;
    float chemistrymarks;
    float total;
    float percent;
} s[5];

int main() {
    struct student m1;
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks Mathematics,Physics,Chemistry: ");
        scanf("%f%f%f", &s[i].mathmarks,&s[i].physicsmarks,&s[i].chemistrymarks);
    }
    for(i=0;i<5;i++)
    {
       s[i].total=s[i].mathmarks+s[i].physicsmarks+s[i].chemistrymarks;
       s[i].percent=s[i].total/3;
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Percentage: %.1f", s[i].percent);
        printf("\n");
    }
    return 0;
}

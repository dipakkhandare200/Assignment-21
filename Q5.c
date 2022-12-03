//Write a program to calculate the difference between two time periods.
 #include<stdio.h>
 #include<string.h>
 struct time
 {
     int hour;
     int min;
     int second;
 };
 int main()
 {
     int i;
     struct time d1,d2,d3;
     printf("Enter the Start time\n");
     printf("hour :minute:second\n");
     scanf("%d%d%d",&d1.hour,&d1.min,&d1.second);
     printf("Enter the End time\n");
     printf("hour :minute:second\n");
     scanf("%d%d%d",&d2.hour,&d2.min,&d2.second);
     if(d2.second>d1.second)
     {
         d2.second+=60;
         --d2.min;
     }
     if(d1.min>d2.min)
     {
         d2.min+=60;
         --d2.hour;
     }
     d3.second=d2.second-d1.second;
     d3.min=d2.min-d1.min;
     d3.hour=d2.hour-d1.hour;
     printf("%d:%d:%d",d3.hour,d3.min,d3.second);
}

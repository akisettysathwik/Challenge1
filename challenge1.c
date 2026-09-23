#include <stdio.h>
int main(){
int subject1,subject2,subject3,subject4,subject5,total;
float average,percentage;

printf("Enter marks for 5 subjects: ");
scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);

total = subject1 + subject2 + subject3 + subject4 + subject5;
average = total/5.0;
percentage = (total/500.0)*100;

printf("Total Marks = %d\n Average Marks = %.2f\n Percentage = %.2f%%\n", total, average, percentage);
return 0;
}
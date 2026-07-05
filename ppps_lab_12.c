#include<stdio.h>
struct Employee {
    int empID;
    char name[50];
    float salary;
    struct doj {
        int day;
        int month;
        int year;
    }d1;
}ob1;

void main() {
    struct Employee ob1;
    printf("Enter employee details of Ob1: \n");
    scanf("%d",&ob1.empID);
    scanf("%s",&ob1.name);
    scanf("%f",&ob1.salary);
    scanf("%d",&ob1.d1.day);
    scanf("%d",&ob1.d1.month);
    scanf("%d",&ob1.d1.year);

    printf("Employee ID: %d\n",ob1.empID);
    printf("Name: %s\n",ob1.name);
    printf("Salary: %f\n",ob1.salary);
    printf("Date of Birth: %d-%d-%d\n",ob1.d1.day,ob1.d1.month,ob1.d1.year);

}


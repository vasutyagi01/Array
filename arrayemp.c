#include<stdio.h>
#include<conio.h>
void main(){
	struct Employees{
		char name[10];
		int ID;
		int salary;
		char dep[50];
	}emp[10];
	int n,i;
	printf("Enter the no. of employee");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter detail of %d",i++);
		printf("Enter name");
		scanf("%s",emp[i].name);
		printf("enter ID");
		scanf("%d",&emp[i].ID);
		printf("Enter Salary");
		scanf("%d",&emp[i].salary);
		printf("Enter Department");
		scanf("%s",emp[i].dep);
	}
	printf("Employee details");
	
	for(i=0;i<n;i++){
		printf("Name: %s",emp[i].name);
		printf("ID:%d",emp[i].ID);
		printf("salary:%d",emp[i].salary);
		printf("Department: %s",emp[i].dep);
	}
	getch();
}

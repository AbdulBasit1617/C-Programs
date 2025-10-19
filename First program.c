#include <stdio.h>

int main(){
	

	char name[30] = "";
	int age = 0;
	int semester = 0;
	char course[30] = "";
	char gender = ' ';
	
	printf("----------Student profile----------\n");
	
	//name
	printf("Enter you Name: ");
	fgets(name, sizeof(name), stdin);
	// age
	printf("Enter your age: ");
	scanf("%d", &age);

	// semester
	printf("In which semester you are studying: ");
	scanf("%d", &semester);

	// course
	getchar();
	printf("Which course you are studying: ");
	fgets(course, sizeof(course),stdin);
	
	// gender
	printf("What's your gender: ");
	scanf("%c",&gender);
	
	printf("Welcome, %s",name);
	printf("Can you plz check the data you input\n");
	printf("Name: %s", name);
	printf("Age: %d\n", age);
	printf("Semester: %d\n",semester);
	printf("Course: %s", course);
	printf("Gender: %c\n", gender);

	printf("Is this information right? [y/n]");

	// Salary Calculator
	
	char name[30] = "";
	
	printf("Enter your name: ");
	fgets(name,sizeof(name),stdin);
	
	//float salary = 0;
	
	printf("Enter your salary: $");
	scanf("%f",&salary);
	
	float rent = (40.0/100)*salary;
	float medical = (10.0/100)*salary;
	salary = rent + medical + salary;
	
	printf("$%.1f",salary);
	
	
	
	
	return 0;
}


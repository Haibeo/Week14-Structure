#include<stdio.h>
typedef struct student{
	char *name;
	float grade;
	char classment;
}student;
student input(){
	fflush(stdin);
	student a;
	gets(a.name);
	scanf("%f",a.grade);
	if(a.grade<=10&&a.grade>=9){
		a.classment = 'A';
	}else if(a.grade<=9&&a.grade>=8){
		a.classment = 'B';
	}else if(a.grade<=8&&a.grade>=6.5){
		a.classment = 'C';
	}else{
		a.classment = 'D';
	}
	return a;
}
void swap(student *a,student *b){
	student tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;}
void sort(student class[],int count){
	int i,j;
	for(i=0;i<=count;i++){
		for(j=i;j<=count;j++){
			if(class[j].grade>class[i].grade){
				swap(&class[i],&class[j]);
			}
		}
	}
	
}
void Print(student class[],int count){
	int i;
	printf("Name\t\t\tGrade\t\tClassment");
	for(i=0;i<=count;i++){
		printf("%s\t\t\t",class[i].name);
		printf("%f\t\t",class[i].grade);
		printf("%c\n",class[i].classment);
	}
}
int main(){
	student class[100];
	printf("Enter students' information\n");
	int count = -1;
	char check = 'y';
	while(check == 'y'){
		fflush(stdin);
		class[++count]=input();
		fflush(stdin);
		printf("continue?\n");
		check = getchar();
	}
	sort(class,count);
	Print(class,count);
	
    

return 0 ;
}


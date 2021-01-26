#include<stdio.h>
typedef struct date{
	int day;
	int month;
	int year;
}date;
struct date input(){
	struct date tmp;
	printf("Enter year");
	scanf("%d",&tmp.year);
	printf("\nEnter month");
	scanf("%d",&tmp.month);
	while(tmp.month <=0||tmp.month>12){
		printf("Invalid.Please enter again");
		scanf("%d",&tmp.month);
	}
	printf("Enter day");
	scanf("%d",&tmp.day);
	return tmp;
}
int datecmp(date date1,date date2){
	if(date1.year>date2.year){
		return 1;
	}else if(date1.year < date2.year){
		return -1;
	}else{
		if(date1.month > date2.month){
			return 1;
		}else if(date1.month < date2.month){
			return -1;
		}else{
			if(date1.day>date2.day){
				return 1;
			}else if(date1.day<date2.day){
				return -1;
			}else{
				return 0;
			}
		}
	}
}
int main(){
   date date1 ,date2;
   date1 = input();
   date2 = input();
   int check = datecmp(date1,date2);
   switch(check){
   	case 0:
   		printf("two dates are identical");
   	    break;
   	case 1:
   		printf("the first date is after the second");
   		break;
   	case -1:
   		printf("the first date is before the second");
   		break;
   }
   

return 0 ;
}


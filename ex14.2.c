#include<stdio.h>
typedef struct weather{
	float Totalrain;
	float Hightemp;
	float Lowtemp;
}weather;
weather input(){
	weather tmp;
	scanf("%f",&tmp.Totalrain);
	scanf("%f",&tmp.Hightemp);
	scanf("%f",&tmp.Lowtemp);
	return tmp;
}
int main(){
	weather year[12];
	int i;
	float averrain =0;
	float totalrain = 0;
	float max =-1000;
	float min = 1000;
	for(i=0;i<3;i++){
		year[i]=input();
		fflush(stdin);}
	for(i=0;i<3;i++){
		totalrain += year[i].Totalrain;
		if(year[i].Hightemp>max){
			max = year[i].Hightemp;
		}
		if(year[i].Lowtemp<min){
			min = year[i].Lowtemp;
		}
	}
	printf("total rainfall of the year is %f",totalrain );
	printf("\nAverage rainfall of the year is %f",totalrain/12);
	printf("\nThe highest temperature is %f",max);
	printf("\nThe lowest temperature is %f",min);
	


return 0 ;
}


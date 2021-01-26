#include<stdio.h>
typedef struct fraction{
	int num;
	int denom;
}frac;
int UCLN(int a,int b){
	int tmp;
	while(1){
		tmp = b;
		b = a%b;
		a = tmp ;
		if(b==0){
			return a;
		}
	}
}
int BCNN(int a,int b){
	return (a*b)/UCLN(a,b);}
void Print(frac a){
	int i = UCLN(a.denom,a.num);
	a.denom /= i;
	a.num /= i;
	if(a.denom !=1){
	printf("%d/%d",a.num,a.denom);}
	else{
		printf("%d",a.num);
	}}
frac Inverse(frac a){
	frac tmp;
	tmp.denom = a.num;
	tmp.num = a.denom;
	return tmp;}
int Compare(frac a,frac b){
	a.num *= BCNN(a.denom,b.denom)/a.denom;
	b.num *= BCNN(a.denom,b.denom)/b.denom;
	if(a.num>b.num){
		return 1;}
	else if(a.num<b.num){
		return -1;}
	else{
		return 0;
	}}
frac Simplify(frac a){
	frac tmp;
	int i = UCLN(a.denom,a.num);
	tmp.denom = a.denom/i;
	tmp.num = a.num/i;
	return tmp;}
frac Add(frac a,frac b){
	frac tmp;
	tmp.denom = BCNN(a.denom,b.denom);
	int i = BCNN(a.denom,b.denom);
	tmp.num = (a.num * i/a.denom )+ (b.num * i/b.denom);
	Simplify(tmp);
	return tmp;}
frac Multiply(frac a,frac b){
	frac tmp;
	tmp.num = a.num * b.num;
	tmp.denom = a.denom * b.denom;
	Simplify(tmp);
	return tmp;}
	
int main(){
	frac a[3] ={{3,6} , {3,7} , {8,10}};
	int i;
	for(i=0;i<3;i++){
		Print(a[i]);
		printf("\n");}
	for(i=0;i<3;i++){
		a[i]=Inverse(a[i]);
		Print(a[i]);
		printf("\n");}
	Print(Add(a[1],a[2]));
	printf("\n");
	Print(Multiply(a[1],a[2]));
	
    

return 0 ;
}


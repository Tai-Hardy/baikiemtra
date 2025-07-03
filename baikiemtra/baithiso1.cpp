#include<stdio.h>
int main(){
	int a;
	int tong=0;
	 do{
	 	printf(	"nhap so nguyen duong n :");
	 	scanf("%d",&a);
	 	if(a<=0){
	 		printf("nhap so lon hon 0"); 
		}
	 }while(a <=0 );
	 	for(int i= 1 ;i <=a;i++){
	 		tong +=i;
	 	}
		printf("tong cac so tu 1 toi %d la:%d\n",a,tong);
		return 0;
}
		 


//HW8_PART1_171044086
//KULLANICIDAN ALINAN AÇI DEĞERİ VE TERM SAYISINI SAYESİNDE SİN(X) DEĞERİNİ BULDURAN PROGRAM
#include<stdio.h>

int factorial(int);        
int power(int,int);       //FONSİYON PROTOTİPLERİ
double sin(double);

int main(){
	
	double value;
	printf("Enter a angle values in degree : ");       //KULLANICIDAN AÇI DEĞERİ ALINIR.
	scanf("%lf",&value);
   printf("sin(%lf)= %lf\n",value,sin(value));
}
//TAYLOR SERİSİNİN PAYDA KISMI OLAN FAKTÖRİYELİ DÖNDÜREN FOKSİYON
int factorial(int n){       
	
	int temp=1;         //EĞER GELEN PARAMETRE 1 VEYA 0 İSE 1,FARKLI İSE GEREKLİ FAKTORİYEL   
	if(n==0||n==1)      //SONUCU DÖNDÜRÜR.
		return 1;
	else{	
		for(int i=n;1<n;n--){
			temp*=n;	
			}}	
	return temp;

}
//TAYLOR SERİSİNİN PAY KISMI OLAN ÜSTEL İFADEYİ DÖNDÜREN FOKSİYON
int power(int x,int n){
	
	double temp;	
	temp=(double)(x/100000.0);	
	double c=1.0;   
	for(int i=0;i<n;i++){
		c*=temp;
	}	
	return (int)(c*100000);
}
//sinx değerini döndüren fonksiyon
double sin(double x){

   int term,f;
   double a,b,c=0.0,d=1.0;
   double value=0.0;
   printf("Enter a number of term : ");  //KULLANICIDAN ALININ DEĞERE GÖRE GERÇEK SİNX DEĞERİNE 
	scanf("%d",&term);               //YAŞLATIRIR
	for(int i=1;i<(term*2);i=i+2){
		a=factorial(i);
		f=(int)(100000*3.14*x/180);	//ISTENILEN INT PARAMETRESİ İÇİN  			
		b=power(f,i); 			//100000 ILE CARPILIR VE TYPE CAST EDILIR.          	
		b=(double)(b/100000.0);		
		c=c+b/a*d;
		d*=-1.0;
	}
  return c;	
}

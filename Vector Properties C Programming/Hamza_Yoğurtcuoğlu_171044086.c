//HW8_PART1_171044086
//IKI ARRAY ICINE RANDOM ATILAN SAYILARI YAZDIRAN,LO'I YAZDIRAN,TOPLAMINI YAZDIRAN VE COSINE SIMILARITY BULAN PROGRAM
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>

int main(){
	
	srand(time(NULL));
	int array1[20],array2[20],sum_arrays[20],counter1=0,counter2=0;
	double sim,dot=0.0,square_sum1=0.0,square_sum2=0.0;
	

	for(int i=0;i<20;i++){
		
		array1[i]=rand()%10;	//ARRAY ICINE RASTGELE 0 ILE 10 ARASI SAYI ATAR.
		array2[i]=rand()%10;
		sum_arrays[i]=array1[i]+array2[i];	//IKI ARAYI TOPLAR VE BASKA BIR ARRAY ICINE ATAR.
		
		if(array1[i]!=0)		//ARRAY ICINDE 0 OLMADI SURECE COUNTER TUTAR(ARTTIRIR).
			counter1++;
		if(array2[i]!=0)
			counter2++;
		
		dot=dot+array1[i]*array2[i];				//IKI ARRAYIN ELEMANLARINI CARPARAK DOT PRODUCT ELDE ELDER.
		square_sum1=square_sum1+pow(array1[i],2);	   	//ARRAYLARIN ELEMANLARIN KARESINI ALIR VE TOPLAR
		square_sum2=square_sum2+pow(array2[i],2);

	}
	
	double root1=sqrt(square_sum1);		//ELDE EDILEN square_sum DEGISKENLERININ ROOTUNU ALIR.
	double root2=sqrt(square_sum2);
	
	printf("Vectors:\nv1 : ");		//EKRANA VEKTORU YAZDIRIR.
	for(int i=0;i<20;i++){
	   
		printf("%d",array1[i]);
		if(i<19)
		  printf(",");
	
	}	
	printf("\nv2 : ");
	for(int i=0;i<20;i++){
		
		printf("%d",array2[i]);
		if(i<19)
		   printf(",");
	
	}
	printf("\n\n");
	printf("v1 L0 norm : %d",counter1); //EKRANA L0 SAYISINI YAZDIRIR.
	printf("\n");	
	printf("v2 L0 norm : %d",counter2);
	printf("\n\n");
	printf("v1 + v2 = ");
	for(int i=0;i<20;i++){
		
		printf("%d",sum_arrays[i]);
		if(i<19)
		   printf(",");
	
	}
	sim=(dot)/(root1*root2);		//DOT PRODUCT VE D1 VE D2 UZUNLUKLARININ CARPIMI SONUCU 
	printf("\n\n");                 //COSINE SIMILARITY BULUR.
	printf("sim(v1,v2) : %lf\n",sim);
	
}

//BIL101_HW10 HAMZA_YOĞURTCUOĞLU_171044086
//AYŞE İLE MEHMET'İN ÇİKOLATA YEME SAYILARINI GÖSTEREN PROGRAM
#include<stdio.h>
#include <time.h>		//RASTGELE DEGER DONDURMESİ ICIN GEREKLI KUTUPHANELER	
#include <stdlib.h>		

void cikolataBoyut(int []);
void cikolataYe(int [],int [],int []);
void sayacyazdir(int []);					
void kimkazandi(int []);
void cikolataekranayazdir(int[],int[]);

int main(){	
	
	srand(time(NULL));
	
	int cikolata[6],cikolataSayaci[2]={0,0},kopyacikolata[6];;	//CIKOLATASAYACI ARRAYININ 1. ELEMANI MEHMETI 2.ELEMANI AYSEYI TEMSIL EDER.
	
	cikolataBoyut(cikolata);
	cikolataekranayazdir(cikolata,kopyacikolata);
	cikolataYe(cikolata,cikolataSayaci,kopyacikolata);
	sayacyazdir(cikolataSayaci);
	kimkazandi(cikolataSayaci);
	
	return 0;
}
//CIKOLATA BOYLARINI BELIRLEYEN FONKSIYON
void cikolataBoyut(int cikolata[]){ //CIKOLATALARIN BOYUTLARINI TEMSILEN  
									//ARRAYLARIN HERBIRINE RANDOM DEGERLER ATANIR.
	cikolata[0]=rand()%11+1;
	
	for (int i = 1; i < 6; ++i){
		cikolata[i]=rand()%11+1;
		for (int j = 0; j<i; ++j){			
			
			while(cikolata[j]==cikolata[i]){

				 cikolata[i]=rand()%11+1;
			}
		}
	}
}
//CIKOLATALARIN UZUNLUKLARINI EKRANA BASTIRAN FONKSIYON
void cikolataekranayazdir(int cikolata[],int kopyacikolata[]){

	for (int i = 0; i < 6; ++i)
	{
		printf("%d ",cikolata[i]);
		kopyacikolata[i]=cikolata[i];		//SONUC EKRANA YAZDIRILIRKEN CIKOLATALARIN BOYUNUN KOPYASI ALINIR.
	}	

}
//CIKOLATALARI YEDIKLERI FONKSIYON
void cikolataYe(int cikolata[],int cikolataSayaci[],int kopyacikolata[]){

	int i = 0,j=5;
	while(!(i==j)){
		
		if(cikolata[i]<=0){				//MEHMET CIKOLATAYI BITIRDIGINDE DIGER CIKOLATAYA GECER.		
				
			i++;						
		}
			
		if (cikolata[i]==kopyacikolata[i]){				// MEHMET CIKOLATAYA BASLADIGINDA YEDIGI CIKOLATAYI BIR ARTTIRIR.
															
			cikolataSayaci[0]++;	
		}

		if (cikolata[j]<=0){			//AYSE CIKOLATAYI BITIRDIGINDE DIGER CIKOLATAYA GECER
		
				j--;
		}
		if (!(i==j))					//EGER ORTADA BIR TANE CIKOLATA KALDIYSA AYSE O CIKOLATADAN YIYEMEZ.
		{
			
			if (cikolata[j]==kopyacikolata[j]){		//AYSE CIKOLATA BASLADIGINDA YEDIGI CIKOLATAYI BIR ARTTIRIR.
			
				cikolataSayaci[1]++;
			}	
		}
		cikolata[i]-=2;				//MEHMET CIKOLATAYI 2 KAT DAHA HIZLI YEMEKTEDIR AYSEYE GORE
		cikolata[j]-=1;
			
	}

}
//YEDIKLERI CIKOLATA SAYILARINI EKRANA YAZDIRIR
void sayacyazdir(int cikolataSayaci[]){

	printf("\nMehmet :%d\n",cikolataSayaci[0]);		//MEHMETIN YEDIGI CIKOLATA SAYISI
	printf("Ayşe :%d\n",cikolataSayaci[1]);			//AYSENIN YEDIGI CIKOLATA SAYISI

}

//KAZANANI EKRANA YAZDIRAN FONKSIYON
void kimkazandi(int cikolataSayaci[]){

	if (cikolataSayaci[0]>cikolataSayaci[1])
		printf("Mehmet kazandı\n");					//HANGI ARKADAS DAHA FAZLA YEDIYSE EKRANA YAZDIR SONUN AYNI ISE BERABEREDIR.
	else if(cikolataSayaci[1]>cikolataSayaci[0])
			printf("Ayşe kazandı\n");
	else printf("Berabere\n");

}







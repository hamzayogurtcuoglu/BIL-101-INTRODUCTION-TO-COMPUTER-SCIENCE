/*hw6_2_Hamza_Yoğurtcuoğlu_171044086*/
/*Menu seklinde elmas ve öğrenci bilgisi yazdıran program*/
#include<stdio.h>
int main()
{
int secenek,n,i,k=1;

printf("---MENU---\n");                       /*Menuyu */
printf("1.Yıldızlardan Elmas Ciz.\n");         /*Ekrana */
printf("2.Ogrenci Bilgisini Goster.\n");       /*Yazdıran*/
printf("0.Cikis\n");                           /*Printf fonksyonları*/
printf("Seceneginiz :");                       /*kullanıcıdan seçenek alır*/
scanf("%d",&secenek);

	if(secenek==2){
		printf("Ad : Hamza\n");                   /*Ekrana Ogrenci Bilgisini Yazdırır*/      
		printf("Soyad : Yoğurtcuoğlu\n");         
		printf("Ogrenci No : 171044086\n");
		return main();                            /*Menunun başına dönmesini sağlar*/ 
                 }   
   
   	
   	
   	else if(secenek==1){                               
   				printf("Elmas Yüksekliğini Giriniz :");  /*Kullanıcının İstediği Elmas Yüksekliğine Göre*/
   				scanf("%d",&n);                           /*Ekrana Elması Yazdıran Algoritma*/
   				int bosluk=n/2; 
   				for(i=0;i<n;i++){
   					for(int a=0;a<bosluk;a++)             /*Elmasın düzenini(boşluk sistemini)ayarlayan döngü*/
   							printf(" ");
   					for(int b=0;b<k;b++)                  /*Yıldızlardan elmas yazdıran döngü*/
   						printf("*");
    	                        
    	         if(i<n/2){
    	         	bosluk=bosluk-1;                        /*Elmasın yarısınas geldiğini sorgulayan koşul ifadeleri*/
    	         	k=k+2; }
    	         	
    	         else{ bosluk=bosluk+1;
    	               k=k-2;
    	              }
    	           printf("\n");}
       		  		
          return main();   			                   /*Menunun başına dönmesini sağlar*/
}       		else if(secenek==0){return 0;}
return 0;
}

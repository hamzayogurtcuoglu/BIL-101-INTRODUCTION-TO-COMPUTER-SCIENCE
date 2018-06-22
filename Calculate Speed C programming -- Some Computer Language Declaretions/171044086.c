/* Hamza_Yoğurtcuoğlu_171044086 */
/*Kullanıcıdan Güncel ve Hedef Hız Alıp Ekrana Yazdıran Program*/

#include<stdio.h>
int main()
{int hedef_hiz,guncel_hiz;
printf("Güncel hızı giriniz : "); 
scanf(" %d",&guncel_hiz);         /*Kullanıcıdan Güncel Hızı Alır*/
printf("\nHedef hızı giriniz : ");
scanf(" %d",&hedef_hiz);          /*Kullanıcıdan Hedef Hızı Alır*/

   if(hedef_hiz>=guncel_hiz)    /*Hedef hızı güncel hızdan büyük veya eşit olduğunu sorgular*/ 
   {         while(hedef_hiz>guncel_hiz)   /*Hedef hız güncel hızdan büyük ise döngüye girer*/
             {   guncel_hiz=guncel_hiz+1;  /*Döngü sırasında güncel hız 1 arttırılır*/
                 printf("Güncel Hızınız : %d\n",guncel_hiz);}
             
               if(hedef_hiz==guncel_hiz)/*hedef hız,güncel hıza eşit ise komutu               		                                çalıştırır*/
               printf("Güncel Hız Hedef Hıza Eşittir\n");   

   }
else printf("Hızınız Hedef Hızdan Büyüktür.\n");


}

#include <stdio.h>
#include <stdlib.h>


int main() {
     
    int sayilar[]={1,2,3,4,5};
     int i;
     int *ptr;
     ptr=sayilar;   //sayilar dizisinin ilk elemanini ptr degiskenine atadik..
     
     *ptr++=10;       //Bu ise 0.indexe 10 degerini ata daha sonra ise index degerini 1 arttir demektir..
     *ptr=20;         //ptr nin indexi artik  oldu cunku yukarida index arttirma islemini yaptik.ü
      
	  for(i=0;i<5;i++)
	  {
	  	printf("%d ",sayilar[i]);  //10 20 3 4 5
	  }
	  
     
    
	return 0;
}




/*Bu program banka hesabı oluşturmaktadır*/
#include<stdio.h>
 
void main()

{ int a,b,c,i,k;//Degişken tanımlama
printf("Lutfen sifrenizi giriniz:");
scanf("%d",&a);

if(a==123456)
{
	printf("Hos geldiniz filiz curukcu.\n");
printf("\n\n");
printf("Menu\n");
printf("=========\n");
printf("1- Hesabimdan para cekmek istiyorum\n");
printf("2-Hesabima para eklemek istiyorum\n");
printf("3-Hesabimdan diğer hesaplara para transfer etmek istiyorum\n");
printf("4-Hesabimdaki para miktari:\n");
printf("5-Cikis yap.");
printf("\n");
printf("Tercihinizi giriniz (1/2/3/4/5):");
scanf("%d",&i);
printf("\n"); //Burada menüden tercih yapmak için printf ile okutulmuştur.
b=500;

if (i==1)

{

	
	printf("Hesabinizdan cekmek istediginiz para miktarini giriniz:");
	scanf("%d",&c);
	
	k= b-c;
	printf("Hesabinda kalan tutar : %d\n",k);
}
else if(i==2)
{	
 
		printf("Hesabiniza eklemek istediginiz para miktariniz giriniz:");
		scanf("%d",&c);
		
		k= b+c;
	    printf("Hesabinizdaki miktar : % d\n" ,k);
}
else if(i==3)
 {   
	printf("Diger hesaba transver etmek istediginiz miktarı giriniz:\n");
	scanf("%d",&c);
	
	k= b-c;
	printf("Hesabinda kalan para miktari: %d\n ",k);
	
}
else if(i==4)
{ 
	
	printf("Hesabinizdaki para miktari:%d\n",b);

}
else if(i==5)
{
	printf("Cikis yaptiniz.Tesekkurler. ");

} // Burada else if ile menüden yapılan tercihin işleme gecilmesini sağlamıştır.


    
else
		{
			printf("Hatali sifre girdiniz.\n");
       
	
	}

}
}

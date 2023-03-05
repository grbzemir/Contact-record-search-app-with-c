#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>


// Kodun Calismasi icin: kodlari yazacagimiz proje açmaliyiz daha sonra bu proje'nin oldugu klasörde bilgisayar,elektrik,makina adında text dosyası kurup icini doldurursak eger burda konsola girdigimiz sonuclar önümüze cikar
// Emircan Gürbüz


int bilgisayar(char *adSoyad)
{

   FILE *ptr;
   
   system("color B");
   char satir[100];
   int n;
   int i;
   n=strlen(adSoyad);
   int sonuc;
   int adet;
   adet=0; 

   if((ptr=fopen("bilgisayar.txt","r"))==NULL)


   {
     
     printf("Dosya acilamadi");
     
     exit(1);

   }
    
    while((fgets(satir,100,ptr))!=NULL)
    {
        
        sonuc=1;

        for(i=0;i<n;i++)
        {
           
              if(satir[i+4]!=adSoyad[i])
              {
                  
                    sonuc=0;
                   
                }
              
            }
              if(sonuc!=0)
              adet++; 
        }
     
     fclose(ptr);
     return adet;

  
}

int elektrik(char *adSoyad)
{

   FILE *ptr;
   
   system("color B");
   char satir[100];
   int n;
   int i;
   n=strlen(adSoyad);
   int sonuc;
   int adet;
   adet=0; 

   if((ptr=fopen("elektrik.txt","r"))==NULL)

   {
     
     printf("Dosya acilamadi");
     
     exit(1);

   }
    
    while((fgets(satir,100,ptr))!=NULL)
    {
        
        sonuc=1;

        for(i=0;i<n;i++)
        {
           
              if(satir[i+4]!=adSoyad[i])
              {
                  
                    sonuc=0;
                   
                }
              
            }
              if(sonuc!=0)
              adet++; 
        }
     
     fclose(ptr);
     return adet;

}


int  makine(char *adSoyad)
{


FILE *ptr;
   
   system("color B");
   char satir[100];
   int n;
   int i;
   n=strlen(adSoyad);
   int sonuc;
   int adet;
   adet=0; 

   if((ptr=fopen("elektrik.txt","r"))==NULL)

   {
     
     printf("Dosya acilamadi");
     
     exit(1);

   }
    
    while((fgets(satir,100,ptr))!=NULL)
    {
        
        sonuc=1;

        for(i=0;i<n;i++)
        {
           
              if(satir[i+4]!=adSoyad[i])
              {
                  
                    sonuc=0;
                   
                }
              
            }
              if(sonuc!=0)
              adet++; 
        }
     
     fclose(ptr);
     return adet;

}


int main ()
{

  system("color B");
  char adSoyad[100];
  int b,e,m;
  printf("Ad soyad giriniz: ");
  scanf("%s",adSoyad);

        b=bilgisayar(adSoyad);
        e=elektrik(adSoyad);
        m=makine(adSoyad);
   
          
          if(b==0)
          printf("\n%s adli kisi bilgisayar bolumunde kayitli degildir\n",adSoyad);
          else
          printf("\n%s adli kisi bilgisayar bolumunde %d kisi ile ayni isimde kayitli\n",adSoyad,b);


          if(e==0)
          printf("\n%s adli kisi elektrik bolumunde kayitli degildir\n",adSoyad);
          else
          printf("\n%s adli kisi elektrik bolumunde %d kisi ile ayni isimde kayitli\n",adSoyad,e);


         if(m==0)
         printf("\n%s adli kisi makine bolumunde kayitli degildir\n",adSoyad);
         else
         printf("\n%s adli kisi makine bolumunde %d kisi ile ayni isimde kayitli\n",adSoyad,m);


    return 0;
}
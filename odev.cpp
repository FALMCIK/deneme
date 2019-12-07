#include<stdio.h>
#include<locale.h> 
#include<stdlib.h>



void soruekle();
void dosyayayaz();
void guncelle();
void sil();
void goruntule();
void goruntulemeekrani();
void menu();


int N = 0;
	
struct sorular{
	char soru[256];
	char a_sikki[256];
	char b_sikki[256];
	char c_sikki[256];
	char d_sikki[256];
	char dogru_cevap[256];
	int id;
}soruu[BUFSIZ];


main ()
{
	FILE *kayit;//Dosya tanimlama islemi
	kayit = fopen("veri.txt","r");//dosya acma islemi
	
	if (kayit == NULL)
		printf("Dosya Bulunamadi...\n"); 
		
	else
	{	int x=0;
		while (!feof(kayit))//dosyanin sonuna gelene kadar 
		{ 
			fscanf(kayit,"%s\t%s\t%s\t%s\t%s\t",&soruu[x].soru,&soruu[x].a_sikki,&soruu[x].b_sikki,&soruu[x].c_sikki,&soruu[x].d_sikki,&soruu[x].dogru_cevap);
			x++;	
		}
		x--;  //BUGFIX: N sayisi 1 fazla sayiliyordu bu hatayi gidermek için N'i 1 azaltim ...
		N=x;
		fclose(kayit);
}




	int id1;
setlocale(LC_ALL, "Turkish"); 
	do {
     printf("\n");
     id1 = fonk1();

     switch (id1) {
        case 1 : soruekle();  
			dosyayayaz();
        	break;
        case 2 : fonk3();
			break;  
        case 4: fonk4();
        	break;
        
        case 6: fonk10();
           break;
     }
  } while (id1!=6);


int fonk1 (void)
{
  int id1;
  printf("Oyuna Hoþgeldiniz\n");
  printf("[1]. Soru Ekleme\n");
  printf("[2]. Soru silme\n");
  printf("[3]. Sorulari göster ve güncelle\n");
  printf("[4]. Oyun Oyna\n");
  printf("[5]. En yüksek skorlari göster\n");
  printf("[6]. Exit\n");

  do {
     printf("\nSeçeneðinizi giriniz [1-6]: ");
     id1 = getche()-'0';
     printf("\n");
  } while (id1<1 || id1>6);

  return id1;
}

void soruekle()
{
	

	  
	  int id;
	  int ek;
	
	
	  	
    char soru[256];
	struct sorular soruu[100];
	
	
	
	printf("\nLütfen %d. sorunuzu giriniz: ", N);
	scanf(" %[^\n]s", &soruu[N].soru);
	
	printf("A Þýkkýný Giriniz:");
	scanf(" %[^\n]s", &soruu[N].a_sikki);
	
	printf("B Þýkkýný Giriniz:");
	scanf(" %[^\n]s", &soruu[N].b_sikki);
	
	printf("C Þýkkýný Giriniz:");
	scanf(" %[^\n]s", &soruu[N].c_sikki);
	
	printf("D Þýkkýný Giriniz:");
	scanf(" %[^\n]s", &soruu[N].d_sikki);
	
	printf("Doðru Þýkký Giriniz:\n");
	scanf(" %[^\n]s", &soruu[N].dogru_cevap);
	
	printf("Soru eklendi\n");

	FILE *fp1;

  if ((fp1=fopen ("veri.txt", "a")) == NULL) {
      printf("Dosya açýlamadý!\n");
      exit(1);
  }

  
  fprintf(fp1, "\n%d.Soru: %s", i, soruu[i].soru);
  fprintf(fp1, "\nA þýkký: %s\t B þýkký: %s\t C þýkký: %s\t D þýkký: %s\t ",  soruu[i].a_sikki, soruu[i].b_sikki, soruu[i].c_sikki, soruu[i].d_sikki);
  fprintf(fp1, "Doðru cevap: %s",  soruu[i].dogru_cevap);
  

  fclose (fp1);
  printf("Bir soru daha eklemek ister misiniz ? Evet(E)/ HAYIR(H):");
  ;
  if  (toupper (getch ()) == 'H')  break;  system("cls"); 
  	
  
  

}


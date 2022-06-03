#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int secim, loop;

	while (loop != -1) {
		

		printf("OZCANLAR HOLDING yemek siparis servisine hosgeldiniz\n");
		printf("Lutfen hangi ogun icin yemek siparisi vermek istediginizi seciniz:");
		printf("\n1-Kahvalti\n2-Ogle Yemegi\n3-Aksam Yemegi\nSeciminiz:");
		scanf("%d", &secim);




		switch (secim) {

		case 1: {

			char x, z, exad;
			int ksip, exadi, stot, total, extot, kast, kart, kt, kkt, it, st;
			printf("Standart Kahvalti 17TL\nYumurta\nPogaca\nZeytin\nPeynir\nBal\nTereyagi\n");
			printf("Kac adet siparis vermek istersiniz?:");
			scanf("%d", &ksip);
			printf("\n1-Kasarli Tost 8 TL\n2-Karisik Tost 12TL\n");
			printf("\nEkstra urunlerimizden almak ister misiniz?(Cevabiniz evet ise Y tuslayiniz):");
			scanf("%s", &x);

			if (x == 'Y' || x == 'y') {

				printf("\nKasarli tost almak ister misinz? Almak istiyorsaniz kac adet almak istediginizi tuslayiniz (istemiyorsaniz 0 tuslayiniz):");
				scanf("%d", &kast);
				printf("\nKarisik tost almak ister misinz? Almak istiyorsaniz kac adet almak istediginizi tuslayiniz (istemiyorsaniz 0 tuslayiniz):");
				scanf("%d", &kart);

				kt = kast * 8;

				kkt = kart * 12;



			}

			else if (x != 'Y' || x != 'y') {
				printf("Eksta urun secmediniz :( \n");

			}

			stot = ksip * 17;


			total = stot + kt + kkt;

			if (ksip > 49)
			{
				printf("50 ve uzeri siparis verdiginiz icin toplam tutardan yuzde 10 indirim hakki kazandiniz!\n");

				it = (total / 100) * 10;
				st = total - it;
				printf("Borcunuz %d TL'dir Yine bekleriz......", st);

			}



			else {
				printf("Borcunuz %d TL'dir Yine bekleriz......", total);

			}

			printf("\nDiger ogunler icinde siparis vermek ister misiniz? (Istiyorsaniz herhangi sayi istemiyorsaniz -1 tuslayiniz)):");
			scanf("%d", &loop);

			break;
		}

		case 2: {
			char x, z, exad;
			int ksip, exadi, stot, total, extot, kast, kart, kt, kkt, it, st;
			printf("Ogle Yemegi 20TL\nCorba\nPilav/Makarna\nSulu Yemek\nSalata\nIcecek\n");
			printf("Kac adet siparis vermek istersiniz?:");
			scanf("%d", &ksip);
			printf("\n1-Kofte 15 TL\n2-Tatli 12TL\n");
			printf("\nEkstra urunlerimizden almak ister misiniz?(Cevabiniz evet ise Y tuslayiniz):");
			scanf("%s", &x);

			if (x == 'Y' || x == 'y') {

				printf("\nKofte almak ister misinz? Almak istiyorsaniz kac adet almak istediginizi tuslayiniz (istemiyorsaniz 0 tuslayiniz):");
				scanf("%d", &kast);
				printf("\nTatli almak ister misinz? Almak istiyorsaniz kac adet almak istediginizi tuslayiniz (istemiyorsaniz 0 tuslayiniz):");
				scanf("%d", &kart);

				kt = kast * 15;

				kkt = kart * 12;



			}

			else if (x != 'Y' || x != 'y') {
				printf("Eksta urun secmediniz :( \n");

			}

			stot = ksip * 20;


			total = stot + kt + kkt;

			if (ksip > 39)
			{
				printf("40 ve uzeri siparis verdiginiz icin toplam tutardan yuzde 12 indirim hakki kazandiniz!\n");

				it = (total / 100) * 12;
				st = total - it;
				printf("Borcunuz %d TL'dir Yine bekleriz......", st);

			}



			else {
				printf("Borcunuz %d TL'dir Yine bekleriz......", total);
			}
			printf("\nDiger ogunler icinde siparis vermek ister misiniz? (Istiyorsaniz herhangi sayi istemiyorsaniz -1 tuslayiniz)):");
			scanf("%d", &loop);

			break;




		}



		case 3: {
			char x, z, exad;
			int ksip, exadi, stot, total, extot, kast, kart, kt, kkt, it, st;
			printf("Aksam Yemegi 23TL\nCorba\nPilav/Makarna\nEt/Tavuk Yemegi\nSalata\nIcecek\n");
			printf("Kac adet siparis vermek istersiniz?:");
			scanf("%d", &ksip);
			printf("\n1-Iskender 24 TL\n2-Tatli 15TL\n");
			printf("\nEkstra urunlerimizden almak ister misiniz?(Cevabiniz evet ise Y tuslayiniz):");
			scanf("%s", &x);

			if (x == 'Y' || x == 'y') {

				printf("\nIskender almak ister misinz? Almak istiyorsaniz kac adet almak istediginizi tuslayiniz (istemiyorsaniz 0 tuslayiniz):");
				scanf("%d", &kast);
				printf("\nTatli almak ister misinz? Almak istiyorsaniz kac adet almak istediginizi tuslayiniz (istemiyorsaniz 0 tuslayiniz):");
				scanf("%d", &kart);

				kt = kast * 24;

				kkt = kart * 15;



			}

			else if (x != 'Y' || x != 'y') {
				printf("Eksta urun secmediniz :( \n");

			}

			stot = ksip * 23;


			total = stot + kt + kkt;

			if (ksip > 34)
			{
				printf("35 ve uzeri siparis verdiginiz icin toplam tutardan yuzde 15 indirim hakki kazandiniz!\n");

				it = (total / 100) * 15;
				st = total - it;
				printf("Borcunuz %d TL'dir Yine bekleriz......", st);

			}



			else {
				printf("Borcunuz %d TL'dir Yine bekleriz......", total);
			}
			printf("\nDiger ogunler icinde siparis vermek ister misiniz? (Istiyorsaniz herhangi sayi istemiyorsaniz -1 tuslayiniz)):");
			scanf("%d", &loop);


			break;




		}

			  printf("Diger ogunler icinde siparis vermek ister misiniz? (Istiyorsaniz herhangi sayi istemiyorsaniz -1 tuslayiniz)):");
			  scanf("%d", &loop);



		default:
			printf("Hatali Islem\n");
			break;







		}


	}


}













#include <stdio.h>											// TALHA ZEREN / BÝLGÝSAYAR MÜHENDÝSLÝÐÝ / 1.ÞUBE / 211 816 160 03/ //

int main(){
int urun;
int sec;
float toplam = 0.0;
int loop;
								printf("\t\t\t********************---ZRN ELEKTRONIK---******************\n\n\n");	
						
						
								printf("\t\t\t-------------------------HOSGELDINIZ-----------------------\n\n\n");			
	
						while(true){
								printf("1:Urun ve fiyat sorgula\n\n2:Sepete urun ekle\n\n3:Siparis tamamla\n\n4:Sonlandir...\n");
								scanf("%d",&urun);
	if(urun == 1){
				while(true){
										printf("************************************************\n\n");
										printf("Hangi kategoriden urun sorgulamak istiyorsunuz?\n\n");	
								printf("1:Akilli Telefon\n2:Akilli Saat\n3:Yazici\n4:Bilgisayar\n\n");
											printf("Seciniz :");
											scanf("%d",&sec);
								if(sec == 1){
											printf("Akilli Telefon 1 = 1500 TL\nAkilli Telefon 2 = 2750 TL\nAkilli Telefon 3 = 8832 TL \n\n");
										}
								else if(sec == 2){
											printf("1:Akilli Saat 1 = 543.99 TL\n2:Akilli 2 Saat = 1324.50 TL\n3:Akilli Saat 3 =850.00 TL\n\n");
										}
								else if(sec == 3){
												printf("1:Yazici A = 553.50 TL\n2:Yazici B = 848.20 TL\n3:Yazici C = 1433.33 TL\n\n");
											}
								else if(sec == 4){
												printf("1:Bilgisayar X = 14600 TL\n2:Bilgisayar Y = 12964 TL\n3:Bilgisayar Z = 22920 TL\n4:Bilgisayar Q = 36123 TL\n\n");	
											}
								else{
												printf("Lutfen tanimli bir deger giriniz.\n\n\n");
												}
												printf("1:Baska bir kategori urunlerini sorgula\n2:Ana menuye don\n\n");
												scanf("%d",&urun);
												if(urun == 1){
													continue;
												}
												else {
													break;
											}
											}	
										if(urun == 2){
											continue;
											}
											}
				
	else if(urun == 2){
				while(urun){
					printf("***********************************************\n\n");
					printf("Hangi kategoriden urun eklemek istiyorsunuz?\n\n");
					printf("1:Akilli Telefon \n\n2:Akilli Saat \n\n3:Yazici\n\n4:Bilgisayar \n\n");
					scanf("%d",&sec);
					if(sec == 1){
								printf("Akilli telefonlardan ekleyeceginiz urunu seciniz :\n\n");
								printf("1 Akilli Telefon 1 = 1500 TL\n2 Akilli Telefon 2 = 2750 TL\n3 Akilli Telefon 3 = 8832 TL\n");
					scanf("%d",&sec);
					switch(sec){
					case 1:{
						toplam = toplam + 1500;
						break;
							}
					case 2:{
						toplam = toplam + 2750;
						break;
							}
					case 3:{
						toplam = toplam + 8832;
						break;
							}
					default:printf("Tanimli olmayan bir sayi girdiniz.\n\n\n");
							}
							
							}
					else if(sec == 2){
						printf("Akilli Saatten ekleyecegiiz urunu seciniz : \n");
						printf("1 Akilli Saat 1 = 543.99 TL\n2 Akilli Saat 2 = 1324.50 TL\n3 Akilli Saat 3 = 850.00 TL\n");
						scanf("%d",&sec);
						switch(sec){
							case 1:{
								toplam = toplam + 543.99;
								break;
							}
							case 2:{
								toplam = toplam + 1324.50;
								break;
							}
							case 3:{
								toplam = toplam + 850.00;
								break;
							}
							default:printf("Tanimli olmayan bir sayi girdiniz.\n\n\n");
							}
							}
					else if(sec == 3){
						printf("Hangi Yaziciyi eklemek istiyorsunuz ?\n");
						printf("1-Yazici A = 553.50 TL\n2-Yazici B = 848.20 TL\n3-Yazici C = 1433.33 TL\n");
						scanf("%d",&sec);
						switch(sec){
							case 1:{
								toplam = toplam + 553.50;
								break;
							}
							case 2:{
								toplam = toplam + 848.20;
								break;
							}
							case 3:{
								toplam = toplam + 1433.33;
								break;
							}
							default:printf("Tanimli olmayan bir sayi girdiniz.\n\n\n");
							}
							}
					else if(sec == 4){
						printf("Hangi Bilgisayari eklemek istiyorsunuz ?\n\n");
						printf("1-Bilgisayar X = 14600 TL\n2-Bilgisayar Y = 12964 TL\n3-Bilgisayar Z = 22920 TL\n4-Bilgisayar Q = 36123 TL\n");
						scanf("%d",&sec);
						switch(sec){
							case 1:{
								toplam = toplam + 14600;
								break;
							}
							case 2:{
								toplam = toplam + 12964;
								break;
							}
							case 3:{
								toplam = toplam + 22920;
								break;
							}
							case 4:{
								toplam = toplam + 36123;
								break;
							}
							default:printf("Tanimli olmayan bir sayi girdiniz.\n\n\n");
							}
							}
							else {
							printf("Lutfen tanimli bir deger giriniz.");
							}
							printf("Toplam Sepet Tutariniz = %2.f TL \n\n",toplam);
							printf("1:Sepete urun eklemye devam et.\n2:Ana menuye don.\n\n");
							scanf("%d",&urun);
							if(urun == 1){
							continue;
							}
							else {
							break;
							}
							}
							}
							if(urun == 2){
								continue;
							}
	else if(urun == 3){
								printf("*****************************************\n\n");
								printf("Toplam Sepet Tutariniz = %f \n\n",toplam);
								printf("******************************************\n\n");
								break;
							}
	else if(urun == 4){
								printf("\n\nIyi Gunler Dileriz... :)\n\n");
								printf("Program Sonlandiriliyor... \n\n");
								break;
							}	
							else{
								printf("Lutfen tanimli bir deger giriniz \n\n\n\n");
								
							}					
							}
							
								return 0;
							}

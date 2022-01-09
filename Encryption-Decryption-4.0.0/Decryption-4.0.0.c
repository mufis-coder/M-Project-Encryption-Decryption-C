#include <stdio.h>
#include <string.h>

int main () {
	char hasil2[1000], kata[1000], kunci[1000];
	int panHas, temp, iKunci, panKunci, i, panKata, var, t, k;

	
	printf("Masukan kata:\n");
	gets(kata);
	printf("Masukan kunci:\n");
	gets(kunci);
	panKunci = strlen (kunci);
	k=panKunci;
	for (i=0;i<=panKunci;i++) {
		iKunci = iKunci + kunci [i];
	}
	panKata = strlen(kata);
	t = panKata;
	for (i=0;i<=panKata;i++) {
		if (kata[i] == ' '|| kata [i]== '\0' || (kata[i]<97 && kata[i]<65) || (kata[i]<97 && kata[i]>91) || kata[i]>123) {
			hasil2 [i] = kata [i];
		}
		else if (kata[i]>=65 && kata[i]<=90) {
			kata[i] = kata[i] - 65;
			temp = ((((iKunci%(i+1)) + (t+1))*k)%26);
			var = 0 + kata[i] - temp;
			while (1) {
				if(var<=90 && var>=65) {
					break;
				}
				else {
					var += 26;
				}
			}
			hasil2 [i] = var;			
		}
		else {
			kata[i] = kata[i] - 97;
			temp = ((((iKunci%(i+1)) + (t+1))*k)%26);
			var = 0 + kata[i] - temp;
			while (1) {
				if(var<=122 && var>=97) {
					break;
				}
				else {
					var += 26;
				}
			}
			hasil2 [i] = var;

		}
		t--;
	}
	
	printf("Hasil decode:\n");
	printf("%s", hasil2);
	
	return 0;
}

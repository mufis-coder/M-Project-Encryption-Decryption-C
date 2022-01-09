#include <stdio.h>
#include <string.h>

int main () {
	char hasil2[100], kata[100], kunci[100];
	int panHas=0, temp=0, iKunci=0, panKunci=0, i=0, panKata=0, var=0, t=0, k=0;
	
	
	printf("Masukan kata:\n");
	fgets(kata, 100, stdin);
	printf("Masukan kunci:\n");
	fgets(kunci, 100, stdin);
	panKunci = strlen (kunci);
	k=panKunci;
	for (i=0;i<=panKunci;i++) {
		iKunci = iKunci + kunci [i];
	}
	panKata = strlen(kata);
	t = panKata;
	for (i=0;i<=panKata;i++) {
		if (kata[i] == ' '|| kata [i]== '\0' || kata[i]<97 || kata[i]>123) {
			hasil2 [i] = kata [i];
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

#include <stdio.h>
#include <string.h>

int main () {
	char hasil2[100], kata[100], kunci[100];
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
		if (kata[i] == ' '|| kata [i]== '\0' || kata[i]<97 || kata[i]>123) {
			hasil2 [i] = kata [i];
		}
		else {
			temp = ((((iKunci%(i+1)) + (t+1))*k)%26);
			var = kata[i] - temp;
			if (var > 122) {
				hasil2[i] = var - 26;
			}
			else if(var < 97) {
				hasil2[i] = var + 26;
			}
			else {
				hasil2 [i] = var;
			}

		}
		t--;
	}
	
	printf("Hasil decode:\n");
	printf("%s", hasil2);
	
	return 0;
}

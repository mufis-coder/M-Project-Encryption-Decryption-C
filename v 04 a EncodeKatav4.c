#include <stdio.h>
#include <string.h>

int main () {
	char kata[1000], kunci[1000], hasil[1000];
	int iKunci=0, panKunci, panKata, i, t, temp, var, k;
	printf("Masukan kunci:\n");
	gets(kunci);
	panKunci = strlen (kunci);
	k=panKunci;
	for (i=0;i<=panKunci;i++) {
		iKunci = iKunci + kunci [i];
	}
	printf("Masukan kata:\n");
	gets(kata);
	panKata = strlen (kata);
	t = panKata;
	for (i=0;i<=panKata;i++) {
		if (kata[i] == ' '|| kata [i]== '\0' || (kata[i]<97 && kata[i]<65) || (kata[i]<97 && kata[i]>91) || kata[i]>123) {
			hasil [i] = kata [i];
		}
		else if (kata[i]>=65 && kata[i]<=90) {
			temp = ((((iKunci%(i+1)) + (t+1))*k));
			var = (temp + kata[i])%26 + 65;
			hasil [i] = var;
			
		}
		else {
			temp = ((((iKunci%(i+1)) + (t+1))*k));
			var = (temp + kata[i])%26 + 97;
			hasil [i] = var;
		}
		t--;
	}
	printf("Hasil kode:\n");
	printf("%s", hasil);
	return (0);
}

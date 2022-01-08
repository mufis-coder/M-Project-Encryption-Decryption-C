#include <stdio.h>
#include <string.h>

int main () {
	char kata[100], kunci[100], hasil[100];
	int iKunci=0, panKunci=0, panKata=0, i=0, t=0, temp=0, var=0, k=0;
	printf("Masukan kunci:\n");
	fgets(kunci, 100, stdin);
	panKunci = strlen (kunci);
	k=panKunci;
	for (i=0;i<=panKunci;i++) {
		iKunci = iKunci + kunci [i];
	}
	printf("Masukan kata:\n");
	fgets(kata, 100, stdin);
	panKata = strlen (kata);
	t = panKata;
	for (i=0;i<=panKata;i++) {
		if (kata [i] == ' '|| kata [i]== '\0' || kata[i]<97 || kata[i]>123) {
			hasil [i] = kata [i];
		}
		else {
			temp = ((((iKunci%(i+1)) + (t+1))*k)%26);
			var = temp + kata[i];
			if (var > 122) {
				hasil[i] = var - 26;
			}
			else if(var < 97) {
				hasil[i] = var + 26;
			}
			else {
				hasil [i] = var;
			}
		}
		t--;
	}
	printf("Hasil enkripsi:\n");
	printf("%s", hasil);
	return (0);
}

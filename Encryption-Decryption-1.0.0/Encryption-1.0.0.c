#include <stdio.h>
#include <string.h>

int main () {
	char kata[100], kunci[100], hasil[100];
	int iKunci=0, panKunci, panKata, i, tanda[100];
	printf("Masukan kunci:\n");
	gets(kunci);
	panKunci = strlen (kunci);
	for (i=0;i<=panKunci;i++) {
		iKunci = iKunci + kunci [i];
	}
	printf("Masukan kata:\n");
	gets(kata);
	FILE *out;
	out = fopen("tanda.txt", "w");
	panKata = strlen (kata);
	for (i=0;i<=panKata;i++) {
		if (kata [i] == ' '|| kata [i]== '\0' || kata[i]<97 || kata[i]>123) {
			hasil [i] = kata [i];
			tanda[i] = 0;
		}
		else if (i==0) {
			tanda [i] = ((iKunci) + (kata[i]))/26;
			hasil [i] = ((iKunci) + (kata[i]))%26 + 97;
		}
		else {
			tanda [i] = ((iKunci*i) + (kata[i]*i))/26;
			hasil [i] = ((iKunci*i) + (kata[i]*i))%26 + 97;
		}
		fprintf(out, "%d ", tanda[i]);
	}
	fclose(out);
	printf("Hasil kode:\n");
	printf("%s\n", hasil);
	return (0);
}

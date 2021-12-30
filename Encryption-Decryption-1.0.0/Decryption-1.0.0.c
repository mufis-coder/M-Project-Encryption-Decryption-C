#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main () {
	char hasil2[100], kata[100], kunci[100];
	int panHas=0, temp=0, iKunci=0, panKunci=0, i=0, panKata=0, tanda[100];

	FILE *in;
	in = fopen("tanda.txt", "r");
	i=0;
	while (fscanf(in, "%d ", &tanda[i]) != EOF) {
		i++;
	}
	int count = i;
	tanda[i] = 0;
	fclose(in);

	
	printf("Masukan kata:\n");
	fgets(kata, 100, stdin);

	printf("Masukan kunci:\n");
	fgets(kunci, 100, stdin);
	kunci[strlen(kunci) - 1] = '\0';

	panKunci = strlen (kunci);

	for (i=0;i<=panKunci;i++) {
		iKunci = iKunci + kunci [i];
	}

	panKata = strlen(kata);

	for (i=0;i<=panKata;i++) {
		if (kata[i] == ' '|| kata [i]== '\0' || kata[i]<97 || kata[i]>123) {
			hasil2 [i] = kata [i];
		}
		else if (i==0) {
			hasil2[i] = ((kata[i] - 97) + tanda[i]*26) - iKunci;
			if (hasil2[i]<0) {
				hasil2[i] = hasil2[i] + 3*100;
			}
			if (hasil2[i] > 123 || hasil2[i] < 97) {
				hasil2[i] = (hasil2[i]%26) + 97;
				
			}
		}
		else {
			hasil2 [i] = (((kata[i]-97) + tanda[i]*26))/i - iKunci;
			if (hasil2[i]<0) {
				hasil2[i] = hasil2[i] + 3*100;
			}
			if (hasil2[i] > 123 || hasil2[i] < 97) {
				hasil2[i] = (hasil2[i]%26) + 97;
				
			}
		}
	}
	
	printf("Hasil decode:\n");
	printf("%s", hasil2);
	
	return 0;
}

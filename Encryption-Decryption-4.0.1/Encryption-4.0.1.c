#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct dynamicarr_t {
    char *_arr;
    unsigned _size, _capacity;
} DynamicArray;


void dArray_init(DynamicArray *darray);
bool dArray_isEmpty(DynamicArray *darray);
void dArray_pushBack(DynamicArray *darray, char value);
char  dArray_getAt(DynamicArray *darray, unsigned index);


void dArray_init(DynamicArray *darray)
{
    darray->_capacity = 2u;
    darray->_size = 0u;
    darray->_arr = (char*) malloc(sizeof(char) * 2);
}

bool dArray_isEmpty(DynamicArray *darray) {
    return (darray->_size == 0);
}

void dArray_pushBack(DynamicArray *darray, char value)
{
    if (darray->_size + 1 > darray->_capacity) {
        unsigned it;
        darray->_capacity *= 2;
        char *newArr = (char*) malloc(sizeof(char) * darray->_capacity);

        for (it=0; it < darray->_size; ++it)
            newArr[it] = darray->_arr[it];
        
        char *oldArray = darray->_arr;
        darray->_arr = newArr;
        free(oldArray);
    }
    darray->_arr[darray->_size++] = value;
}


char dArray_getAt(DynamicArray *darray, unsigned index)
{
    if (!dArray_isEmpty(darray)) {
        if (index >= darray->_size)
            return darray->_arr[darray->_size-1];
        else
            return darray->_arr[index];
    }
}

#define d_init dArray_init
#define d_isEmpty dArray_isEmpty
#define d_pushBack dArray_pushBack
#define d_getAt dArray_getAt

void EncodeKata(DynamicArray *Kata, DynamicArray *Kunci, DynamicArray *Hasil, int a, int b, int key) {
	int temp, i, var;
	for (i=0;i<Kata->_size;i++) {
		if (dArray_getAt(Kata, i) == ' '|| dArray_getAt(Kata, i) == '\0' || (dArray_getAt(Kata, i)<97 && dArray_getAt(Kata, i)<65) 
					|| (dArray_getAt(Kata, i)<97 && dArray_getAt(Kata, i)>91) || dArray_getAt(Kata, i)>123) {
			dArray_pushBack(Hasil, dArray_getAt(Kata, i));
		}
		else if (dArray_getAt(Kata, i)>=65 && dArray_getAt(Kata, i)<=90) {
			temp = ((((key%(i+1)) + (b+1))*a));
			var = (temp + dArray_getAt(Kata, i))%26 + 65;
			dArray_pushBack(Hasil, var);
			
		}
		else {
			temp = ((((key%(i+1)) + (b+1))*a));
			var = (temp + dArray_getAt(Kata, i))%26 + 97;
			dArray_pushBack(Hasil, var);
		}
		b--;
	}
}


int main()
{
    DynamicArray kata, kunci, hasil;
    dArray_init(&kata);
	dArray_init(&kunci);
	dArray_init(&hasil);    
    char c;
    int iKunci=0, panKata=0, i=0, t=0, k=0;
	printf("Masukan kunci:\n");
	while ((c = getchar()) != '\n') {
		dArray_pushBack(&kunci, c);
	}
	k=kunci._size;
	iKunci=0;
	for (i=0; i < kunci._size; ++i) {
		iKunci = iKunci + dArray_getAt(&kunci, i);
	}
	printf("Masukan kata:\n");
	while ((c = getchar()) != '\n') {
		dArray_pushBack(&kata, c);
	}
	t = kata._size;
	EncodeKata(&kata, &kunci, &hasil, k, t, iKunci);
	printf("Hasil kode:\n");
	for (i=0; i < hasil._size; ++i) {
        printf("%c", dArray_getAt(&hasil, i));
    }
	printf("\n");
	return 0;
}

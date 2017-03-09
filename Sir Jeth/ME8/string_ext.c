#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

int check_string(char cArr[], size_t size);
void stringify(char cArr[], size_t size);

unsigned long num_occurences(char cArr[], char c, size_t size);

void replace_char(char cArr[], char original, char replacement,
size_t size);

int push_character(char cArr[], char cAppend, size_t size,
size_t len);

int pop_character(char cArr[], size_t len);

int strcpy_check(size_t destsize, size_t srclen);

int strcat_check(size_t destsize, size_t destlen, size_t
srclen);

void string_reverse(char cArr[], size_t len);

int swap_string(char str1[], char str2[], size_t str1_size,
size_t str2_size, size_t str1_len, size_t str2_len);

int debug(char cArr[], size_t size); //DEBUG


int check_string(char cArr[], size_t size){
		 if(cArr[size-1]=='\0'){
				 return strlen(cArr);   
		 }
		 else{
				 return -1;
		 }
}

void stringify(char cArr[], size_t size){
 cArr[size-1]='\0';
 
}


unsigned long num_occurences(char cArr[], char c, size_t size){
 int x2=0;
 int numberof=0;
 for(x2=0;x2<size;x2++){
	if(cArr[x2]==c){
	 numberof++;
	}
	
 }
 return numberof;
}

void replace_char(char cArr[], char original, char replacement,
size_t size){
	int x3=0;
	for(x3=0;x3<size;x3++){
		 if(cArr[x3]==original){
				cArr[x3]=replacement;
		 }
 }
}

int push_character(char cArr[], char cAppend, size_t size,
size_t len){
 /*Redacted*/
 /* Not sure kung tama code ko in this part */
}

int pop_character(char cArr[], size_t len){
 int nowon = len;
	if(len>0){
		cArr[len-1]='\0';
		return 0;
	}
	else {
		return -1;
	}
}

int strcpy_check(size_t destsize, size_t srclen){
 int returning = (destsize-srclen);
 if(returning==0){
 return 1;
 } else if(returning>0){
	return 0;
 }
 else{
	return (-returning)+1;
 }
}

int strcat_check(size_t destsize, size_t destlen, size_t srclen){
	//printf("\n%lu\n",destsize);//DEBUG CODE
	//printf("%lu\n",destlen);//DEBUG CODE
	//printf("%lu\n",srclen);//DEBUG CODE
	if(destsize>destlen+srclen){
		return 0;
	}
	else if(destsize==destlen+srclen){
		return -2;
	}
	else{
		return -(destsize-1-destlen-srclen);
	}
}

void string_reverse(char cArr[], size_t len){
	/* This works, Although personally it looks messy*/
	/* Make another version that looks better if possible*/
	char juan;
	char dos;
	//printf("%lu",len);
	int countme=0;
	for(;countme<=(len-1)/2;countme++){
		//printf("%c",cArr[countme]); //DEBUG GUBED CODE
		juan = cArr[countme];
		dos = cArr[(len-1)-countme];
		cArr[countme]=dos;
		cArr[(len-1)-countme]=juan;
	}
}

int swap_string(char str1[], char str2[], size_t str1_size,
size_t str2_size, size_t str1_len, size_t str2_len){
	/*Redacted*/
	/* Tama ata code ko pero hindi ako sure*/
	/* Message me nilang if you want any of the redacted parts*/
}



//This used to be line 31. Moved here for neatness purposes.
/*
int main(){
    char testArr1[] = {'A', 'B', 'C'};
    char testArr2[] = "ABC";

    if (check_string(testArr1, sizeof(testArr1)) < 0)
        printf("testArr1 is not a string\n");
    else
        printf("testArr1 is a string\n");

    if (check_string(testArr2, sizeof(testArr2)) < 0)
        printf("testArr2 is not a string\n");
    else
        printf("testArr2 is a string\n");

    stringify(testArr1, sizeof(testArr1));
    
    if (check_string(testArr1, sizeof(testArr1)) < 0)
        printf("testArr1 is still not a string\n");
    else
        printf("testArr1 is now a string with content %s\n", testArr1);

    char testArr3[] = "String";
    char testArr4[] = "String2";

    if (strcpy_check(sizeof(testArr3), strlen(testArr4)) == 1)
        printf("String \"%s\" fits, but it will no longer be a string after a proper strncpy() as the NULL terminator will not be present in the array\n", testArr4);
    else if (strcpy_check(sizeof(testArr3), strlen(testArr4)) > 0)
        printf("String \"%s\" will not fit to the destination. Excess of %d characters\n", testArr4, strcpy_check(sizeof(testArr3), strlen(testArr4)));
    else if (strcpy_check(sizeof(testArr3), strlen(testArr4)) == 0)
        printf("String \"%s\" perfectly fits into the destination\n", testArr4);

    strncpy(testArr3, testArr4, sizeof(testArr3));
    if (check_string(testArr3, sizeof(testArr3)) < 0)
        printf("This is proof that testArr3 is no longer a string after strncpy() with testArr4\n");
    else
        printf("This is proof that testArr3 is still a string after strncpy() with testArr4\n");

    char testArr5[] = "String";
    char testArr6[] = "Long String";

    if (strcpy_check(sizeof(testArr5), strlen(testArr6)) == 1)
        printf("String \"%s\" fits, but it will no longer be a string after a proper strncpy() as the NULL terminator will not be present in the array\n", testArr6);
    else if (strcpy_check(sizeof(testArr5), strlen(testArr6)) > 0)
        printf("String \"%s\" will not fit to the destination. Excess of %d characters\n", testArr6, strcpy_check(sizeof(testArr5), strlen(testArr6)));
    else if (strcpy_check(sizeof(testArr5), strlen(testArr6)) == 0)
        printf("String \"%s\" perfectly fits into the destination\n", testArr6);

    char testArr7[1024] = "String with 1024 bytes of memory";
    char testArr8[] = "Stuvves";

    if (strcpy_check(sizeof(testArr7), strlen(testArr8)) == 1)
        printf("String \"%s\" fits, but it will no longer be a string after a proper strncpy() as the NULL terminator will not be present in the array\n", testArr8);
    else if (strcpy_check(sizeof(testArr7), strlen(testArr8)) > 0)
        printf("String \"%s\" will not fit to the destination. Excess of %d characters\n", testArr8, strcpy_check(sizeof(testArr7), strlen(testArr8)));
    else if (strcpy_check(sizeof(testArr7), strlen(testArr8)) == 0)
        printf("String \"%s\" perfectly fits into the destination\n", testArr8);

    char testArr9[] = "Hello World!";
    char seek = 'l';
    printf("Number of times %c occured in %s is %lu\n", seek, testArr9, num_occurences(testArr9, seek, sizeof(testArr9)));

    replace_char(testArr9, 'l', 'r', sizeof(testArr9));
    printf("Japanese form of string is %s\n", testArr9);

    char testArr10[10] = "";
    int ctr;
    for (ctr = 0; !push_character(testArr10, 'a', sizeof(testArr10), strlen(testArr10)); ctr++);
    printf("%s\n", testArr10);
    if (check_string(testArr10, sizeof(testArr10)) < 0)
        printf("testArr10 is not a string\n");
    else
        printf("testArr10 is a string\n");

    while(!pop_character(testArr10, strlen(testArr10)));
	   if (testArr10[0] == 0)
        printf("Emptied String\n");
    else
        printf("Failed to empty string\n");
        
    char testArr11[] = "Dammit I\'m mad";    
    printf("%s\n", testArr11);
    string_reverse(testArr11, strlen(testArr11));
    printf("%s\n", testArr11);
    
        char testArr12[20] = "Hi";
    char testArr13[20] = "Hello";
    char testArr14[] = " User!";
    char testArr15[] = " ABCDEFGHIJKL!";
    char testArr16[] = " ABCDEFGHIJKLM!";
    char testArr17[] = " ABCDEFGHIJKLMN!";
    char testArr18[] = " ABCDEFGHIJKLMNOPQR!";
    
		if (strcat_check(sizeof(testArr14), strlen(testArr14), strlen(testArr18)) == -1)
        printf("Destination String is Full\n");

    if (strcat_check(sizeof(testArr12), strlen(testArr12), strlen(testArr14)) == 0)
        printf("Source string easily fits for concatenation in the destination string\n");

    if (strcat_check(sizeof(testArr13), strlen(testArr13), strlen(testArr15)) == 0)
        printf("Source string easily fits for concatenation in the destination string\n");

    if (strcat_check(sizeof(testArr13), strlen(testArr13), strlen(testArr16)) == -2)
        printf("Source string fits for concatenation in the destination string, but the destination will no longer be a string as a result\n");

    if (strcat_check(sizeof(testArr13), strlen(testArr13), strlen(testArr17)) >= 1)
        printf("Source string will not fit, excess of %d characters\n", strcat_check(sizeof(testArr13), strlen(testArr13), strlen(testArr17)));

    if (strcat_check(sizeof(testArr13), strlen(testArr13), strlen(testArr18)) >= 1)
        printf("Source string will not fit, excess of %d characters\n", strcat_check(sizeof(testArr13), strlen(testArr13), strlen(testArr18)));

		    char testArr19[] = "Bye";
    char testArr20[] = "Goodbye";

    if (swap_string(testArr19, testArr20, sizeof(testArr19), sizeof(testArr20), strlen(testArr19), strlen(testArr20)) == -1)
        printf("Cannot swap\n");

    char testArr21[20] = "Bye!";
    char testArr22[20] = "Goodbye!";

    printf("Unswapped\n");
    printf("Test21: %s\n", testArr21);
    printf("Test22: %s\n", testArr22);

    if (swap_string(testArr21, testArr22, sizeof(testArr21), sizeof(testArr22), strlen(testArr21), strlen(testArr22)) == -1)
        printf("Cannot swap\n");

    printf("Swapped\n");
    printf("Test21: %s\n", testArr21);
    printf("Test22: %s\n", testArr22);

    char testArr23[] = "Character";
    char testArr24[20] = "Ratchethat";
    char testArr25[20] = "Rackethat";

    if (swap_string(testArr23, testArr24, sizeof(testArr23), sizeof(testArr24), strlen(testArr23), strlen(testArr24)) == -1)
        printf("Cannot swap\n");

    printf("Unswapped\n");
    printf("Test21: %s\n", testArr23);
    printf("Test22: %s\n", testArr25);

    if (swap_string(testArr23, testArr25, sizeof(testArr23), sizeof(testArr25), strlen(testArr23), strlen(testArr25)) == -1)
        printf("Cannot swap\n");

    printf("Swapped\n");
    printf("Test21: %s\n", testArr23);
    printf("Test22: %s\n", testArr25);

    return 0;








/*		
		char testArr1[] = {'A', 'B', 'C'};
		char testArr2[] = "ABCED";
		
		//Part2
		char testArr3[] = "String";
		char testArr4[] = "String";
		//For Debugging
		//debug(testArr1, sizeof(testArr1[1]));
		printf("%d\n",check_string(testArr2, sizeof(testArr2)));
		printf("%d\n",check_string(testArr1, sizeof(testArr1)));
		stringify(testArr1, sizeof(testArr1));
		printf("%d\n",check_string(testArr1, sizeof(testArr1)));
		printf("%s\n",testArr1);
		
		printf("%lu\n", sizeof(testArr3));
		printf("%lu\n", strlen(testArr4));
		
				if (strcpy_check(sizeof(testArr3), strlen(testArr4)) == 1)
				printf("String \"%s\" fits, but it will no longer be a string after a proper strncpy() as the NULL terminator will not be present in the array\n", testArr4);
		else if (strcpy_check(sizeof(testArr3), strlen(testArr4)) > 0)
				printf("String \"%s\" will not fit to the destination. Excess of %d characters\n", testArr4, strcpy_check(sizeof(testArr3), strlen(testArr4)));
		else if (strcpy_check(sizeof(testArr3), strlen(testArr4)) == 0)
				printf("String \"%s\" perfectly fits into the destination\n", testArr4);
				
				
		strncpy(testArr3, testArr4, sizeof(testArr3));
		if (check_string(testArr3, sizeof(testArr3)) < 0)
				printf("This is proof that testArr3 is no longer a string after strncpy() with testArr4\n");
		else
				printf("This is proof that testArr3 is still a string after strncpy() with testArr4\n");

 
 
		char testArr10[10] = "";
		int ctr;
		for (ctr = 0; !push_character(testArr10, 'a', sizeof(testArr10), strlen(testArr10)); ctr++);
		printf("%s\n", testArr10);
		if (check_string(testArr10, sizeof(testArr10)) < 0)
				printf("testArr10 is not a string\n");
		else
				printf("testArr10 is a string\n");

}

*/



#include <stdio.h>

char STR [] = "khzeiohz";

int main(){
	
    char c[] = "013";
	
	switch(*c){
		case '1':
			printf("gjzeg \n");
			break;
		case '0':
			printf("gjzeg \n");
			break;
		case '2':
			printf("gjzeg \n");
			break;
	}

    if (STR[1] < 0x7f)
        printf("Go toto\n");

    char sx = STR[1];

    unsigned char us = (unsigned char) sx;

    int is = (int) us;

    printf("is: %d\n", is);

    int is1 = (int) sx;

    printf("is1: %d\n", is1);

	return 0;
}

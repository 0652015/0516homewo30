#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
void bubbleSort(const int  *c);
int main(int argc, char *argv[]) {
	int c[5]={1,6,9,8,4},i;
	printf ("1.=");
	for(i=0;i<5;i++){
		printf (" %d ",c[i]);
	}
	bubbleSort(c);


	
	return 0;
}


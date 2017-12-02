#include <stdio.h>
#include <math.h>

int main(int argc, char **argv[]){
	int x=0, y=0,z=0;
        printf("input a number:\t");
        scanf(" %d", &z);
	for(x = 0; x<z; x++){
		if(x%3 == 0 || x%5 == 0){
			y+=x;
		}
	
	}	
	printf("\nThe sum of all numbers below %d that are multiples of 3 or 5 is: %d\n", z, y);
	return 0;
}

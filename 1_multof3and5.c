#import <stdio.h>
#import <math.h>

int main(int argc, char **argv[]){
	int x, y;
	for(x = 0; x<1000; x++){
		if(x%3 == 0 || x%5 == 0){
			y+=x;
		}
	
	}	
	printf(" %d\n",y);
	return 0;
}

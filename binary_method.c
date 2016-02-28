#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv){
	
	unsigned int m = atoi(argv[1]);
	unsigned int e = atoi(argv[2]);
	unsigned int n = atoi(argv[3]);
	int i,c;

	//find number of bits in e
	for(i=31;i>=0;i--){
		if(e & (1<<i))
			break;
	}

	//int j = e & (1<<i);
	//printf("%d\n",j);	
	if( e & (1<<i--) ) c = m;
	else c = 1;
	
	for(;i>=0;i--){
		c = c * c;
		c = c % n;
	
		if( e & (1<<i) ){
			c = c * m;
			c = c % n;
		}
	}
	printf("%d\n",c);

}

#include<stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	while(t--) {
		float a,b;
		float z;
		scanf("%d %d", &a, &b);
		if(a>=1000)
			z = 0.9*a*b;
		else
			z = a*b;
		printf("%6f\n",z);
	}
	
	return 0;
}

#include <stdio.h>

int main(void) {
	
	
	int t;
	scanf("%d", &t);
	
	int x,h;
	
	while(t--){
	scanf("%d%d", &x, &h);
	if(x>h || x == h){
	    printf("YES \n");
	}
	else {
	    printf("NO \n");
	}}
	
	return 0;
}


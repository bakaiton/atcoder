#include <stdio.h>
 
int main(){
	int N = 0, M = 0;
	int Nnum = 0, Mnum = 0, ans = 0;
	scanf("%d %d", &N, &M);
	ans = (N*(N - 1)/2) + (M*(M - 1)/2);
	printf("%d\n", ans);
}
// Title: Donshop Manager
#include <stdio.h>

int main(void) {
 	int N;
	scanf("%d", &N);
 	long long A[N], B[N];
	char S[N][1003];
	for (int i=0; i<N; i++) scanf("%lld", &A[i]);
	for (int j=0; j<N; j++) scanf("%lld", &B[j]);
	for (int k=0; k<N; k++) scanf("%s", S[k]);	

	for (int x=0; x<N; x++) {
		long long res = A[x] + B[N-1-x];
		printf("Result #%d: %lld %s\n", x+1, res, S[x]);
	}
	return 0;
}

/*
NOTE: This code were made after OJ session! meaning I haven't got the chance to actually test it
with OJ systems. if you had the chance to check/use it with OJ and got "WRONG ANSWER", try changing
the input_arr size(e.g. 1005, 1505, etc.).
*/
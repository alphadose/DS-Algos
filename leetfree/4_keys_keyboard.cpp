/* A recursive C program to print maximum number of A's using 
following four keys */
#include <bits/stdc++.h> 
using namespace std;

int memo[51];

// A recursive function that returns the optimal length string 
// for N keystrokes 
int findoptimal(int N) 
{ 
	// The optimal string length is N when N is smaller than 7 
	if (N <= 6) 
		return N; 

    if(memo[N] != 0) return memo[N];

	// Initialize result 
	int max = 0; 

	// TRY ALL POSSIBLE BREAK-POINTS 
	// For any keystroke N, we need to loop from N-3 keystrokes 
	// back to 1 keystroke to find a breakpoint 'b' after which we 
	// will have Ctrl-A, Ctrl-C and then only Ctrl-V all the way. 
	int b; 
	for (b = N - 3; b >= 1; b--) { 
		// If the breakpoint is s at b'th keystroke then 
		// the optimal string would have length 
		// (n-b-1)*screen[b-1]; 
		int curr = (N - b - 1) * findoptimal(b);

		if (curr > max) 
			max = curr; 
	} 
    memo[N] = max;
	return max; 
} 

// Driver program 
int main() 
{ 
	int N; 

    memset(memo, 0, sizeof(memo));
    for (N = 1; N <= 6; N++) memo[N] = N;

	// for the rest of the array we will rely on the previous 
	// entries to compute new ones 
	for (N = 1; N <= 50; N++) 
		printf("Maximum Number of A's with %d keystrokes is %d\n", 
			N, findoptimal(N)); 
} 

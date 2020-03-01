#include <bits/stdc++.h> 
using namespace std; 
  
void dfs(int u, int parent, int totalSum, 
        vector<int> edge[], int subtree[], double& res, int count[], int N) 
{ 
    int sum = subtree[u]; 
    int curr_count = count[u];

    for (int i = 0; i < edge[u].size(); i++) 
    { 
        int v = edge[u][i]; 
        if (v != parent) 
        { 
            dfs(v, u, totalSum, edge, subtree, res, count, N); 
            sum += subtree[v]; 
            curr_count += count[v];
        } 
    } 

    subtree[u] = sum; 
    count[u] = curr_count;
    
    if(curr_count == N || curr_count == 0) {
        return;
    }
    
    double min_val = fabs((totalSum - sum)/(1.0*(N-curr_count)) - sum/(1.0*curr_count));
    
    if (u != 0 && min_val < res) {
        res = min_val; 
    }
} 
  
double getMinSubtreeSumDifference(int vertex[], 
                     int edges[][2], int N) 
{ 
    int totalSum = 0; 
    int subtree[N]; 
    int count[N];
  
    for (int i = 0; i < N; i++) 
    { 
        subtree[i] = vertex[i];
        count[i] = 1; 
        totalSum += vertex[i]; 
    } 

    vector<int> edge[N]; 
    for (int i = 0; i < N - 1; i++) 
    { 
        edge[edges[i][0]-1].push_back(edges[i][1]-1); 
        edge[edges[i][1]-1].push_back(edges[i][0]-1); 
    } 
  
    double res = 100; 
  
    dfs(0, -1, totalSum, edge, subtree, res, count, N); 
    return res; 
} 

long gcd(long a, long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}

void fract(double input)
{
    double integral = floor(input);
    double frac = input - integral;

    const long precision = pow(10,9); // This is the accuracy.

    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;

    cout << denominator*integral + numerator << " / " << denominator << endl;
}

int main() 
{ 
    int vertex[] = {5,7,6,8,3}; 
    int edges[][2] = {{4,2}, {5,3}, {1,4}, {2,5}}; 
    int N = sizeof(vertex) / sizeof(vertex[0]); 
  
    fract(getMinSubtreeSumDifference(vertex, edges, N)); 
    return 0; 
}

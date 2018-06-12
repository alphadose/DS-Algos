int removeElement(int A[], int n, int elem) {
    int count = 0;
    for (int i = 0; i < n; i++) { 
        if (A[i] == elem) continue;
        else {
            A[count] = A[i];
            count++;
        }
    }
    return count;
}
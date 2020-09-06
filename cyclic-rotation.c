// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    result.A=A;
    result.N = N;
    int i;
   if(N){
       int *newArr=malloc((sizeof(int)*N));
         K=K%N;
    for(i=0;i<N;i++){
        int a=(i+K)%N;
      newArr[a]=result.A[i];
    }
      result.A=newArr;
    free(newArr);
    }
    return result;
}

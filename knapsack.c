#include<stdio.h>
#include<conio.h>
#include<math.h>
int t[100][1000];
int knapsack(int wt[] , int val[] , int w , int n){
    if(n == 0 || w == 0){
        return 0;
    }
    if(t[n][w] != -1){
        return t[n][w];
    }
    if(wt[n-1] <= w){
        return t[n][w] = fmax(val[n-1] + knapsack(wt , val , w - wt[n-1] , n -1),knapsack(wt  ,val , w , n -1));

    }
    else if (wt[n - 1]  > w)
    {
        return t[n][w] =knapsack(wt , val , w  , n-1);
    }
    
}

int main(){
    int wt[] = {1 , 3 , 4 ,5};
    int val[] = {1 , 4, 5 , 7};
    int w = 7;
    int n = sizeof(wt) / sizeof(wt[0]);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= w; j++){
            t[i][j] = -1;
        }
    }
    int profit = knapsack(wt , val , w , n);
    printf("the profit is %d " , profit);
}
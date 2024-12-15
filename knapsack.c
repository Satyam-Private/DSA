#include<stdio.h>
#include<conio.h>
#include<math.h>
int t[100][1000];
int knapsack(int val[] , int wt[] , int W , int n){
     if(W == 0 || n == 0){
        return 0;
    }
    if (t[n][W] != -1)
    {
        return t[n][W];
    }
    
   
    if(wt[n-1] <= W){
        return t[n][W] = fmax(val[n-1] + knapsack(val , wt , W - wt[n-1], n-1) , knapsack(val , wt , W , n-1) );
    }
    else if (wt[n-1] > W)
    {
        return t[n][W] = knapsack(val , wt , W , n -1);
    }
    
}

int main(){
    int val[] = {1, 2, 3, 5};
    int wt[] = {2, 7, 4, 1};
    int W = 7; 
    int n = sizeof(val)/sizeof(val[0]);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <=W+1; j++)
        {
            t[i][j] = -1;
        }
        
    }
    
    int MaxProfit = knapsack(val , wt , W , n);
    printf("the maximum profit is %d " , MaxProfit);

    
}
#include<stdio.h>
#include<conio.h>
#define V 4
int isSafe(int u , int c , int color[] , int graph[V][V]){
    for (int i = 0; i < V; i++)
    {
        if(graph[u][i] && color[i] == c){
            return 0;
        }
    }
    return 1;
    
}
void PrintGraph(int color[]){
    for(int i = 0 ; i < V; i++){
        printf("the color for vertex %d is %d \n" , i , color[i]);
    }
}

void greedColor(int graph[V][V]){
    int color[V];
    for(int i = 0; i < V ; i++){
        color[i] = -1;
    }
    color[0] = 0;

    for(int u = 1; u < V; u++){
        for(int c = 0; c < V; c++){
            if (isSafe(u , c , color , graph))
            {
                color[u] = c;
            }
            
        }
    }

    PrintGraph(color);
}


int main(){
    int graph[V][V] = {
        {0,1,1,1},
        {1,0,1,0},
        {1,1,0,1},
        {1,0,1,0}
    };
    greedColor(graph);
}
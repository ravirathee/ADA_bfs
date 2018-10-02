//Ravi Rathee
//16csu292
//Breadth First Search (Queue)

#include <stdio.h>
#define MAX 5

void bfs(int adj[MAX][MAX],int visited[],int current){
    int queue[MAX],front = -1, rear = -1;
    int i;
    queue[++rear]=current;
    visited[current] = 1;
    while( rear > front ){
        current = queue[++front];
        printf("%c \t", current+65);

        for(i=0; i<MAX ; i++){
            if(adj[current][i]==1 && visited[i]==0){
                queue[++rear] = i;
                visited[i]=1;
            }
        }
    }
}
int main() {
    int visited[MAX]={0};

    int adj[MAX][MAX]={
            {0,1,0,1,0},
            {1,0,0,0,1},
            {0,0,0,0,1},
            {1,0,0,0,1},
            {0,1,1,1,0}
    };

    bfs(adj,visited,0);
}

/*
OUTPUT

A 	B 	D 	E 	C

*/
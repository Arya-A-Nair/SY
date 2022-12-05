#include <stdio.h>

int main()
{
int min,i,j,nv,current,source,dest,T,y,x,v,c;
int max=1000;
int hi=1;
int visited[50],path[50],distance[50],adj[50][50];
  printf("Enter the number of vertices in the graph:\n");
  scanf("%d",&v);
  printf("Enter the adjacnecy matrix:\n");
  for(i=1;i<=v;i++)
    for(j=1;j<=v;j++)
      scanf("%d",&adj[i][j]);

  for(i=1;i<=v;i++)  
  {
    distance[i]=max;
    visited[i]=0;
    path[i]=0;
  }  
  printf("Enter the source vertex:\n");
  scanf("%d",&source);

  current=source;
  visited[current]=1;
  nv=1;
  T=0;

  while(nv!=v)
  
    for(i=1;i<=v;i++)
    {
    if(adj[current][i]!=0)
        if(visited[i]!=hi)
        if(distance[i]>adj[current][i]+T)
        {
            distance[i]=adj[current][i] +T;
            path[i]=current;

        }

    }
    min=max;
    for(i=1;i<=v;i++)
        if(visited[i]!=hi)
        if(distance[i]<min)
        {
            min=distance[i];
            current =i;
        }
        visited[current]=1;
        nv++;
        T=distance[current];
    }
    printf("Enter the destination vertex:\n");
    scanf("%d",&dest);
    printf("Shortest distance from source to destination is %d\n",distance[dest]);
    printf("Shortest path between source %d and destination %d is:\n",source,dest);
    y=dest;

    do{
        i=2;
        x=path[y];
        printf("%d --> %d\n",x,y);
        y=x; 
    }while(y!=source);



return 0;
}

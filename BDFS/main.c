#include <stdio.h>
#include <stdlib.h>
#include "bfsdfs.h"
int main()
{
    Graph g;
    int *v = (int *)malloc(10001*sizeof(int));
    int count;

    g = creatGraph();
    addEdge(g, 0, 1);
    addEdge(g, 0, 3);
    addEdge(g, 1, 2);
    addEdge(g, 2, 5);
    addEdge(g, 3, 7);
    addEdge(g, 4, 0);
    addEdge(g, 4, 1);
    addEdge(g, 4, 7);
    addEdge(g, 5, 8);
    addEdge(g, 6, 3);
    addEdge(g, 7, 2);
    addEdge(g, 7, 6);
    addEdge(g, 7, 8);
    addEdge(g, 8, 7);

// E A B C F I H G D
// 4 0 1 2 5 8 7 6 3
    count = BFS(g, v);
    printf("\n");
    xuatFilebfs(v, count);

    count = DFS(g, v);
    printf("\n");
    xuatFiledfs(v, count);

    fileOriginal(g);
    free(v);
    dropGraph(g);
    return 0;
}

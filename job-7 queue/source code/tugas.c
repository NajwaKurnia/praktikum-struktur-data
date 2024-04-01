#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define maxNode 10
struct Graph{
    int numNode;
    int matriksKedekatan[maxNode][maxNode];
};
struct Queue{
    int items[maxNode];
    int depan;
    int belakang;
};
struct Queue* createQueue(){
    struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));
    queue->depan= -1;
    queue->belakang= -1;
    return queue;
}
bool isEmpty(struct Queue* queue){
    if(queue->belakang== -1){
        return true;
    }else{
        return false;
    }
}
void enqueue(struct Queue* queue, int value){
    if(queue->belakang==maxNode -1){
        printf("\nAntrian penuh!!");
    }else{
        if(queue->depan== -1){
            queue->depan=0;
        }
        queue->belakang++;
        queue->items[queue->belakang]=value;
    }
}
int dequeue(struct Queue* queue){
    int item;
    if(isEmpty(queue)){
        printf("Antrian kosong\n");
        item= -1;
    }else{
        item=queue->items[queue->depan];
        queue->depan++;
        if(queue->depan > queue->belakang){
            queue->depan=queue->belakang= -1;
        }
    }
    return item;
}
void initGraph(struct Graph* graph, int node){
    graph->numNode=node;
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            graph->matriksKedekatan[i][j]=0;
        }
    }
}
void tambahEdge(struct Graph* graph, int src, int dest){
    graph->matriksKedekatan[src][dest]=1;
    graph->matriksKedekatan[dest][src]=1;
}
void BFS(struct Graph* graph, int start){
    bool visit[maxNode]={false};
    struct Queue* queue= createQueue();
    visit[start]=true;
    enqueue(queue, start);
    while(!isEmpty(queue)){
        int currentNode= dequeue(queue);
        printf("%d ", currentNode);
        for(int i=0; i<graph->numNode; i++){
            if(graph->matriksKedekatan[currentNode][i]==1 && !visit[i]){
                visit[i]=true;
                enqueue(queue, i);
            }
        }
    }
}
int main(){
    struct Graph graph;
    int node, edge, i, start;
    printf("Masukkan jumlah node dalam grafik: ");
    scanf("%d", &node);
    initGraph(&graph, node);

    printf("Masukkan jumlah sisi dalam grafik: ");
    scanf("%d", &edge);

    for(i=0; i<edge; i++){
        int src, dest;
        printf("Masukkan edge %d tujuan sumber: ", i+1);
        scanf("%d %d", &src, &dest);
        tambahEdge(&graph, src, dest);
    }
    printf("Masukkan node awal untuk traversal BFS: ");
    scanf("%d", &start);
    printf("Traversal BFS: ");
    BFS(&graph, start);
    return 0;
}
//
//  code.c
//
//
//  Created by Niyaz Murshed on 2016-11-14.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct edge{
    int dest;
    int weight;
    struct edge* next;
};

struct vertex{
    char name[10];
    char type[5];
    struct edge* head;
    
};


struct Graph{
    int v;
    struct vertex* array;
};


struct edge* createnewedge(int name, int w){
    struct edge* newedge = (struct edge*) malloc(sizeof(struct edge));
    newedge->dest=name;
    newedge->weight=w;
    newedge->next=NULL;
    return newedge;
}

int N= 20 ;
int counter=0;

struct Graph* NewGraph(){
    
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    return graph;
}


void AddVertex(struct Graph* graph){
    
 //   printf("######### counter %d \n", counter);
    
    if (counter==0){
    graph->array= (struct vertex*)malloc(sizeof(struct vertex));
  //  printf("######### new array size %d \n", counter+1);
          graph->array[counter].head=NULL;
          strcpy (graph->array[counter].name,"A");
     //   printf("%s \n ",graph->array[counter].name );
          strcpy (graph->array[counter].type,"POE");
          counter++;
            return;
    }
   // printf("######### counter %d \n", counter);

    graph->array= (struct vertex*)realloc(graph->array, (counter +1)*sizeof(struct vertex));
 //   printf("######### new array size %d \n", counter+1);
    graph->array[counter].head=NULL;
    
    
    
        graph->array[counter]=*(struct vertex*)calloc(1,sizeof(struct vertex));
      //  graph->array[counter].head=NULL;
        strcpy (graph->array[counter].name,"B");
     //   printf("%s \n ",graph->array[counter].name );
        strcpy (graph->array[counter].type,"POE");


    counter++;
  //  if (counter==5)
  //  printf("######### DONE \n" );

}


void addEdge(struct Graph* graph, int src, int dest, int w){
   // printf("######### addedge \n");
    

    struct edge* newedge= createnewedge(dest,w);
    newedge->next= graph->array[src].head;
    graph->array[src].head=newedge;
}



void printgraph(struct Graph* graph){
   // printf("######### print \n");
    for (int i =0; i<counter; i++) {
        
        struct edge* pedge = graph->array[i].head;
        
        printf("vertex %s  %s ",graph->array[i].name,graph->array[i].type);
                while (pedge) {
            printf("-> %d,%d", pedge->dest,pedge->weight);
            pedge=pedge->next;
        }
        printf("\n");
    }
}

int main()
{
    
    int V = 5;
    struct Graph* graph = NewGraph();
    AddVertex(graph);
    AddVertex(graph);
    AddVertex(graph);
    AddVertex(graph);
    AddVertex(graph);
    AddVertex(graph);

    addEdge(graph, 0, 1,10);
    addEdge(graph, 0, 4,5);
    addEdge(graph, 1, 2,50);
    addEdge(graph, 1, 3,4);
    addEdge(graph, 1, 4,10);
    addEdge(graph, 2, 3,9);
    addEdge(graph, 3, 4,99);
    addEdge(graph, 4, 3,10);
    addEdge(graph, 5, 3,50);

    printgraph(graph);
    
    return 0;
}



















#ifndef GRAPH_H
#define GRAPH_H

typedef struct graph {
    int size; 
    int **paths;
} graph;

graph* new_graph(int size);

#endif
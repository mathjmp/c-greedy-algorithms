#include "graph.h"
#include <stdlib.h>

graph* new_graph(int size) {

    graph *graph = (struct graph*) malloc(size * sizeof(graph));
    graph->size = size;

    return graph;
}
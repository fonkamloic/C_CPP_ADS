//
// Created by fonkam on 4/25/18.
//

#ifndef C_CPP_ADS_GRAPH_H
#define C_CPP_ADS_GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct any_type {
    enum
    {

    };
    void *val;
};

typedef struct vertex vertex;

// Declaration of edge in the graph data structure
typedef struct edge {
    vertex *neighbour_vertex;
    double weight;
    struct edge *left;
    struct edge *right;
}edge;

// Declaration of vertex
struct vertex {
    double vertex_value;
    static short number_of_vertice;
    int number_of_neighbour;
    struct vertex *next;
    struct vertex *prev;
    struct edge *structedge;
};

void insert_into_graph(vertex *head, double);
void edge_of_vertex(vertex *head, double);
void depth_first_search(vertex *head);
void breadth_first_seach(vertex *head);
bool find_vertex(vertex *head, double);
void delete_from_graph(vertex *head);
void are_vertice_connected(double , double);
void vertice_weight(double, double);

#endif //C_CPP_ADS_GRAPH_H

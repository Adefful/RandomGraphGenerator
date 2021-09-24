#pragma once
#include "graph.h"
#include <random>
#include <vector>

class WeightGenerator {
    int max_weight;
    int min_weight;
    long long seed;
    std::random_device rd;
    std::mt19937 gen;
    Graph graph;
    void set_graph();
    void get_graph();
    void generate();
    vector<int> get_weight();
    vector<vector<int>> get_matrix_weight();

};

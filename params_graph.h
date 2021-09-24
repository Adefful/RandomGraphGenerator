
#include <random>
class ParamsGraph {
    int num_vertices;
    int num_edges;
    long long seed;
    std::random_device rd;
    std::mt19937 gen;
    int min_num_edges_from_vert;
    int max_num_edges_from_vert;
    int radius;
};
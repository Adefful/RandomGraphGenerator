#include "params_graph.h"
#include <vector>
using namespace std;

class Graph {
    ParamsGraph params;
    void generate();
    void set_params(ParamsGraph);
    ParamsGraph get_params();
    vector<vector<int>> get_incidence_matrix(); // adjacency
    vector<vector<int>> get_adjency_matrix();
    vector<vector<int>> get_adjency_list();
    vector<pair<int,int>> get_edge_list();

    void merge_graphs(Graph);

};
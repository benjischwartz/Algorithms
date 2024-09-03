#include <vector>

class UnionFind {
public:
    UnionFind(int n);
    void add_union(int p, int q);
    int find(int p);
    bool connected(int p, int q);
    int get_count();
private:
    int count;
    std::vector<int> id;
    std::vector<int> sz;
};

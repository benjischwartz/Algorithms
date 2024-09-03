#include "UnionFind.h"

UnionFind::UnionFind(int n) : count(n)
{
    id = std::vector<int>(n);
    sz = std::vector<int>(n, 1);
    for (int i = 0; i < n; ++i) {
        id[i] = i;
    }
};

void UnionFind::add_union(int p, int q) {
    int p_root = find(p);
    int q_root = find(q);
    if (p_root == q_root) {
        return;
    }
    if (sz[p_root] > sz[q_root]) {
        id[q_root] = p_root;
        sz[p_root] += sz[q_root];
    }
    else {
        id[p_root] = q_root;
        sz[q_root] += sz[p_root];
    }
    --count;
}

int UnionFind::find(int p) {
    while (id[p] != p) {
        p = id[p];
    }
    return p;
}

bool UnionFind::connected(int p, int q) {
    return find(p) == find(q);
}

int UnionFind::get_count() {
    return count;
}


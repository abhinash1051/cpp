#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10; // size of forest
const int T = 20; // number of time steps

int forest[N][N]; // 2D array to represent the forest

void initForest() {
    // randomly initialize the forest
    srand(time(nullptr));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            forest[i][j] = rand() % 3; // 0 = no tree, 1 = healthy tree, 2 = burning tree
        }
    }
}

void printForest() {
    // print the forest to console
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (forest[i][j] == 0) {
                cout << " ";
            } else if (forest[i][j] == 1) {
                cout << ".";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void updateForest() {
    // update the forest at each time step
    vector<pair<int, int>> burningTrees; // coordinates of burning trees

    // find all the burning trees
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (forest[i][j] == 2) {
                burningTrees.push_back({i, j});
            }
        }
    }

    // spread the fire to neighboring trees
    for (auto tree : burningTrees) {
        int i = tree.first;
        int j = tree.second;
        if (i > 0 && forest[i-1][j] == 1) {
            forest[i-1][j] = 2;
        }
        if (i < N-1 && forest[i+1][j] == 1) {
            forest[i+1][j] = 2;
        }
        if (j > 0 && forest[i][j-1] == 1) {
            forest[i][j-1] = 2;
        }
        if (j < N-1 && forest[i][j+1] == 1) {
            forest[i][j+1] = 2;
        }
    }

    // advance the fire in burning trees
    for (auto tree : burningTrees) {
        int i = tree.first;
        int j = tree.second;
        forest[i][j] = 0; // burnt tree
    }
}

int main() {
    initForest();
    printForest();

    for (int t = 0; t < T; t++) {
        updateForest();
        printForest();
    }

    return 0;
}

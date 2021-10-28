#include <iostream>
using namespace std;

// up, right, down, left
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {-1, 0, 1, 0};

const int N = 7;
string grid[N][N];

void read_grid() {
    for(int row = 0; row < N; ++row) {
        for(int col = 0; col < N; ++col) {
            cin >> grid[row][col];
        }
    }
}

bool inside(int row, int col) {
    return 0 <= row && row < N && 0 <= col && col < N;
}

struct Player {
    int row, col;
    void read() {
        cin >> row >> col;
    }
};

int main() {
    while(true) {
        int turn_type;
        cin >> turn_type;
        read_grid();
        Player me, he;
        me.read();
        he.read();
    }
}

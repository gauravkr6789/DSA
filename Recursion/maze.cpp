#include<iostream>
using namespace std;

int maze(int cr, int cc, int er, int ec) {
    if (cr > er || cc > ec) return 0;
    if (cr == er && cc == ec) return 1;

    int rightway = maze(cr, cc + 1, er, ec);
    int downway = maze(cr + 1, cc, er, ec);

    return rightway + downway;
}

int main() {
    cout << maze(0, 0, 2, 2);  // Output: 6
}
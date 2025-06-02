#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, H, n;
    cin >> W >> H >> n;

    set<int> x = {0, W};
    set<int> y = {0, H};

    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == x2) {
            x.insert(x1);  // Vertical cut
        } else if (y1 == y2) {
            y.insert(y1);  // Horizontal cut
        }
    }

    vector<int> x_l(x.begin(), x.end());
    vector<int> y_l(y.begin(), y.end());
    vector<int> areas;

    for (size_t i = 1; i < x_l.size(); ++i) {
        for (size_t j = 1; j < y_l.size(); ++j) {
            int width = x_l[i] - x_l[i - 1];
            int height = y_l[j] - y_l[j - 1];
            areas.push_back(width * height);
        }
    }

    sort(areas.begin(), areas.end());

    for (int area : areas) {
        cout << area << " ";
    }
    cout << endl;

    return 0;
}

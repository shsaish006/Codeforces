#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> possibleRows = {1, 2, 3, 4, 6, 12};

    while (t--) {
        string s;
        cin >> s;

        set<pair<int, int>> results;

        for (int rows : possibleRows) {
            int cols = 12 / rows;
            bool found = false;

            // Check each column group
            for (int start = 0; start < cols; start++) {
                bool allX = true;
                for (int i = start; i < 12; i += cols) {
                    if (s[i] != 'X') {
                        allX = false;
                        break;
                    }
                }

                if (allX) {
                    found = true;
                    break;
                }
            }

            if (found) {
                results.insert({rows, cols});
            }
        }

        cout << results.size() << " ";
        for (auto pair : results) {
            cout << pair.first << "x" << pair.second << " ";
        }
        cout << endl;
    }

    return 0;
}

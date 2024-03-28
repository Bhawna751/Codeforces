#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int hr = stoi(s.substr(0, 2));
        int min = stoi(s.substr(3, 2));
        if (hr >= 12) {
            if (hr > 12)
                hr -= 12;
            cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << " PM" << endl;
        } else {
            if (hr == 0)
                hr = 12;
            cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << " AM" << endl;
        }
    }

    return 0;
}

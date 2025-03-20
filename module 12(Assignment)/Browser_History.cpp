#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> addresses;
    unordered_map<string, list<string>::iterator> addressMap;
    string address;
    while (cin >> address && address != "end") {
        addresses.push_back(address);
        addressMap[address] = --addresses.end();
    }
    int q;
    cin >> q;
    string command, addr;
    auto cur = addresses.begin();

    for (int i = 0; i < q; ++i) {
        cin >> command;
        if (command == "visit") {
            cin >> addr;
            if (addressMap.find(addr) != addressMap.end()) {
                cur = addressMap[addr];
                cout << *cur << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (cur != addresses.end() && next(cur) != addresses.end()) {
                ++cur;
                cout << *cur << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (cur != addresses.begin()) {
                --cur;
                cout << *cur << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
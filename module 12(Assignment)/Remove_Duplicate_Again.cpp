#include<bits/stdc++.h>
using namespace std;

int  main()
{
    list<int> List;
    int value;

    while (true) {
        cin >> value;
        if (value == -1) 
        {
            break;
        }
        List.push_back(value);
    }

    List.sort();
    List.unique();

    for (auto &val : List) {
        cout << val << " ";
    }

 return 0;
}
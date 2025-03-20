#include <bits/stdc++.h>
using namespace std;

string to_lowercase(const string & s) {
    string lower_s = s;
    transform(lower_s.begin(), lower_s.end(), lower_s.begin(), ::tolower);
    return lower_s;
}

string remove_punctuation(const string& s) {
    string clean_s;
    for (char c : s) {
        if (isalpha(c) || isdigit(c)) { 
            clean_s += c;
        }
    }
    return clean_s;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    
    while (t--) {
        string sentence;
        getline(cin, sentence);

        map<string, int> word_count;
        map<string, string> original_word; 
        istringstream iss(sentence);
        string word;
        string most_frequent_word;
        int max_count = 0;

        while (iss >> word) {
            word = remove_punctuation(word); 
            string lower_word = to_lowercase(word);
            
            if (lower_word.empty()) continue; 
     
            word_count[lower_word]++;
            
            if (original_word.find(lower_word) == original_word.end()) {
                original_word[lower_word] = word;
            }
            
            if (word_count[lower_word] > max_count) {
                most_frequent_word = lower_word;
                max_count = word_count[lower_word];
            }
        }

        cout << original_word[most_frequent_word] << " " << max_count << endl;
    }

    return 0;
}

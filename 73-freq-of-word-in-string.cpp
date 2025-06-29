// C++ program to calculate
// frequency of each word
// in given string
#include <bits/stdc++.h>
using namespace std;

// Function to print frequency of each word
void printFrequency(string str)
{
    map<string, int> M;

    string word = "";

    for (int i = 0; i < str.size(); i++) {

        // if element is empty
        if (str[i] == ' ') {

            // If the current word
            // is not found then insert
            // current word with frequency 1
            if (M.find(word) == M.end()) {
                M.insert(make_pair(word, 1));
                word = "";
            }
            else {
                M[word]++;
                word = "";
            }
        }

        else
            word += str[i];
    }

    // Storing the last word of the string
    if (M.find(word) == M.end())
        M.insert(make_pair(word, 1));

    // Update the frequency
    else
        M[word]++;

    // Traverse the map
    for (auto& it : M) {
        cout << it.first << " - " << it.second << endl;
    }
}

int main()
{
    string str = "I love coding";

    printFrequency(str);
    return 0;
}

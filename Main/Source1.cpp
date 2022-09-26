#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
bool Check(char* word, char* prefix, char* ending) {
    bool flag = true;
    int lenPrefix = strlen(prefix);
    for (int i = 0; i < lenPrefix; ++i)
        if (word[i] != prefix[i])
            return false;
    int j = 0;
    int lenWord = strlen(word);
    int lenEnd = strlen(ending);
    for (int i = lenWord - lenEnd; i < lenWord; ++i)
        if (word[i] != ending[j])
            return false;
        else
            j++;
    return true;
}
int maisdgsn() {
    char prefix[10], ending[10];
    cin >> prefix >> ending;
    ifstream file("out.txt");
    if (!file)
        cout << "Error" << endl;
    else {
        int count = 0;
        char word[255];
        while (!file.eof()) {
            file >> word;
            if (Check(word, prefix, ending)) {
                cout << word << " ";
                count++;
            }
        }
        if (!count)
            cout << "Not found" << endl;
    }
    file.close();
    return 0;
}
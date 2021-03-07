#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* function for scanning all the data into vector
 * scans until symbol "\n" */
vector<string> scan () {

    vector<string> data;

    string temp;
    string word;
    getline(cin, temp, '\n');

    for (auto i : temp){
        if (i == ' ') {
            data.push_back(word);
            word.clear();
            continue;
        }
        word += i;
    }
    return data;
}

/* function for separating sentences.
 * It recreates one vector which contains the text
 * into vector of vectors which contains all the sentences
 * and also deleted points at the ends of the words
 * and added it as separated string */
vector<vector<string> > separateSentences (vector<string> & text){

    vector<vector<string> > sentences;
    string temp;
    int size;

    for (string i : text) {
        vector<string> oneSentence;
        size = i.size();

        if (i[size - 1] == '.') {
            i.erase(size - 2, 1);
            oneSentence.push_back(temp);

            sentences.push_back(oneSentence);
        }
        else {
            oneSentence.push_back(i);
        }
    }
    return sentences;
}

/* comparing two strings
 * or use just a == b */
bool isSameWords (string & a, string & b) {
    if (a.length() != b.length())
        return false;

    for (int i = 0; i < a.length(); i++){
        if (a[i] != b[i])
            return false;
    }
    return true;
}

/* function for uppercasing string */
void upWord (string & a) {
    for (char & i : a) {
        i = (char) towupper(i);
    }
}

int main() {

//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);

    vector<string> temp = scan();
    vector<vector<string> > data = separateSentences(temp);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        vector<int> count;
        bool flag = false;

        for (int j = 0; j < data.size(); j++) {
            for (auto & k : data[j]) {
                if (isSameWords(k, word)){
                    cout << k << endl;
                    upWord(k);
                    flag = true;
                }
            }
            if (flag) {
                count.push_back(j);
                flag = false;
            }
        }

        cout << count.size() << endl;
        for (int & j : count){
            for (int k = 0; k < data[j].size() - 2; k++){
                cout << data[j][k] << " ";
            }
            cout << data[j][data[j].size() - 1] << "." << endl;
        }

        count.clear();
    }
    cout << endl;

//    fclose(stdin);
//    fclose(stdout);


    return 0;
}

#include<iostream>

using namespace std;
int main(){
    int counter[26] = {0, };
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        counter[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++){
        cout << counter[i] << " ";
    }
    
    
}
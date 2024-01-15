#include<iostream>
#include<map>

using namespace std;

int func2(int arr[], int n, int target){
    map<int, int> checker;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        checker[arr[i]] = i;
    }       
    for(int i = 0; i < n; i++){
        if(checker[target - arr[i]] > i){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n, tmp, target;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr[i] = tmp;
    }
    cin >> target;
    cout << func2(arr, n, target);
}
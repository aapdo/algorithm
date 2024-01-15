#include<iostream>

using namespace std;

int func2(int arr[], int n){
    int arr2[100] = {0, };
    for(int i = 0; i < n; i++){
        arr2[arr[i]] = 1;
    }       
    for(int i = 0; i < n; i++){
        if(arr2[100 - arr[i]] == 1){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n, tmp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr[i] = tmp;
    }
    cout << func2(arr, n);
}
#include<bits/stdc++.h>
using namespace std;

class BubbleSorter{
public:
        void sort(vector<int>& arr){
            int n = arr.size() ;
            bool swapped;
            for( int i = 0 ; i < n ; i++){
                swapped = false;
                for( int j = 0 ; j < n - i - 1 ; j++){
                    if(arr[j] > arr[j+1]){
                        swap(arr[j] , arr[j+1]);
                        swapped = true;
                    }
                }
                if(!swapped){
                    break;
                }
            }
        }


};

int main() {
    int v ; 
    cin >> v;
    vector<int> arr(v);
    for(int i = 0 ; i <  v ; i++) cin >> arr[i] ;
    BubbleSorter sorter;
    sorter.sort(arr);
    for(int i = 0 ; i < v ; i++) cout << arr[i] << " " ;
    return 0;
}

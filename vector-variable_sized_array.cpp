#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int elnum, que_num;
    cin>>elnum >>que_num;
   
    vector<int> vect[elnum];

    for(int i=0; i<elnum; i++){
        int arr_size;
        cin>>arr_size;
        //cout <<arr_size<<"\n";
        for( int b=0 ; b<arr_size ; b++){
            int num;
            cin>>num;
            vect[i].push_back(num);
            //cout<< vect[i].at(b);
        }
    }

    for(int i=0; i<que_num; i++){
        int elem, arr_num;
        cin>>elem>>arr_num;
        cout<< vect[elem].at(arr_num)<<"\n";
    }

    return 0;
}



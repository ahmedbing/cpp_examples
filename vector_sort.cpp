#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int elem_num;
    std::cin>>elem_num;
    vector<int> vect;
    for(int i=0; i< elem_num; i++){
        int num;
        cin>>num;
        vect.push_back(num);
    }
    sort(vect.begin(),vect.end());
    std::vector<int>::iterator it;

    for(it=vect.begin(); it!=vect.end(); it++){
        cout<< *it << " ";
    }
    return 0;
}


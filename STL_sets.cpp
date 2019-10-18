#include <cstdio>
#include <vector>
#include <iostream>
#include <set>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int elem_num;
    std::cin>>elem_num;
    std::set<int> s;
    std::set<int>::iterator it;
    for (int i=0; i<elem_num; i++){
        int query,num;
        std::cin>>query;
        if(query==1){
            std::cin>>num;
            s.insert(num);
        }
        if(query==2){
            std::cin>>num;
            s.erase(s.find(num));
        }
        if(query==3){
            std::cin>>num;
            if(s.find(num) == s.end()){
                std::cout<<"No\n";
            }
            else
                std::cout<<"Yes\n";
        }
    }
    return 0;
}

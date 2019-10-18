#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int elem_num;
    cin>>elem_num;

    std::map<string, int> m;
    for(int i=0;i<elem_num;i++){
        int query;
        string name;
        int num;
        
        std::cin>>query;
        std::cin>>name;

        if(query==1){
            int new_num;
            std::cin>>num;
            if(m.find(name) == m.end())
                m.insert(make_pair(name,num));
            else{
                new_num = m.find(name)->second + num;
                m.erase(name);
                m.insert({name,new_num});
            }
        }
        if(query==2){
            m.erase(name);
        }
        if(query==3){
            if( m.find(name) != m.end())
                std::cout << m.find(name)->second<< "\n";
            else 
                std::cout << "0\n";
        }
    }
    return 0;
}


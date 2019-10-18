#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::vector<int> vect;
    char c;

    std::string part;
    std::string limiter= ",";
    int pos=0 , count=0;

    do{
        pos=str.find(limiter);
        int num=0;
        part = str.substr(0,str.find(limiter));
        std::stringstream ab(part);
        ab>> num;
        vect.push_back(num);
        str.erase ( 0 , pos+limiter.length());
    }while( pos != std::string::npos );

    return vect;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }

    return 0;
}

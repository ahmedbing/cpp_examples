#include <iostream>
#include <iomanip>
#include <thread> //Include pthread library to compiler:: g++ -pthread deneme.cpp -o deneme && "/home/teknik/Desktop/"deneme
#define MAX 100

int global_counter = 5;
void ahmed()
{
    std::cout << std::setw(25) << std::right << "\nGlobal 1st call : \n"
              << ++global_counter;
}

void ahmed_func()
{
    global_counter = global_counter + 10;
    std::cout << std::setw(20) << std::right << "\nGlobal 2 :: \n"
              << global_counter;
}

int main()
{
    std::thread first(ahmed);
    std::thread second(ahmed_func);

    std::cout << "First Thread try\n";

    first.join();
    second.join();

    std::cout << "\nThreads completed\n";

    return 0;
}
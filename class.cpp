#include <iostream>
#include <sstream>
#include <cstring>


using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    char name[51];
    char surname[51];
    int age;
    int standard;

    public:
        void set_age(int ageIn);
        void set_standard(int standardIn);
        void set_first_name( string nameIn);
        void set_last_name(string surnameIn);
        int get_age();
        int get_standard();
        string get_first_name();
        string get_last_name();
        string to_str();
};
void Student::set_age(int ageIn){
    age=ageIn;
}
void Student::set_standard(int standardIn){
    standard=standardIn;
}
void Student::set_first_name(string nameIn){
    strcpy(name ,nameIn.c_str());
}
void Student::set_last_name(string surnameIn){
    strcpy(surname, surnameIn.c_str());
}
int Student::get_age(){
    return age;
}
int Student::get_standard(){
    return standard;
}
string Student::get_first_name(){
    return name;
}
string Student::get_last_name(){
    return surname;
}
string Student::to_str(){
    string str1,str2;
    str1= to_string(age);
    str2= to_string(standard);

    return str1 + "," + name + "," + surname + "," + str2;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_str();
    
    return 0;
}



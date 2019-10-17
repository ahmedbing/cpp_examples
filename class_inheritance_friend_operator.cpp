#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    int l;
    int b;
    int h;
    public:
        Box();
        Box(Box &boxin);
        Box(int a, int d, int c);
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
        bool operator <(Box& b);
        friend ostream& operator<<( ostream &out, Box &b2);

};
Box::Box(){
    l=0;
    b=0;
    h=0;
}
Box::Box(Box &boxin){
    l=boxin.l;
    b=boxin.b;
    h=boxin.h;
}
Box::Box(int a, int d, int c){
    l=a;
    b=d;
    h=c;
}
int Box::getLength(){
    return l;
}
int Box::getBreadth(){
    return b;
}
int Box::getHeight(){
    return h;
}
long long Box::CalculateVolume(){
    return b*l*h;
}
bool Box::operator < (Box& box2){
    if( this->l < box2.l)
        return true;
    if((box2.l==this->l) & (this->b <box2.b))
        return true;
    if((box2.l==this->l)&(box2.b==this->b)&(this->h < box2.h))
        return true;
    return false;
}
ostream& operator << ( ostream &out, Box &b2){
    out<<b2.l<<" "<<b2.b<<" "<<b2.h;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}
	}
}

int main()
{
	check2();
}


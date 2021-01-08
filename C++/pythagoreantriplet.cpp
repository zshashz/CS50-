#include<iostream>
using namespace std;

bool pythatriple(int x, int y, int z);

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    if(pythatriple(x,y,z))
    {
        cout<<"Pythagorean Triplet";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet";
    }
    
}

bool pythatriple(int x, int y, int z){

    int a = max(x, max(y,z));
    int b,c;

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    
    if(a*a == b*b + c*c)
        return true;
    else
        return false;
}
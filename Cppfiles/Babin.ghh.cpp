#include<iostream>
using namespace std;
class person{
string name;
int age;
person(){
cout<<"Enter the name and age of the person:
    cin>>name>>age;
    }
    void display(){
    cout<<"Name"<<name<<"Age"<<age;
    }};
int main(){
person p;
p.display()
}

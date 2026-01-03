#include<iostream>
using namespace std;
class general_info{
    protected:
    string name;
    int age;
    public:
  void readdata(){
        cout<<"Enter the name of the person and age:";
        cin>>name>>age;
    }
    void printdata(){
        cout<<"\nName:"<<name<<"\nAge:"<<age<<endl;
    }
    
};
class academic_info{
    protected:
    string highest_degree;
    public:
    void readdata(){
    cout<<"Enter the highest degree of the person";
    cin>>highest_degree;
    }
    void printdata(){
        cout<<"\nQualification Degree:"<<highest_degree<<endl;
    }
};
class emoplyee:public general_info, public academic_info{
    protected:
    string dsg;
    float salary;
    public:
    void readdata(){
        general_info::readdata();
        academic_info::readdata();
        cout<<"Enter the designation and salary:";
        cin>>dsg>>salary;
    }
    void printdata(){
        general_info::printdata();
        academic_info::printdata();
        cout<<"\nDesignation:"<<dsg<<"\nSalary:"<<salary<<endl;
    }
};
int main(){
    emoplyee e;
    e.readdata();
    e.printdata();
}
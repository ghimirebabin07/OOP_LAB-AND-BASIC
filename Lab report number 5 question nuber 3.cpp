#include<iostream>
using namespace std;
  #include<iostream>
  using namespace std;
  class manual{
      protected:
      string title,author;
      
      public:
      void getdata(){
          cout<<"Enter the title and the authors:";
          cin>>title>>author;
          
      }
      void showdata(){
          cout<<"\nTitle:"<<title<<"\nName of the author:"<<author<<endl;
      }
    
};
class practice_book{
    protected:
    string imp_qs;
    public:
    void getdata(){
    cout<<"Enter the important question:";
    cin>>imp_qs;
    }
    void showdata(){
        cout<<"\nImportant qestion:"<<imp_qs<<endl;
    }
};
class text_book:public manual, public practice_book{
    protected:
    float prize;
    public:
    void getdata(){
        manual::getdata();
        practice_book::getdata();
        cout<<"Enter the prize";
        cin>>prize;
    }
    void showdata(){
        manual::showdata();
        practice_book::showdata();
        cout<<"\nPrize:"<<prize<<endl;
    }
};
int main(){
    text_book tb;
    tb.getdata();
    tb.showdata();
}
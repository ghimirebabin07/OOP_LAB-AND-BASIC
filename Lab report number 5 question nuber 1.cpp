  #include<iostream>
  using namespace std;
  class Coach{
      protected:
      string name;
      int noofmtch;
      public:
      void getdata(){
          cout<<"Enter the name and the number of matches played by coach";
          cin>>name>>noofmtch;
      }
      void showdata(){
          cout<<"\nName:"<<name<<"\nNo.of matched played:"<<noofmtch<<endl;
      }
      
  };
  class cricketer:public Coach{
      protected:
      int noofwkt,add;
      public:
      void getdata(){
          Coach::getdata();
          cout<<"Enter the number of wkt taken by Coach:";
          cin>>noofwkt;
      }
      void showdata(){
          Coach::showdata();
         cout<<"No.of wkt:"<<noofwkt<<endl;    
      }
  };
 int main(){
     cricketer c;
     c.getdata();
     c.showdata();
 }
 

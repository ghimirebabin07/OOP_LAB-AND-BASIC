#include<iostream>
using namespace std;
class Publication {
    protected:
    string title;
    float price;
    
    public:
    Publication() {
        title = "Unknown";
        price = 0.0;
    }
    
    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Sales {
    protected:
    int totalSales;
    
    public:
    Sales() {
        totalSales = 0;
    }
    
    void display() {
        cout << "Total Monthly Sales: " << totalSales << endl;
    }
};

class Book : public Publication, public Sales {
    private:
    string author;
    int pageCount;
    
    public:
    Book() {
        author = "Unknown Author";
        pageCount = 0;
    }
    
    void setData(string t, float p, int s, string a, int pg) {
        title = t;
        price = p;
        totalSales = s;
        author = a;
        pageCount = pg;
    }
    
    void display() {
        cout << "\n--- Book Details ---" << endl;
        Publication::display();
        Sales::display();
        cout << "Author: " << author << endl;
        cout << "Page Count: " << pageCount << endl;
    }
};

int main() {
    Book b1;
    b1.setData("C++ Basics", 499.50, 120, "Babin Ghimire", 350);
    b1.display();
    
    return 0;
}

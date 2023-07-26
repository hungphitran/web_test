#include <iostream>

using namespace std;

class sales_data{
    private:
    double revenue;
    string ISBN;
    int units_sold;
    public:
    string getISBN()
    {
        return ISBN;
    }
    int getunits_sold()
    {
        return units_sold;
    }
    double getrevenue()
    {
        return revenue;
    }
    sales_data(){};
    sales_data(string ISBN,int units_sold,double revenue)
    {
        this->ISBN=ISBN;
        this->units_sold=units_sold;
        this->revenue=revenue;
    }
    sales_data combine(sales_data book)
    {
        this->ISBN+=book.getISBN();
        this->units_sold+=book.getunits_sold();
        this->revenue+=book.getrevenue();
        return *this;
    }
    friend istream& read(istream &in,sales_data &book);
    friend ostream& print(ostream &out,sales_data book);
};
    
    
    istream &  read(istream& in,sales_data &book)
    {
        in>>book.ISBN>>book.revenue>>book.units_sold;
        return in;
    }
    ostream & print(ostream& out,sales_data book)
    {
        out<<book.getISBN()<<endl<<book.getrevenue()<<endl<<book.getunits_sold()<<endl;
        return out;
    }
    sales_data add(sales_data b1,sales_data b2)
    {
        sales_data sum=b1;
        sum.combine(b2);
        return sum;
    }
    
int main()
{
    sales_data book1,book2,sum;
    cout<<"enter information of two books: "<<endl;
    read(cin,book1);
    read(cin,book2);
    cout<<"sum of 2 books:"<<endl;
    sum=add(book1,book2);
    print(cout,sum);
    cout<<"the average price of book 1: "<<endl;
    cout<<"the average price of book 2: "<<endl;
    return 0;
}


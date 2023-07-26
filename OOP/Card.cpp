#include <iostream>
#include <vector>

using namespace std;

class Card{
  private:
  string nameBook;
  string nameAuthor;
  int numberBook;
  public:
  Card()
  {
      
  }
  Card(string nameBook,string nameAuthor,int numberBook)
  {
      this->nameBook=nameBook;
      this->nameAuthor=nameAuthor;
      this->numberBook=numberBook;
  }
  void display()
  {
      cout<<nameBook<<endl;
      cout<<nameAuthor<<endl;
      cout<<numberBook<<endl;
  }
  int getNumBook()
  {
      return this->numberBook;
  }
  static void sortCards(vector <Card> &cards)
  {
    Card t;
     int l = cards.size();
     for (int i=0;i< l;i++)
     {
        for (int j=i;j<l;j++)
        {
            if (cards[i].getNumBook()>cards[j].getNumBook())
            {
               t=cards[i];
               cards[i]=cards[j];
               cards[j]=t;
            }
        }
     }
  }
};
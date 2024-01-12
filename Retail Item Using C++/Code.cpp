#include <iostream>
#include <string>
using namespace std;

class RetailItem

{

private:
    string description;
    int unitsOnHand;
    double price;

public:

    RetailItem(string des, int units, double pr)
    {
        description = des;
        unitsOnHand = units;
        price = pr;
    }

    void setDescription(string des)
    {
        description = des;
    }

    string getDescription()
    {
        return description;
    }

    void setUnitsOnHand(int units)
    {
        unitsOnHand = units;
    }

    int getUnitsOnHand()
    {
        return unitsOnHand;
    }

    void setPrice(double pr)
    {
        price = pr;
    }

    double getPrice()
    {
        return price;
    }

    void Show_Item1()
    {
        cout<<"\n \t\tDESCRIPTION\tUNITS_ON_HAND\tPRICE"<<endl;
        cout<<"\n ITEM#1\t\t"<<description<<"\t\t"<<unitsOnHand<<"\t\t"<<price<<endl;

    }
    void Show_Item2()
    {


        cout<<"\n ITEM#2\t\t"<<description<<"\t"<<unitsOnHand<<"\t\t"<<price<<endl;
    }
    void Show_Item3()
    {


        cout<<"\n ITEM#3\t\t"<<description<<"\t\t"<<unitsOnHand<<"\t\t"<<price<<endl;
    }

};


int main()
{

    RetailItem item1("JACKET", 12, 3000);
    RetailItem item2("DESIGNER JEANS", 40, 2500);
    RetailItem item3("SHIRT", 20, 2000);

    item1.Show_Item1();
    item2.Show_Item2();
    item3.Show_Item3();

    return 0;
}



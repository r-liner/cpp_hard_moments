#include <iostream>
#include <string>
using namespace std;
struct PhoneNumber
{
    unsigned int countryCode, cityCode, addNum;
    string callNumber;
    PhoneNumber(unsigned int cc1 = 0, unsigned int cc2 = 0, const string & str ="null", unsigned int add = 0):countryCode(cc1), cityCode(cc2), callNumber(str),addNum(add){};
    friend ostream & operator<<(ostream &out, const PhoneNumber &a);
}number{7, 911, "1234567", 12};
 
ostream & operator<<(ostream &out, const PhoneNumber &a)
    {
        out << "+" << a.countryCode << "(" << a.cityCode << ")" << a.callNumber << " " << a.addNum;
        return out;
    }
int main()
{
    cout << number;
 
    return 0;
}
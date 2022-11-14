#include <iostream>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        string mystring = to_string(num);

        for (auto &mychar : mystring)
        {
            if (mychar == '6')
            {
                /* code */
                mychar = '9';
                break;
            }
        }
        return stoi(mystring);
    }
};

int main()
{

    return 0;
}
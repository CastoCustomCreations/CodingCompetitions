#include <iostream>
using namespace std;

int myXOR(int x,int y)
{
    int res =0;
    for(int i =31; i>= 0; i--)
    {
        bool b1 = x & (1 << i);
        bool b2 = y&(1<<i);
            bool xoredBit = (b1&b2)? 0: (b1 |b2);
            res<<=1;
            res|= xoredBit;
    }
    return res;
}

int main() {
	// your code goes here
	int x=3,y=5;
	cout<<"XOR is "<< myXOR(x,y);
	
	return 0;
}

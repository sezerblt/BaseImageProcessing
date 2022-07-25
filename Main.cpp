#include<iostream>
#include <cstring>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <cstddef>
#include <limits>
using namespace std;
#include <exception> 
#include <stdexcept>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <deque>



int main()
{cout<<"\n";
//--------------------------------------

    std::deque<int> deq;
    for (int count=0; count < 3; ++count)
    {
        deq.push_back(count); //
        deq.push_front(10 - count); //
    }

    for (int index=0; index < deq.size(); ++index)
        std::cout << deq[index] << ' ';

    std::cout << '\n';



//------------------------------------
   cout<<"\n\n";return 0;
}
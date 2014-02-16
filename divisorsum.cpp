//
//  main.cpp
//  divisorsum
//
//  Created by Ross Zamparelli on 2/7/14.
//  Copyright (c) 2014 Ross Zamparelli. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
   /// loop from 2 to 1000
    for (int i = 2; i <= 1000; i++)
    {
        int sum = 0;
        /// loop from 1 to one half of the number
        for (int x = 1; x <= i/2; x++)
        {
        if (i % x == 0)
            sum += x;}
        cout << " The proper divisor sum for " << i << " is " << sum << endl;
    }
    return 0;
}



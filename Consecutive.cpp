//
//  main.cpp
//  Consecutive
//
//  Created by Ross Zamparelli on 2/7/14.
//  Copyright (c) 2014 Ross Zamparelli. All rights reserved.
//

#include <iostream>
using namespace std;
int main()

{    while(1)
        
    {
        int num1, num2, num3, num4;
        int count = 0;
        
        cin >> num1;
        if (cin.eof())
            break;
        
        cin >> num2;
        if (cin.eof())
            break;
        /// if user num2 - user num1 is equal to one then increment
        if (num2 - num1 == 1)
            count++;
        
        else
        continue;
       
        cin >> num3;
        if (cin.eof())
            break;
        /// if user num3 - user num2 is equal to one then increment
        if (num3 - num2 == 1)
            count++;
        
        else
        continue;
        
        cin >> num4;
        if (cin.eof())
        break;
        /// if user num4 - user num3 is equal to one then increment count
        if (num4 - num3 == 1)
        count++;
        
        else
        continue;
        
        cout << "Quadruplet found: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
        
    }
    
    return 0;
    
}

//
//  main.cpp
//  Perfect.cpp
//
//  Created by Ross Zamparelli on 2/12/14.
//  Copyright (c) 2014 Ross Zamparelli. All rights reserved.
//

#include <iostream>
using namespace std;


/// function to test if number is perfect
bool is_perfect (long int n)
{
    int sum = 0;
    for (long int number = 1; number <= n/2; number++)
    {
        if (n % number == 0)
            sum += number; }
    /// if divisor sum is same as number, return true. else return false
    if (n == sum)
        return 1;
    else
        return 0;
};

int main()

{
   long int isitaperfectnumber;
    
   /// loop continuing to ask for a number unless zero or end of file is reached
    while (1)
    {
        cout << "Enter a number to test for perfectness: ";
        cin >> isitaperfectnumber;
        
        if (cin.eof() || isitaperfectnumber == 0)
        {cout << "Goodbye." << endl;
        break;
        }
        /// number is perfect
        if (is_perfect(isitaperfectnumber) == true)
        {    cout << isitaperfectnumber << " is perfect " << endl;
        continue;
        }
        /// number is not perfect
        if (is_perfect(isitaperfectnumber) == false)
        {   cout << isitaperfectnumber << " is not perfect " << endl;
        continue;
        }
        }
    return 0;
}
    
    

   
    




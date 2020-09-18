#include <iostream>
#include "vector.h"
#include <time.h>


using namespace std;

int main()
{
    Vector v;
    int select = -1;
   
   while (select != 10) 
   {
        select = -1;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << "------------ Enter action you would like to preform (1-10)-----------------------" << endl;
        cout << "------------ 0. Print all numbers -----------------------------------------------" << endl;
        cout << "------------ 1. Randomize all numbers -------------------------------------------" << endl;
        cout << "------------ 2. Add Value to all numbers ----------------------------------------" << endl;
        cout << "------------ 3. Set certian numbers to zero -------------------------------------" << endl;
        cout << "------------ 4. Reverse all numbers ---------------------------------------------" << endl;
        cout << "------------ 5. Get average of all numbers --------------------------------------" << endl;
        cout << "------------ 6. Add one to even numbers, subtract one from odd numbers ----------" << endl;
        cout << "------------ 7. Repeat everything currently in the vector -----------------------" << endl;
        cout << "------------ 8. Cut vector in half ----------------------------------------------" << endl;
        cout << "------------ 9. Enter the number 42 in the middle of the vector -----------------" << endl;
        cout << "------------ 10. Quit program ---------------------------------------------------" << endl;
        cin >> select;
        if (cin.fail())
        {
            cout << "fail, try again" << endl; 
            cin.clear();
            cin.ignore(10000,'\n');
        }
        
        if (select == 0)
        {
            v.print();
        }
        
        else if (select == 1)
        {
            v.random();
            v.print();
        }
        
        else if (select == 2)
        {
        cout << "Enter value to add to every number. " << endl;
        int add = 0;
        cin >> add;
        if (cin.fail())
        {
            cout << "fail, try again" << endl; 
            cin.clear();
            cin.ignore(10000,'\n');
        }
        
            v.addValue(add);
            v.print();
        }
        
        else if (select == 3)
        {
            int start = 0;
            int end = 0;
    
            cout << "Enter start value. ('0' is the first value) " << endl;
            cin >> start;
            if (cin.fail())
                cout << "fail, try again" << endl; 
                cin.clear();
                cin.ignore(10000,'\n');
                
            cout << "Enter end value. " << endl;
            cin >> end;
            if (cin.fail())
            {
                cout << "fail, try again" << endl; 
                cin.clear();
                cin.ignore(10000,'\n');
            }
            
            v.zero(start, end);
            v.print();
        }
        
        else if (select == 4)
        {
            v.reverse();
            v.print();
        }
        
        else if (select == 5)
        {
            v.average();
            
        }
        
        else if (select == 6)
        {
            v.magic();
            v.print();
        }
        
        else if (select == 7)
        {
            v.repeat();
            v.print();
        }
        
        else if (select == 8)
        {
            v.chop();
            v.print();
        }
        
        else if (select == 9)
        {
            v.john();
            v.print();
        }
   }
   return 0;
}
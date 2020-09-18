#include "vector.h"

Vector::Vector()
{
    data.resize(0);
}

Vector::~Vector()
{
}

void Vector::print()
{
    for (int i = 0; i < data.size(); i++) // goes through the whole vector and prints everything out.
    {
        cout << data[i] << " "; // puts a space between everything
    }
        cout << endl << endl << endl;
}

int Vector::random()
{
    srandom(time(NULL));

    if (data.empty()) //resizes vector to 20 if it's empty
    data.resize(20);
    
    for (int i = 0; i < data.size(); i++) //goes through the whole vector
    {
        int temp = rand() % 10; //gives random number between 0 and 9
        data[i] = temp;
    }
}

int Vector::addValue(int add)
{
    for (int i = 0; i < data.size(); i++) // adds inputted value to every number in the vector
    {
        int temp = data[i];
        temp = temp + add;
        data[i] = temp;
    }
}

int Vector::zero(int start, int end)
{
    
    for (int i = start; i <= end; i ++) //starts replacing values at "start" and stops at "end"
    {
        data[i] = 0;
    }
}

void Vector::reverse()
{
    int p = 0;
    int copy[data.size()];
    for (int i = 0; i < data.size(); i++) // this loop make a copy of the orginal data
    {
        copy[i] = data[i];
        p = i;
    }
    
    for (int j = 0; j < data.size(); p--,j++)// starts at the end of the copy loop and puts 
    {                                        // the last value of the copied vector into the first value of the orginal vector 
        data[j] = copy[p];
    }
}

float Vector::average()
{
    float average = 0;
    float total = 0;
    float size = data.size();
    for (int i = 0; i < data.size(); i++)
    {
        total = total + data [i]; //add all the values
    }
    average = total / size; // divides to get the average
    cout << "The average is: " << average << endl;
}

void Vector::magic()
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] % 2 == 0) //if even, add 1
        data[i] = data[i] + 1;
        
        else  //if it's not even. it's odd, so 1 gets subtracted
        data[i] = data[i] - 1;
    }
}

void Vector::repeat()
{
    int size = data.size(); // saves orginal size for later
    int j = 0;
    data.resize(data.size()*2); //doubles length of vector
    
    for (int i = size; i < data.size(); i++) //loop starts at the end of the first half
    {
        data[i] = data[j];
        j++; //copies values in a linear order
    }


}

void Vector::chop()
{
    data.resize(data.size()/2); //by resizing all the values in the second half get cut off
}

void Vector::john()
{
    int size = data.size();  //saves orginal size of vector
    int john = (data.size()/2); //saves orginal size of vector divided by to
    
    data.resize(data.size() + 1);
    
    for (int i = john; i < data.size(); i++)
    {
        data[size] = data[size - 1];
        size--;
    }
        if ((data.size() % 2) == 0) //if the total numbers of numbers is even, put 42 before n/2
        {
            john = (data.size()/2);
            data[john - 1] = 42;
        }
        else
        {
            john = (data.size()/2); //if total numbers of numbers is odd, put 42 in the middle
            data[john] = 42;
        }
    
    
    

}
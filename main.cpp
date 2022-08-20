#include <iostream>
#include <bits/stdc++.h>
#include <vector>  // To define vector

using namespace std;
int main()
{
    //Number of numbers
    int num;

    //Value of number
    int value;

    //Empty vector of integers
    vector<int>numbers;

    cout<<"\n\n [Vector Program]..\n\n";

    //Get number of numbers
    cout<<" How many numbers do you want to add?  ";
    cin>>num;

    //Get the numbers
    cout<<"\n Enter your numbers: ";
    for(int counter = 0 ; counter < num ; ++counter)
    {
        cin>>value;

        //Store a value in a vector has no starting size
        numbers.push_back(value);
    }

    //Using size member function to get the size of vector
    cout<<"\n  -Size of vector is: "<<numbers.size();

    //Display numbers in vector
    cout<<"\n\n  -Vector is: ";
    for(int counter = 0 ; counter < numbers.size() ; ++counter)
        cout<<numbers[counter]<<" ";

    //Using reverse member function to reverse the order of the element in vector
    reverse(numbers.begin(),numbers.begin()+numbers.size());

    //Display vector
    cout<<"\n\n  -Reverse of vector is: ";
    for(int counter = 0 ; counter < numbers.size() ; ++counter)
        cout<<numbers[counter]<<" ";

    //Using at member function to assign the value of Nth element of vector to value
    value = numbers.at(0);
    cout<<"\n\n  -Fisrt number is: "<<value;

    //Using pop_back member function to delete last element in vector
    numbers.pop_back();
    cout<<"\n\n  -Size of vector after delete 1 element is: "<<numbers.size();

    //Display vector
    cout<<"\n\n  -New vector is: ";
    for(int counter = 0 ; counter < numbers.size() ; ++counter)
        cout<<numbers[counter]<<" ";

    //Using resize member function to increase the size of vector by N elements
    cout<<"\n\n  -Now vector will be resize to 6 elements and assign 2 to every new element...";
    numbers.resize(6,2); //New size = 6 , each new element = 2

    //Get new size of vector
    cout<<"\n\n  -Size of vector is: "<<numbers.size();

    //Display vector
    cout<<"\n\n  -New vector is: ";
    for(int counter = 0 ; counter < numbers.size() ; ++counter)
        cout<<numbers[counter]<<" ";

    //Using clar member function to delete all elements in vector
    cout<<"\n\n  -Now vector will be clear...";
    numbers.clear();

    //Get new size of vector
    cout<<"\n\n  -Size of vector after clear is: "<<numbers.size();

    //Using clar member function to check if vector is empty or not
    if(numbers.empty())
        cout<<"\n\n  -New vector is: hey what do you wait!! there is on element...\n\n";
    else
        cout<<"\n\n  -There is elements!!\n\n";

    return 0;
}

/*In this lab, you will need to create a vector of type integer.Then fill the vector with the following set :
{1, 4, 2, 7, 8, 4, 5, 2, 3, 7, 4, 2, 9, 3, 6, 7, 8}

Once you create and initialize the vector, you will ask the user for a number.Once the user enters the number,
your program should count how many instances of that number are found in the vector.
For example :

Please enter a number : 8

The number 8 shows 2 times in the vector.

You need to submit your code files along with a screenshot of the execution output.*/

#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::vector; using std::endl;


int main()
{
    vector<int> vect;
    vect = { 1, 4, 2, 7, 8, 4, 5, 2, 3, 7, 4, 2, 9, 3, 6, 7, 8 };
    cout << "Please enter a number: ";
    int num; cin >> num; int count = 0;
    for (int i = 0; i < vect.size(); i++) {
        if (num == vect[i]) {
            count++;}
        else {
            continue;}
    }

    cout << "The number " << num << " shows " << count << " times in the vector.";
}


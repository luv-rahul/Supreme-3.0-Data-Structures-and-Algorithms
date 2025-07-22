#include <iostream>
using namespace std;

int main()
{
    /*Variables*/

    int age = 22;
    cout << "Rahul's age is: " << age << endl;

    /*Variable Declaration*/
    int age;
    cout << age << endl; // Garbage Value

    /*Variable Defination*/
    int age = 21;
    cout << age << endl;

    /*Manipulation / Updation*/
    age = 101;
    cout << age << endl;

    /*DataType*/

    // int
    int count = 5;

    // float
    float share = 3.14;

    // char
    char alphabet = 'z';

    // double
    double weight = 55.69887;

    // bool
    bool isMale = true;
    bool isChild = 1;
    bool isFemale = false;
    bool isGirl = 0;

    cout << count << endl;
    cout << share << endl;
    cout << alphabet << endl;
    cout << weight << endl;
    cout << isMale << endl;

    /*sizeof()*/
    int age = 12;
    cout << sizeof(age) << endl;

    /*Re-declaration of variable can happen only in different scopes*/
    int age = 12;
    {
        int age = 5;
    }
    {
        int age = 26;
    }
    return 0;
}
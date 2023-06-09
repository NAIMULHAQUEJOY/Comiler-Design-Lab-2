// C++ Program to search any element or number in an array

#include <iostream>
using namespace std;

int main()
{
    string input[5]={"if","else","int","break","continue"};
    string read;
    int i;

    cout<<"keyword: ";
    cin>>read;




    // search keyword:

    for(i = 0; i < 5; i++)
        {
          if(input[i] == read)
        {
            cout << "Element found at index ";
            break;

        }
    else
        {
        cout  << "Element Not Present in Input Array\n";
        break;
        }

    }



    return 0;
}

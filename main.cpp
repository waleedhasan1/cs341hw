#include <iostream>
#include <fstream>
using namespace std;
int main() 
{   
    string location;
    string line;
    cin >> location;
    ifstream myfile(location);
    
    if (myfile.is_open())
    {
        
        while (getline(myfile,line))
        {
            cout << line << '\n';
        }
    }
    else
    {
        cout << "fix this";
    }
    
    return 0;
}

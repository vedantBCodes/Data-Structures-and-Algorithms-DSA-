// Unordered_map In STL
#include <iostream>
#include<unordered_map>
using namespace std;
int main() 
{
    unordered_map<int ,string> names;
    
    // Inserting Data;
    
    names[1] = "vedant";
    names[2] = "vinod";
    names[3] = "suraj";
    
    // Accessing elements
    
    cout<<"name 1: "<<names[1]<<endl;
    cout<<"name 2: "<<names[2]<<endl;
    
    // Traversing over the map
    
    for(auto it : names)
    {
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
     // Check existence
     
    if (names.find(3) != names.end())
    {
        cout << "\nKey 3 exists\n";
    }
    else
    {
        cout << "\nKey 3 not found\n";
    }
    
     // Erase
     
    names.erase(2);

    cout << "\nAfter erasing key 2:\n";
    
    for (auto it : names) {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}
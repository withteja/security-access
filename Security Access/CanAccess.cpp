#include<bits/stdc++.h>
using namespace std;
void create()
{
    // file pointer
    fstream fout;
    
    // opens an existing csv file or creates a new file.
    fout.open("reportcard.csv", ios::out | ios::app);
    
    cout << "Enter the details of 5 students:"
    << " roll name maths phy chem bio"<< endl;
    
    int i, roll, phy, chem, math, bio;
    string name;
    
    // Read the input
    for (i = 0; i < 1; i++) {
        
        cin >> roll
        >> name
        >> math
        >> phy
        >> chem
        >> bio;
        
        // Insert the data to file
        fout << roll << ", "
        << name << ", "
        << math << ", "
        << phy << ", "
        << chem << ", "
        << bio
        << "\n";
    }
}
int main (){
    create();}

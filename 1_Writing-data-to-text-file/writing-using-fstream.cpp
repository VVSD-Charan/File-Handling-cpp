#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Unlike ofstream , for fstream we must specify why file should be opened i.e ios::out for writing on file 
    fstream file("File2.txt",ios::out);

    // For multiple modes 
    fstream file2("File3.txt",ios::out | ios::app | ios ::in);
    // ios::out -> Opening the file for writing only 
    // ios::app -> For appending written data to existing data
    // ios::in  -> Opening the file for reading only

    file << " Raasesaa ";

    file.close();

    cout<<"Fstream data has been written\n";

    system("pause");
    return 0;
}
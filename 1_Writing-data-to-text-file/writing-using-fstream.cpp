#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Unlike ofstream , for fstream we must specify why file should be opened i.e ios::out for writing on file 
    fstream file("File2.txt",ios::out);
    file << " Raasesaa ";
    file.close();
    // Closing file is mandatory


    // For multiple modes 
    fstream file2("File3.txt",ios::out | ios::app | ios ::in);
    // ios::out -> Opening the file for writing only 
    // ios::app -> For appending written data to existing data
    // ios::in  -> Opening the file for reading only
    file2<<"Name1 ";
    file2<<"Name2 ";
    file2.flush();
    // Flush is used to ensure that data has been pushed to the file 
    file2.close();


   
    cout<<"Fstream data has been written\n";

    system("pause");
    return 0;
}
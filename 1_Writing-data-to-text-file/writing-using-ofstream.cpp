// Fstream - File stream


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Declaration of variables
    char ch = 'a';
    int i = 164;
    float f = 6.02;
    string str1 = "Ricky";
    string str2 = "Ponting";

    //Opening the file
    // ofstream -> Output File Stream
    //outfile -> An object of class ofstream
    //File.txt -> Name of file sent as constructor of ofstream object
    //Creating file (method 1)
    // ofstream outfile("File.txt");
    // Creating file (method 2)
    ofstream outfile;
    outfile.open("File.txt");


    //Writing data to file
    // 'outfile<<' is used to write the data to the file
    outfile<<ch<<i<<' '<<' '<<f<<str1<<' '<<str2;

    //Closing the file
    //Closing the file after all operations are done
    outfile.close();

    cout<<"Data has been written to the file\n";

    system("pause");
    return 0;
}
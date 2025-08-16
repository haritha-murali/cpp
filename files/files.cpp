// file - container storing information.
// File is basic part of any OS.
// 3 classes available to work with file: ifstream,ofstream, fstream (header file -fstream)
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

void readFile();
void writeFile();
void appendFile();
void readPositionFile();
void writePositionFile();
void binaryfile();

int main()
{
    readFile();
    writeFile();
    appendFile();
    readPositionFile();
    writePositionFile();
    binaryfile();

    return 0;
}

// Writing to file note.txt [ios::out | ios::trunc]
void writeFile()
{
    // create object of fstream class & associate the object to a file (not connect with any file once obj creates)
    ofstream file;
    // file name& mode of operation
    file.open("note.txt", ios::out | ios::trunc);
    if (!file.is_open())
    {
        cout << "Error with file" << endl;
    }
    else
    {
        // Writing to file note.txt [ios::out | ios::trunc]
        cout << "File opened successfully" << endl;
        cout << "Writing to file note.txt" << endl;
        file << "file to store the info\n"
             << endl;
        file << "this is c++ programming" << endl;
        cout << "written to file successfully" << endl;
        file.close();
    }
}

// Reading from file note.txt [ios::in]
void readFile()
{
    // create object of fstream class & associate the object to a file (not connect with any file once obj creates)
    ifstream file;
    // file name& mode of operation
    file.open("note.txt", ios::in | ios::trunc);
    if (!file.is_open())
    {
        cout << "Error with file" << endl;
    }
    else
    {
        // Reading from file note.txt [ios::in]
        cout << "File opened successfully" << endl;
        cout << "Reading from file note.txt" << endl;
        string s;
        while (file.good()) /*to check EOF*/
        {
            getline(file, s);
            cout << s << endl;
        }
        file.close();
    }
}

// appending to the file note.txt [ios::app]
void appendFile()
{
    // create object of fstream class & associate the object to a file (not connect with any file once obj creates)
    ifstream file;
    // file name& mode of operation
    file.open("note.txt", ios::in | ios::trunc);
    if (!file.is_open())
    {
        cout << "Error with file" << endl;
    }
    else
    {
        // appending to the file note.txt [ios::app]
        cout << "File opened successfully" << endl;
        cout << "appending to the file note.txt" << endl;
        file << "file to store the info" << endl;
        string s;
        file.seekg(10); /*point the cursor to a position & then read from there*/
        while (file.good())
        {
            getline(file, s);
            cout << s << endl;
        }
        file.close();
    }
}

// read position (ifstream)-by default file is read from 0th position, use seekg(pos) to change the position (line 98)
void readPositionFile()
{
    // create object of fstream class & associate the object to a file (not connect with any file once obj creates)
    ifstream file;
    // file name& mode of operation
    file.open("note.txt", ios::in | ios::trunc);
    if (!file.is_open())
    {
        cout << "Error with file" << endl;
    }
    else
    {
        // read position (ifstream)-by default file is read from 0th position, use seekg(pos) to change the position (line 98)
        cout << "read position from the file note.txt" << endl;
        cout << file.tellg() << endl;
        file.close();
    }
}

// write position (ofstream)-by default file is write to 0th position, use seekg(pos) to change the position (line 98)
void writePositionFile()
{
    // create object of fstream class & associate the object to a file (not connect with any file once obj creates)
    ifstream file;
    // file name& mode of operation
    file.open("note.txt", ios::in | ios::trunc);
    if (!file.is_open())
    {
        cout << "Error with file" << endl;
    }
    else
    {
        // write position (ofstream)-by default file is write to 0th position, use seekg(pos) to change the position (line 98)
        cout << "write position to the file note.txt" << endl;
        cout << file.tellp() << endl;
        file << "c++ is awesome" << endl;
        file.seekp(10);
        file << "c is also awesome" << endl;
        cout << file.tellp() << endl;
        file.close();
    }
}

// binary file: when working with non-human readble file always open the file in binary mode
void binaryfile()
{
    char s1[100];
    strcpy(s1, "Learning lad rocks!\nhello world!");
    fstream file("note.bin", ios::binary | ios::in | ios::out | ios::trunc);
    if (!file.is_open())
    {
        cout << "error" << endl;
    }
    else
    {
        int l = strlen(s1);
        for (int i = 0; i < l; i++)
        {
            file.put(s1[i]);
        }
        char c;
        file.seekg(0);
        while (file.good())
        {
            file.get(c);
            cout << c << endl;
        }
        file.close();
    }
}
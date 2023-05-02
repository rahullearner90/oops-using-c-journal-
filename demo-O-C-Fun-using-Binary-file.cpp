#include <iostream.h>
#include <fstream.h>

int main()
{
    // Open the file in binary mode for writing
    ofstream outfile;
    outfile.open("data.bin", ios::out | ios::binary);
    
    // Write some data to the file
    int data[] = {1, 2, 3, 4, 5};
    outfile.write((char*)data, sizeof(data));
    
    // Close the file
    outfile.close();
    
    // Open the file in binary mode for reading
    ifstream infile;
    infile.open("data.bin", ios::in | ios::binary);
    
    // Read the data from the file
    int readData[5];
    infile.read((char*)readData, sizeof(readData));
    
    // Print the data to the console
    for(int i=0; i<5; i++)
        cout << readData[i] << " ";
    
    // Close the file
    infile.close();
    
    return 0;
}

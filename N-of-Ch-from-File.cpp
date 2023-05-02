#include <iostream.h>
#include <fstream.h>

int main()
{
    char filename[50];
    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    int count = 0;
    char c;

    while (file.get(c))
    {
        count++;
    }

    cout << "Number of characters: " << count << endl;

    file.close();

    return 0;
}

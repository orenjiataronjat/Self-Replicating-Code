#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main()
{
    int studentID = 1208877835;
    int numberOfCopies = (studentID % 3) + 2;
    srand(time(NULL));

    ifstream input (__FILE__);
    stringstream buffer;
    buffer << input.rdbuf();
    string text = buffer.str();

    for (int i = 0; i < numberOfCopies; i++)
    {
        string r = to_string(rand());
        ofstream output (r + ".cpp");
        output << text;
    }
}

#include <iostream>
#include <vector>

using namespace std;

vector<char> letters = {
    'c','p','l','u','s','p','l','u','s'
};

void display_pattern(int height)
{
    int line = 0;
    do {
        for(int i = 0; i < line; i++)
        {
            cout << letters[i];
        }
        cout << "\n";
        line++;
    } while(line < (height + 1));
}

int main(int argc, char * argv[])
{
    display_pattern(letters.size());
    
    return 0;
}

#include <iostream>
#include <time.h>
using namespace std;
 
int main()
{
    srand(time(1));
    
    int max = 1 + rand() % 15;

    int i = 0;
    while (i < max) {
        char ch = 'a' + rand() % 2;
        cout << ch << " ";
        i++;

        if (ch == 'a') {
            if (i == max)
                cout << "YES\n";
 
            while (i < max) {
                ch = 'a' + rand() % 2;
                cout << c << " ";
                i++;

                if (ch == 'a' && i == max) {
                    cout << "\nYES\n";
                }
                else if (i == max) {
                    cout << "\nNO\n";
                }
            }
        }
        else {
            while (i < max) {
                ch = 'a' + rand() % 2;
                cout << c << " ";
                i++;
            }
            cout << "\nNO\n";
        }
    }
 
    return 0;
}

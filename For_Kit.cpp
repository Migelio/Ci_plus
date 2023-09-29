#include <iostream>
#include <string>
//using namespace std;
using std::cout;
using std::string;
using std::endl;
int main()
{
    const int N_WORD = 11;
    int i;
    string F[N_WORD] { "boobs", "ass", "smile", "outfit", "nose", "lips", "personality", "eyes", "cheeks", "abuse"};
    for (int i = 1; i < N_WORD; i++) {
        if (i < 3) {
            cout << "Vo " << i << " Kate has a nice " << F[i] <<  endl;
        } else {
            cout << "V" << i << " Kate has a nice " << F[i] << endl;

        }

    }
    
    system("pause");
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int morecount = n;
    bool increasemode = true;
    bool spaceincreasemode = false;
    int spacecount = n -1;
    for(int i = 0; i < n+(n-1); i++) {
        for(int j = 0; j < morecount; j++) {
            if (j <= spacecount - 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        if(morecount == n+(n-1)) {
            increasemode = false;
            spaceincreasemode = true;
        }
        
        if (increasemode) {
            morecount++;
        } else {
            morecount--;
        }
        cout << endl;
        if (spaceincreasemode == true) {
            spacecount++;
        } else {
            spacecount--;
        }
        
    }
    return 0;
}
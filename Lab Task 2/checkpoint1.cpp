#include <bits/stdc++.h>
using namespace std;

int main() {
    string cipher = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";
    for (int i = 0; i < 26; i++) {
        cout << "Key: " << i << endl;
        
        for (int j = 0; j < cipher.length(); j++) {
            int decrypt = (((int)cipher[j] - i) % 26 + 97);
            cout << (char)decrypt;
        }
        cout << endl;
    }
}

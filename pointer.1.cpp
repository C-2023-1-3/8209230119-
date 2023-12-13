?#include <iostream>
#include <ctype.h>
using namespace std;
int indexOf(const char* s1, const char* s2) {
    int i = 0, j = 0, k = -1;
    bool flag = true;
    while (s2[j] != '\n') {
        if (s1[0] == s2[j]) {
            int temp = j;
            flag = true;
            i = 0;
            while (s1[i] != '\n') {
                if (s1[i] != s2[j]) { flag = false; }
                j++;
                i++;
            }
            if (flag == true) {
                k = j - i;
                break;
            }
            j = temp;
        }
        j++;
    }
    cout << k << endl;
    return k;
}
int main()
{
    int a = 0, b = 0, i = 0, j = 0;
    char s1[1000], s2[100];
    cout << "Enter the first string:";
    cin.get(s1[0]);
    while (s1[a] != '\n') {
        a++;
        cin.get(s1[a]);
    }
    cout << "Enter the second string:";
    cin.get(s2[0]);
    while (s2[b] != '\n') {
        b++;
        cin.get(s2[b]);
    }
    cout << "indexOf(¡°";
    while (s1[i] != '\n') {
        cout << s1[i];
        i++;
    }
    cout << "¡±, ¡°";
    while (s2[j] != '\n') {
        cout << s2[j];
        j++;
    }
    cout << "¡±) is ";
    indexOf(s1, s2);
    return 0;
}

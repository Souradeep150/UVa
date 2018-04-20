/* Date: 06.03.16
Problem: 11223 - O: dah dah dah!
*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

map <string, char> data;

void Data() {
    data[".-"] = 'A';       data[".---"] = 'J';     data["..."] = 'S';      data[".----"] = '1';    data[".-.-.-"] = '.';    data["---..."] = ':';
    data["-..."] = 'B';     data["-.-"] = 'K';      data["-"] = 'T';        data["..---"] = '2';    data["--..--"] = ',';    data["-.-.-."] = ';';
    data["-.-."] = 'C';     data[".-.."] = 'L';     data["..-"] = 'U';      data["...--"] = '3';    data["..--.."] = '?';    data["-...-"] = '=';
    data["-.."] = 'D';      data["--"] = 'M';       data["...-"] = 'V';     data["....-"] = '4';    data[".----."] = '\'';   data[".-.-."] = '+';
    data["."] = 'E';        data["-."] = 'N';       data[".--"] = 'W';      data["....."] = '5';    data["-.-.--"] = '!';    data["-....-"] = '-';
    data["..-."] = 'F';     data["---"] = 'O';      data["-..-"] = 'X';     data["-...."] = '6';    data["-..-."] = '/';     data["..--.-"] = '_';
    data["--."] = 'G';      data[".--."] = 'P';     data["-.--"] = 'Y';     data["--..."] = '7';    data["-.--."] = '(';     data[".-..-."] = '"';
    data["...."] = 'H';     data["--.-"] = 'Q';     data["--.."] = 'Z';     data["---.."] = '8';    data["-.--.-"] = ')';    data[".--.-."] = '@';
    data[".."] = 'I';       data[".-."] = 'R';      data["-----"] = '0';    data["----."] = '9';    data[".-..."] = '&';
}

int main() {

    Data();
    int t, i;

    char s[2005], newe[10], temp[10];

    cin >> t;
    gets(newe);

    for (i=1; i<=t; i++) {
        gets(s);
        printf("Message #%d\n", i);

        int len = strlen(s), x = 0;
        while (x<len) {
            if (s[x]==' ') {
                if (s[++x]==' ') {
                    cout << ' ';
                    x++;
                }
                continue;
            }
            sscanf(s+x, "%s", &temp);
            cout << data[temp];
            while (x<len && s[x]!=' ') x++;
        }
        cout << endl;
        if (i!=t) cout << endl;
    }

    return 0;
}

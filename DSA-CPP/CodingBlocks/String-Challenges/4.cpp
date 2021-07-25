#include <iostream>
#include <cstring>

using namespace std;

char* myStrTok(char *str) {
    static char* input = NULL;
    if (str!=NULL) {
        input = str;
    }

    if (input == NULL) {
        return NULL;
    }

    char* output = new char[strlen(input + 1)];
    int i = 0;
    output[i] = input[i];
    i++;

    for (; input[i]!='\0'; i++) {
        if (!isupper(input[i]))
            output[i] = input[i];
        else {
            output[i] = '\0';
            input = input+i;
            return output;
        }
    }

    output[i] = '\0';
    input = NULL;
    return output;
}

int main() {
    char s[10000];
    cin.getline(s,10000);
    char *ptr = myStrTok(s);
    cout << ptr << endl;
    while (ptr!=NULL) {
        ptr = myStrTok(NULL);
        cout << ptr << endl;
    }
}
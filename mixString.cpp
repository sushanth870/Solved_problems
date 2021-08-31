#include <bits/stdc++.h>
using namespace std;

char *mixString(string str1, string str2)
{
   
    int n = str1.length() + str2.length();
    char *res = (char *)malloc(sizeof(char) * n);
    int i = 0;
    int j = 0;
    int k = 0;
    int l = n - 1;
    while (str1[i] != '\0' && str2[j] != '\0')
    {
        if ((str1[i] - 'a') < (str2[j] - 'a'))
        {
            *(res + k) = str1[i];
            *(res + l) = str2[j];
            k++;
            l--;
            
        }
        else
        {
            *(res + k) = str2[j];
            *(res + l) = str1[i];
            k++;
            l--;
        }
        i++; 
        j++;
    }
    while (str1[i] != '\0')
    {
        *(res + k) = str1[i];
        k++;
        i++; 
    }
    while (str2[j] != '\0')
    {
        *(res + k) = str2[j];
        k++;
        j++; 
    }
    *(res + n) = '\0';
    return res;
}

int main()
{
    string str1, str2;

    str1 = "cape";
    str2 = "port";

    char *c = mixString(str1, str2);
    // char* c = &str1[0];

    cout << "\n"
         << c << endl;
}
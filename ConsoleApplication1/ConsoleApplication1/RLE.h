#include <cstdlib>
#include<iostream>
#include <string.h>
//using namespace std;


//void rleEncrypt(string Code) 
//{
//    string code;
//    code = Code;
//
//  
//    for (int i = 0; i < code.length(); i++) 
//    {
//        int count = 1;
//
//        while (code[i] == code[i + 1] && i < code.length() - 1) {
//            count++;
//            i++;
//        }
//
//        cout << "Run Length Encoding is: "<<code[i]<< count;
//    }
//    
//}

#include<bits/stdc++.h>
using namespace std;
void rle()
{
    cout << "please enter your choice" << endl;
    cout << "1- Compress" << endl;
    cout << "2- Decompress" << endl;
    int choice = -1;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "please enter your string" << endl;
        string s;
        cin >> s;
        string output = "";
        int n = s.length();
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                output += to_string(count) + s[i];
                count = 1;
            }
        }
        cout << output << endl;
        break;
    }
    case 2:
    {
        string input;
        string output = "";
        cout << "please enter your string" << endl;
        cin >> input;
        int n = input.length();
        for (int i = 0; i < n; i += 2)
        {
            int x = input[i] - '0';
            for (int j = 0; j < x; j++)
                output += input[i + 1];
        }
        cout << output << endl;
        break;
    }
    }
}

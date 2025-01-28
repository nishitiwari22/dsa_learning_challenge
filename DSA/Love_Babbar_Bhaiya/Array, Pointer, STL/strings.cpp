#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int start = 0;
    // int n = s.length;
    int end = n - 1;
    while (start < end){
    if(!isalnum(s[start])) start++;
    else if(!isalnum(s[end])) end--;
    
        else{ 
            if( toLowerCase(a[start]) != toLowerCase(a[end]))
           {
            return 0;
        }

            start++;
            end--;
        }
    }
    return 1;
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Your name is"<<endl;
    cout<< name<<endl;
    int len = getLength(name);
    cout<< "Length: "<<len <<endl;


    // reverse(name,len);
    cout<<"Your name is ";
    cout<<name<<endl;

    // cout << "check palindrome" << checkPalindrome(name, len) << endl;
    cout << "Palindrome or not " << checkPalindrome(name, len) << endl;

    cout<< " CHARACTER IS "<<toLowerCase('b')<<endl;
    cout<< " CHARACTER IS "<<toLowerCase('C')<<endl;

char arr1 = 'ab' /0 'cd';
cout<<arr1<<endl;

string s = 'ab' /0 'cd';
cout<<s<<endl;

    return 0;
}


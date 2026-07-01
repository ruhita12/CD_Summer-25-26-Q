#include <iostream>
#include <string>
using namespace std;

void tokenize(string input)
{
    string keyword[] = {"int","float","char","void","cout","cin"};
    char op[] = {'+','-','*','/','=','<','>'};
    char punc[] = {';',',','(',')','{','}'};

    string token="";
    for(int i=0;i<=input.length();i++)
    {
        char ch=input[i];

        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')||ch=='.')
        {
            token+=ch;
        }
        else
        {
            if(token!="")
            {
                int flag=0;

                for(int j=0;j<6;j++)
                {
                    if(token==keyword[j])
                    {
                        cout<<"Keyword : "<<token<<endl;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    if(token[0]>='0' && token[0]<='9')
                        cout<<"Number : "<<token<<endl;
                    else
                        cout<<"Identifier : "<<token<<endl;
                }
                token="";
            }
            for(int j=0;j<7;j++)
            {
                if(ch==op[j])
                    cout<<"Operator : "<<ch<<endl;
            }
            for(int j=0;j<6;j++)
            {
                if(ch==punc[j])
                    cout<<"Punctuation : "<<ch<<endl;
            }
        }
    }
}

int main()
{
    string input="cout << 20 + a * 60.5;";

    tokenize(input);

    return 0;
}

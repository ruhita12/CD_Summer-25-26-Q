#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char ch;
    string token = "";

    while (fin.get(ch))
    {
        if (ch == '"')
        {
     while (fin.get(ch) && ch != '"')
        token += ch;

     fout << token << " Constant" << endl;
        token = "";
        }

  else if ((ch >= 'A' && ch <= 'Z') ||
    (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9') ||
        ch == '.')
        {
        token += ch;
        }

        else
        {
            if (token != "")
            {
        if (token == "int" || token == "float" || token == "char" ||
        token == "void" || token == "string" || token == "return")
        fout << token << " Keyword" << endl;

        else if (token[0] >= '0' && token[0] <= '9')
            fout << token << " Constant" << endl;

        else
         fout << token << " Identifier" << endl;

        token = "";
            }

    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
        fout << ch << " Operator" << endl;

    else if (ch == '(' || ch == ')' || ch == '{' || ch == '}' ||
                ch == ',' || ch == ';')
        fout << ch << " Separator" << endl;
        }
    }

    return 0;
}

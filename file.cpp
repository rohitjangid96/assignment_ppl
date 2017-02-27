#include <iostream>
#include <fstream>
#include <cstddef>
using namespace std;

int main ()
{
    string ch,a,input;
    int check;
    a=",";
    fstream file,result,cleaned,final;
    file.open("input.txt");
    result.open("result.txt",ios::app);
    cleaned.open("cleaned.txt",ios::app);
    final.open("final.bat",ios::app);
    cout<<"enter the choice : F,M,R,S"<<endl;
    cin>>ch;
    ch = "\"" + ch + "\"";

    string line;
    cout<<"what you want to append ??"<<endl;
    cin>>input;
    while(!file.eof())
    {
            getline(file,line);
            check=line.find(ch);
            if ( check!= std::string::npos)
                {
                    result << line+"\n";
                    cleaned << line.replace(line.find(","),string::npos," ").substr(check+4) << '\n';
                    final << input +line.substr(check+4) << '\n';

                }
    }

    return 0;
}

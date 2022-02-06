#include <iostream>
#include<fstream>

 
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ios;
 
int main()
{
    char ch;
   ifstream in ("file.txt");
   in.seekg(0,ios::end);
   int size=in.tellg();
 
      for (int j=1; j<=size; j++)
        { in.seekg(-j, ios::end);
          ch=in.get();
          cout <<ch;
         }
 
    in.close();
  
    return 0;
}
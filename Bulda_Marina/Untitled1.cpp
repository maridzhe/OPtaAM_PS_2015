#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> // DLYA 5 11 robit
#include <math.h>
#include <algorithm>
const int N=3;
using namespace std;
void createFile()
{
      ofstream file("file.txt");
      file.close();         
}
void readFile(){
      string buff;
      ifstream file("file.txt");
      while(!file.eof()){
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
float addFunctionResults(){
ofstream file("file.txt",ios_base::app);
float function;
	  for(int i=-2;i<N;i++)
	  {function=(i*i*cos(i))-0.2;
	  	  file << "X=" <<i<<"\t"<<"F(X)="<<function<<"\n"<<"----------------------"<<endl;
	  }
      }
main (){
createFile();
addFunctionResults();
readFile();
     system("pause");     
}

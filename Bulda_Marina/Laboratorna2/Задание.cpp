#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> 
#include <math.h>
#include <algorithm>
#include <iomanip.h>
const int N=3;
using namespace std;
void createFile() 
{
      ofstream file("lavki.txt");//запис даних у файл
      file.close();         //закриття файлу
}
void readFile()
{
      string buff;//у буфері зявляється слово
      ifstream file("lavki.txt");//читаються дані з файлу "lavki"
      while(!file.eof())//якщо файл не пустий 
      {
      getline(file, buff);
      cout << buff << endl;//вносяться з буфера дані
      }
      file.close();         //закриття файлу
}
float addFunctionResults()
{
ofstream file("lavki.txt",ios_base::app);//запис даних у файл
float function;
	  for(float i=-2;i<N;i=i+0.1)
	  {
              function=(i*i*cos(i))-0.2;
	  	  file << "X=" << setiosflags(ios::fixed) << setprecision(1) << i << "\t" << "F(X)=" << function << "\n" << "----------------------" << endl;
	  } // форма виведення з фіксірованою комою
}
main ()
{// визиваються функції
createFile();
addFunctionResults();//результат ф-ї
readFile();
     system("pause");     
}

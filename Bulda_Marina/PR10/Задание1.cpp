#include <fstream>
#include <iostream>
#include <cstdlib> 
#include <string.h>
using namespace std;

void createFile()
{
      ofstream file("D://file.csv");//запис даних у файл
	  file << "String" << endl;//фиаско
      file.close();         //закриття файлу
}
void readFile()
{
      string buff;//у буфері зявляється слово
      ifstream file("D://file.csv");//читаються дані з файлу
      while(!file.eof())//якщо файл не пустий 
      {
      getline(file, buff);
      cout << buff << endl;//вносяться з буфера дані
      }
      file.close();      //закриття   
}
main ()
{// визиваються функції
     createFile();//ф-я записує рядок в файл
	 readFile();//зчитує рядок з файлуія і виводить
     system("pause");     
}

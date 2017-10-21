#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;

void createFile()
{
      ofstream file("D://BuldaLesich//file.csv");
	  file << "OPtaM" << ";" << endl;
      file << "Its" << ";" << endl;
      file << "Good" << ";" << endl;
      file.close();         
}
void createFileCopy()
{
      ofstream file("D://BuldaLesich//fileCopy.csv");
	  file << "Good" << ";" << endl;
      file << "Its" << ";" << endl;
      file << "OPtaM" << ";" << endl;
      file.close();         
}
void readFileCopy()
{
      string buff;
      ifstream file("D://BuldaLesich//fileCopy.csv");
      while(!file.eof())
      {
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
main ()
{
     createFile();
     createFileCopy();
	 readFileCopy();
     system("pause");     
}

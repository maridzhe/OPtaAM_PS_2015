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
      ofstream file("lavki.txt");//����� ����� � ����
      file.close();         //�������� �����
}
void readFile()
{
      string buff;//� ����� ���������� �����
      ifstream file("lavki.txt");//��������� ��� � ����� "lavki"
      while(!file.eof())//���� ���� �� ������ 
      {
      getline(file, buff);
      cout << buff << endl;//��������� � ������ ���
      }
      file.close();         //�������� �����
}
float addFunctionResults()
{
ofstream file("lavki.txt",ios_base::app);//����� ����� � ����
float function;
	  for(float i=-2;i<N;i=i+0.1)
	  {
              function=(i*i*cos(i))-0.2;
	  	  file << "X=" << setiosflags(ios::fixed) << setprecision(1) << i << "\t" << "F(X)=" << function << "\n" << "----------------------" << endl;
	  } // ����� ��������� � ����������� �����
}
main ()
{// ����������� �������
createFile();
addFunctionResults();//��������� �-�
readFile();
     system("pause");     
}

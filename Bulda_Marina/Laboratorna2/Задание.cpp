#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> 
#include <math.h>
#include <algorithm>
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
	  for(int i=-2;i<N;i++)
	  {
              function=(i*i*cos(i))-0.2;
	  	  file << "X=" <<i<<"\t"<<"F(X)="<<function<<"\n"<<"----------------------"<<endl;
	  }
}
main ()
{// ����������� �������
createFile();
addFunctionResults();//��������� �-�
readFile();
     system("pause");     
}

#include <fstream>
#include <iostream>
#include <cstdlib> 
#include <string.h>
using namespace std;

void createFile()
{
      ofstream file("D://file.csv");//����� ����� � ����
	  file << "String" << endl;//������
      file.close();         //�������� �����
}
void readFile()
{
      string buff;//� ����� ���������� �����
      ifstream file("D://file.csv");//��������� ��� � �����
      while(!file.eof())//���� ���� �� ������ 
      {
      getline(file, buff);
      cout << buff << endl;//��������� � ������ ���
      }
      file.close();      //��������   
}
main ()
{// ����������� �������
     createFile();//�-� ������ ����� � ����
	 readFile();//����� ����� � ������ � ��������
     system("pause");     
}

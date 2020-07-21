// !Ballon.cpp: определяет точку входа для консольного приложения.
// 10.02.2016 16:29-17:59(по факту ушло 30мин)

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;


/* void tostrkb(const string &word,string &strkb)
{
	//1кб = 1024б

	int sizeword = sizeof(word);//рахмер исходной строки

	int kol = word.length()+1;//36.571//1024%sizeword;
	//сколлько нужно исходных строк для заполнения на 1 КБ(по размеру) 

	for (int i(0) ; i < kol ; i++)
	{
		strkb += word;//набиваем до 1Кб
	}

	cout << sizeof(word) << endl;
	cout << sizeof(strkb) << endl;

} */

int _tmain(int argc, _TCHAR* argv[])
{
	system("color a");
	setlocale(LC_ALL,"Rus");
	cout << "By Egor9730 ot 10.02.2016 16:29-17:59(по факту ушло 30мин)" << endl;
	cout << "\t~# Ballon #~" << endl << endl;
	ofstream fout;//открытие потока
//###~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###
	string filename;//имя файла
	
	cout << "Введите имя файла: ";
	cin >> filename;

	//!!!!!!!!!!!!!!!!!!!!!!!
	//filename += ".balegor";//робит	чтоб не писать расширение

	fout.open(filename);//Куда выводить(с земеной)
	cout << "Открыт файл \""  << filename << "\"" << endl;
//###~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###
	//string word;//выводимая фраза
	//string strkb;//много фраз в итоге на 1 КБ
	//string strmb;//много фраз в итоге на 1 Мб

	//char *word = new char [50];
	char word[50];

	int kolmb = 0;//целевой размер(МБ)
	bool probel = false;

	cout << "Введите целевой размер файла: ";
	cin  >> kolmb;

	cout << "Введите любые символы: ";
	cin  >> word;

//###~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###
	int len = strlen(word);//сколько ввели символов в байтах
	
	//+2 если с новой строки//+0 если обычно
	int onemb = 1048576/(len);//кол-во строк в 1МБ//не трогать

	int needmb = kolmb*onemb;//кол-во строк для целевого числа МБ

	double t1 = clock();

	for(int i(0); i < needmb; i++)
		fout << word;

	double t2 = (clock()-t1)/1000;
	
	cout << "\nПонадобилось " << needmb << " исходных строк для заполнения " << kolmb <<"Мб";
	cout << "\nВремя выполнения: " << t2 << " Секунд";

	//1mb=1024 kb= 1 048 576 bytes        ///    = 8 388 608 bit


	 


	


	/*  tostrkb(word,strkb);//заполнит вторую строку на 1КБ
	for( int i(0) ; i < kolmb ; i++ )//шаг = 1МБ
	{
		if(probel)
			fout << strkb << endl;	
		else 
		fout << strkb;
	}  */
//###~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~###
	
	_getch();
	return 0;
}


// Грузило.cpp: определяет точку входа для консольного приложения.
// 10.02.2016 14:54 - 15:59 - 16:19

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;



void priv()
{
	cout << "\tdouble = 8 байт" << endl;
	
	cout << "\t1Мб = 16 384 штук" << endl;
	cout << "\t2Мб = 32 768 штук" << endl;
	cout << "\t4Мб = 65 536 штук" << endl;
	cout << "\t8Мб = 131 072 штук" << endl;
	cout << "\t16Мб = 262 144 штук" << endl;
	cout << "\t64Мб = 1 048 576 штук" << endl;
	cout << "\t128Мб = 2 097 152 штук" << endl;
	cout << "\t256Мб = 4 194 304 штук" << endl;
	cout << "\t512Мб = 8 388 608 штук" << endl;
	cout << "\t1024Мб = 16 777 216 штук" << endl;
	cout << endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	system("color a");
	setlocale(LC_ALL,"Rus");
	
	//double = 8 байт
	// 1Кб = 128 шт
	// 1Мб = 128*1024 = 131072 Кб = 16 384 штук
	// 2Мб = 32 768 штук
	// 4Мб = 65 536 штук
	// 8Мб = 131 072 штук
	// 16Мб = 262 144 штук
  //// 64Мб = 1 048 576 штук
  //// 128Мб = 2 097 152 штук
  //// 256Мб = 4 194 304 штук
  //// 512Мб = 8 388 608 штук
  //// 1024Мб = 16 777 216 штук

	

	int kolmb = 0;

	cout << "By Egor9730 ot 10.02.2016 14:54-15:59-16:19 FINAL" << endl << endl;
	
	priv();//инфа
	

	cout << "\tВыбор(Мб): ";
	cin >> kolmb;
	cout << "\tBegin!!!";


	double t1 = clock();

	//кол-во элем = колмб * число элем в 1Мб * размер 1 элем(8байт)
	int kol = kolmb*16384*8;//кол-во элементов double
	
	double *mass = new double [kol];//резервация
	
	for (int i(0); i<kol; i++)//чтоб робило в релизе
		mass[i] = rand();


	double t2 = clock();
	double alltime = 0;
	alltime = (t2 - t1)/1000;//конечное время



	cout << endl;
	cout << "\t" << "Было зарезервировано: " << kol << " элементов" << endl << endl;

	
	cout << "\t" << "А именно: " << endl;
	cout << "\t\t  " << kolmb           <<     "Мб"     << endl;
	cout << "\t\t  " << kolmb*1024      <<     "Кб"     << endl;
	cout << "\t\t  " << kolmb*1024*1024 <<    "байт"    << endl;

	cout << endl;
	cout << "\tПотребовалось " << alltime << " Секунд" << endl;

	

	_getch();

	cout << "\tПамять освобождена!";

	delete [] mass;
	_getch();
	return 0;
}


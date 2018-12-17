// MathQuestionSolition_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// determinantý hesaplayan fonksiyon.
double determinant(double i, double j, double k, double l) {
	return ((i*l) - (j*k)); //determinant hesaplanýp deðer geri döndürülüyor.
}
// çözümü hesaplayýp döndüren fonksiyon.
double solition(double det1, double det2) {
	return (det1 / det2);//çözüm hesaplanýp sonuç geri döndürülüyor.
}
int main()
{
	/*
	Bu Projede Kullanýlan Deneme Soru:
	2x - 3y = 5
	-3x + 5y =-8
	*/
	double a1 = 2.0, a2 = -3.0, b1 = -3.0, b2 = 5.0, c1 = 5.0, c2 = -8.0; //Bilinen deðerleri tutan deðiþkenler.
	double det1, det2; // Hesaplanacak olan determinantlarý tutacak deðiþkenler.
	double x, y; // Bilinmeyen Deðerlerin sonuçlarný tutacak olan deðiþkenler.
				 //Deðerler Okunuyor.
	cout << "a1 deðerini giriniz : ";
	cin >> a1;
	cout << "b1 deðerini giriniz : ";
	cin >> b1;
	cout << "c1 deðerini giriniz : ";
	cin >> c1;


	cout << "a2 deðerini giriniz : ";
	cin >> a2;
	cout << "b2 deðerini giriniz : ";
	cin >> b2;
	cout << "c2 deðerini giriniz : ";
	cin >> c2;
	//Deðerler Okundu.

	det1 = determinant(c1, b1, c2, b2);
	det2 = determinant(a1, b1, a2, b2);
	x = solition(det1, det2); // Bilinmiyen deðer olan  X deðeri hesaplanýyor.
	det1 = determinant(a1, c1, a2, c2);
	det2 = determinant(a1, b1, a2, b2);
	y = solition(det1, det2); // Bilinmiyen deðer olan  Y deðeri hesaplanýyor.
	cout << "X : " << (x) << endl; // X deðeri Consola Yazýldý.
	cout << "Y : " << (y) << endl; // Y deðeri Consola Yazýldý.
	system("pause"); // Consol Ekraný Durduruldu.
	return 0;
}




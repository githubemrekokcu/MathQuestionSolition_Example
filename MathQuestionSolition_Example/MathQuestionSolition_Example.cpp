// MathQuestionSolition_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// determinant� hesaplayan fonksiyon.
double determinant(double i, double j, double k, double l) {
	return ((i*l) - (j*k)); //determinant hesaplan�p de�er geri d�nd�r�l�yor.
}
// ��z�m� hesaplay�p d�nd�ren fonksiyon.
double solition(double det1, double det2) {
	return (det1 / det2);//��z�m hesaplan�p sonu� geri d�nd�r�l�yor.
}
int main()
{
	/*
	Bu Projede Kullan�lan Deneme Soru:
	2x - 3y = 5
	-3x + 5y =-8
	*/
	double a1 = 2.0, a2 = -3.0, b1 = -3.0, b2 = 5.0, c1 = 5.0, c2 = -8.0; //Bilinen de�erleri tutan de�i�kenler.
	double det1, det2; // Hesaplanacak olan determinantlar� tutacak de�i�kenler.
	double x, y; // Bilinmeyen De�erlerin sonu�larn� tutacak olan de�i�kenler.
				 //De�erler Okunuyor.
	cout << "a1 de�erini giriniz : ";
	cin >> a1;
	cout << "b1 de�erini giriniz : ";
	cin >> b1;
	cout << "c1 de�erini giriniz : ";
	cin >> c1;


	cout << "a2 de�erini giriniz : ";
	cin >> a2;
	cout << "b2 de�erini giriniz : ";
	cin >> b2;
	cout << "c2 de�erini giriniz : ";
	cin >> c2;
	//De�erler Okundu.

	det1 = determinant(c1, b1, c2, b2);
	det2 = determinant(a1, b1, a2, b2);
	x = solition(det1, det2); // Bilinmiyen de�er olan  X de�eri hesaplan�yor.
	det1 = determinant(a1, c1, a2, c2);
	det2 = determinant(a1, b1, a2, b2);
	y = solition(det1, det2); // Bilinmiyen de�er olan  Y de�eri hesaplan�yor.
	cout << "X : " << (x) << endl; // X de�eri Consola Yaz�ld�.
	cout << "Y : " << (y) << endl; // Y de�eri Consola Yaz�ld�.
	system("pause"); // Consol Ekran� Durduruldu.
	return 0;
}




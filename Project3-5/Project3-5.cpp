/*
* File: P3-5
* Author: Chase McCluskey
*Date: 9/12/2024

Description: Turning pseudocode into actual code in C++
*
*/
#include <iostream>
#include <string>

using namespace std;
int main() {
	double totalbookprice;
	int totalbooks;
	const double TAX = 1.075;
	cout << "Enter total cost of all books : ";
	cin >> totalbookprice;
	cout << "Enter total number of books purchased: ";
	cin >> totalbooks;
	double total = totalbookprice * TAX;
	double shipcost = totalbooks * 2.50;
	total += shipcost;
	cout << "Price of order is $" << total;
}
/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: A Program to use Author and Book Class
Date: 3/23/2015
*/

#include <iostream>
#include<string>
#include "Book.h"

using namespace std;

int main()
{
    string author_name,  author_email, book_name;
    char gender;
    double book_price;
    int book_quantity;

    cout << "Enter name of the author: ";
    getline(cin,author_name);

    cout << "Enter email address of author: ";
    getline(cin,author_email);

    cout << "Enter gender of author: ";
    cin >> gender;
    cin.get();

    cout << "Enter book name: ";
    getline(cin,book_name);

    cout << "Enter the price of the book: ";
    cin >> book_price;

    cout << "Enter quantity of books in stock: ";
    cin>> book_quantity;

    Author author1(author_name, author_email, gender);
    Book book1(book_name,author1, book_price, book_quantity);

    cout << author1.toString() << endl;
    cout << book1.toString() << endl;
}

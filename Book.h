/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An interface of Book Class
Date: 3/23/2015
*/

#include<string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H


class Book
{
    private:
        string name;
        Author author;
        double price;
        int quantity;

    public:

        Book(string book_name, Author author_name, double book_price);
        Book(string book_name, Author author_name, double book_price, int book_quantity);
        void setPrice (double book_price);
		string getBookName();
		Author getAuthorName();
		double getPrice();
		void setQuantity (int book_quantity);
		int getQuantity();
		string toString();

};
#endif


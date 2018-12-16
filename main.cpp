
/*
file: main.cpp
Description:prints the text out from the provided text document 
Author: Lucas Sowers
Email: lucass4918@student.vvc.edu
Date Created: 12/15/18
*/

    #include "concordance.h"
    #include "word.h"

    int main()
	{
	   Concordance con("alice.txt");
	   con.parse();   
	   con.print();
	

	   return 0;
        }  	

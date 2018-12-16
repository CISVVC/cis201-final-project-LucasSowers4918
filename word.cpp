/*
file: word.cpp
Description: 
Author: LucasSowers
Email: lucass4918@student.vvc.edu
Date Created: 12/1518 
*/

#include<iostream>
#include "word.h"

using namespace std;	

	Word::Word()
    {
	   m_count = 0;
    }
	
        Word::Word(std::string _word, int _line)
    { 
	   m_word = _word;
 	   m_lines.push_back(_line);

	   m_count = 1;
    }

        void Word::add_line(int _line)
    {
	   m_lines.push_back(_line);

	   m_count++;
    }

        int Word::get_count()
    {
	   return m_count;
        }

        void Word::print()
    {
	   std::cout << m_word << " : " << m_count << " : " << m_lines[0];
 	   for(int i=1; i < m_lines.size(); i++)
	{
		std::cout << ", "<< m_lines[i];
	}
	std::cout << std::endl;
    }   

        std::string Word::get_word()
    {
	return m_word;
    }


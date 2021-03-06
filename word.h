/*
File: word.h
description: creates the class for word 
Author: Lucas Sowers
Email: lucass4918@student.vvc.edu
Date Created: 12/15/18
*/

        #ifndef WORD_H
	#define WORD_H
	#include<vector>
	#include<string>
        #include<iostream>

    class Word

    {

    public:

	Word();

	Word(std::string _word, int _line); // constructor with peramaters

	void add_line(int _line);	//adds a line numebr to the m_lines vector and m_count++

	int get_count();	//accessor function

	void print();	//outputs - m_word : m_count : m_lines[0],m_lines[1]...

	std::string get_word(); //accessor function

    private:

	std::string m_word;

	int m_count;

	std::vector<int> m_lines;
    };
	

#endif

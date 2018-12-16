/*
File: concordance.h
description: 
Author: Lucas Sowers
Email: lucass4918@student.vvc.edu
Date Created: 12/15/18
*/

#ifndef CONCORDANCE_H
	#define CONCORDANCE_H
	#include "word.h"
	#include <iostream>
	#include <fstream>
	#include <string>
	#include <vector>
	

	class Concordance
	{
	public:
	    Concordance(std::string filename);
	    void parse();
	    std::string next_word(std::ifstream &input);
	    bool is_whitespace(char c);
	    bool is_punctuation(char c);
	    void eat_whitespace(std::ifstream &input);
	    int find_word(std::string word);
	    void print();
	    void add_word();
	private:
	    std::vector<Word> m_word_stats;
	    std::string m_filename;
	};
	

#endif

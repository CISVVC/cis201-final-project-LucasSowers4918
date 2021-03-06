/*
File: concordance.cpp
description:creates the concordance 
Author: Lucas Sowers
Email: lucass4918@student.vvc.edu
Date Created: 12/15/18
*/
#include "concordance.h"
	

	Concordance::Concordance(std::string filename)
	{
	    m_filename = filename;
	}
	

	void Concordance::parse()
	{
	    std::ifstream file(m_filename.c_str());
	    while(!file.eof())
	    {
	        std::string word = next_word(file);
	

	        std::cout << word << std::endl;
	    }
	}
	

	bool Concordance::is_whitespace(char c)
	{
	  return (c == ' ' || c == '\n' ||  c == '\t');
	}
	
	bool Concordance::is_punctuation(char c) // punctuation check 
	{
    	  return (c == ',' || c == '.' || c == '?' || 
          	  c == '(' || c == ')' || c == ':' ||
            	  c == '!' || c == ';' || c == '\'');	
        }

	void Concordance::eat_whitespace(std::ifstream& input)
	{
	    for(;;)
	    {
	        char c;
	        input.get(c);
	        if(input.eof())
	            break;
	        if(!is_whitespace(c))
	        {
	            input.putback(c); // Puts characters back on input stream
	            break;
	        }
	    }
	}
	

	std::string Concordance::next_word(std::ifstream& input)
	{
	    std::string word;
	    for(;;)
	    {
	        char c;
	        input.get(c);
	        if(input.eof())
	            break;
	        if(!is_whitespace(c))
	        {
	            word += c;
	        }
	        else
	        {
	            eat_whitespace(input);
	            break;
	        }
	    }
	    return word;
	}
	

	int Concordance::find_word(std::string word)
	{
	   
	}
	
         
	void Concordance::print()
	{
            // print out the concordance
	}


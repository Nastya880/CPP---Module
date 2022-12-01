/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:28:58 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/19 14:21:33 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int copyReplaceFile(std::string filename, std::fstream *infile, std::string s1, std::string s2)
{
	std::ofstream	outfile;
	std::string		str;
	size_t			pos;
	
	outfile.open(filename + ".replace");
    if (outfile.fail())
    {
        std::cout << "Error in openning file " << filename << std::endl;
        return (1);
    }
	while (getline(*infile, str))
	{
		pos = str.find(s1, 0);
		while (pos != std::string::npos)
		{
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos += s2.length();
			pos = str.find(s1, pos);
		}
		outfile << str << std::endl;
	}
	outfile.close();
    return (0);
}

int	main(int argc, char **argv)
{
	std::fstream	infile;
	std::string		filename;
	std::string		s1;
	std::string		s2;
    int             res;

    res = 0;
    if (argc != 4)
	{
		std::cout << "Invalid parametrs. This program takes a filename and two strings, s1 and s2" << std::endl;
		return (1);
	}

    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    
    infile.open(filename);
    if (!infile.is_open())
    {
        std::cout << "File " << filename << " doesn't exist" << std::endl;
        return (0);
    }
    res = copyReplaceFile(filename, &infile, s1, s2);
    infile.close();

	return (res);
}
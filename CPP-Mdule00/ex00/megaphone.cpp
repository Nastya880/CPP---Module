/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:23:09 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:35:39 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void write_word(char *word)
{
    int i;

    i = 0;
    while(word[i])
    {
        std::cout << (char)std::toupper(word[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        exit(0);
    }
    argv++;
    while(*argv)
    {
        write_word(*argv);
        argv++;
    }
    std::cout << std::endl;
}
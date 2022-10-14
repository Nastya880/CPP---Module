/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:36:26 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:36:27 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
//#include <string>
//#include <cstring>

class Contact
{
    public:
        std::string fname;
        std::string lname;
        std::string nickname;
        std::string phone;
        std::string secret;
        
        Contact(std::string fnam, std::string lnam, std::string nicknam, std::string phon, std::string secrett);
        Contact();

        void set_fname(std::string str);
        void set_lname(std::string str);
        void set_nickname(std::string str);
        void set_phone(std::string str);
        void set_secret(std::string str);

        std::string get_fname(void);
        std::string get_lname(void);
        std::string get_nickname(void);
        std::string get_phone(void);
        std::string get_secret(void);
};

#endif
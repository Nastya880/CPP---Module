/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:44:23 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:36:15 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string fname, std::string lname, std::string nickname, std::string phone, std::string secret) {
	this->fname = fname;
	this->lname = lname;
	this->nickname = nickname;
	this->phone = phone;
	this->secret = secret;
}

std::string Contact::get_fname() {
	return (this->fname);
}

std::string Contact::get_lname() {
	return (this->lname);
}

std::string Contact::get_nickname(){
	return (this->nickname);
}

std::string Contact::get_phone() {
	return (this->phone);
}

std::string Contact::get_secret() {
	return (this->secret);
}

void Contact::set_fname(std::string str) {
	this->fname = str;
}

void Contact::set_lname(std::string str) {
	this->lname = str;
}

void Contact::set_nickname(std::string str) {
	this->nickname = str;
}

void Contact::set_phone(std::string str) {
	this->phone = str;
}

void Contact::set_secret(std::string str) {
	this->secret = str;
}
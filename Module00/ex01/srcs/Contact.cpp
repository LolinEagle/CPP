/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:26:18 by frrusso           #+#    #+#             */
/*   Updated: 2022/10/14 13:26:24 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first(std::string first)
{
	this->first = first;
}

void	Contact::set_last(std::string last)
{
	this->last = last;
}

void	Contact::set_nick(std::string nick)
{
    this->nick = nick;
}

void	Contact::set_phone(std::string phone)
{
    this->phone = phone;
}

void	Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

std::string	Contact::get_first(void)
{
	return (this->first);
}

std::string	Contact::get_last(void)
{
	return (this->last);
}

std::string	Contact::get_nick(void)
{
	return (this->nick);
}

std::string	Contact::get_phone(void)
{
	return (this->phone);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}


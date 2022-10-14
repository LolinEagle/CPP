/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:22:27 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/07 15:22:34 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Contact
{
	private:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
	public:
		void	set_first(std::string first);
		void	set_last(std::string last);
		void	set_nick(std::string nick);
		void	set_phone(std::string phone);
		void	set_secret(std::string secret);
		std::string	get_first(void);
		std::string	get_last(void);
		std::string	get_nick(void);
		std::string	get_phone(void);
		std::string	get_secret(void);
};

#endif

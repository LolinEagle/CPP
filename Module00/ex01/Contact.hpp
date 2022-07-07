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
# define CONTACT_H

# include <iostream>

class Contact
{
	private:
		/* data */
	public:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
		Contact(/* args */);
		~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}



#endif

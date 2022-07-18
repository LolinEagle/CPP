/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:22:08 by frrusso           #+#    #+#             */
/*   Updated: 2022/07/07 15:22:18 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
	private:
		int		i;
		Contact	tab[8];
	public:
		void	set_contact(std::string line, int n);
		void	next_contact();
		int		print_all();
		PhoneBook();
};

#endif

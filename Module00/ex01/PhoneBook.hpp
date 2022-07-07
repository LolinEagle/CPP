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

// ◦ Contient un tableau de contacts.
// ◦ Peut enregistrer 8 contacts maximum. Si l’utilisateur tente d’ajouter un 9ème
// contact, remplacez le plus ancien par celui-ci.
// ◦ Notez que l’allocation dynamique est interdite.

class PhoneBook
{
private:
	/* data */
public:
	int	i;
	int	tab[8];
	PhoneBook(/* args */);
	~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
	int	i = 0;

	this->i = 0;
	while (i < 8)
	{
		this->tab[i] = 0;
		i++;
	}
}

PhoneBook::~PhoneBook()
{
}


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:53 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:31:55 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

// • PresidentialPardonForm (formulaire de pardon présidentiel) :
// Échelons requis : signature 25, exécution 5
// Informe que la <target> a été pardonnée par Zaphod Beeblebrox.
class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		// Constructor & Destructor
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &copy);

		// Exception

		// Function
		void	execute(Bureaucrat const & executor) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:43 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:32:44 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

// • ShrubberyCreationForm (formulaire de création d’arbustes) :
// Échelons requis : signature 145, exécution 137
// Créé un fichier <target>_shrubbery dans le répertoire courant, et écrit des arbres
// ASCII à l’intérieur.
class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	public:
		// Constructor & Destructor
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);

		// Exception

		// Function
		void	execute(Bureaucrat const & executor) const;
};

#endif

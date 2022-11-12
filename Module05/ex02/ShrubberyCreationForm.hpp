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
#include <fstream>

// • ShrubberyCreationForm (formulaire de création d’arbustes) :
// Échelons requis : signature 145, exécution 137
// Créé un fichier <target>_shrubbery dans le répertoire courant, et écrit des arbres
// ASCII à l’intérieur.
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

		// Function
		void	execute(Bureaucrat const & executor) const;
};

#endif

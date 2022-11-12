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

// • PresidentialPardonForm (formulaire de pardon présidentiel) :
// Échelons requis : signature 25, exécution 5
// Informe que la <target> a été pardonnée par Zaphod Beeblebrox.
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

		// Function
		void	execute(Bureaucrat const & executor) const;
};

#endif

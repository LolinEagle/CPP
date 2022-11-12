/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:19 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:32:21 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

// • RobotomyRequestForm (formulaire de demande de robotomie) :
// Échelons requis : signature 72, exécution 45
// Fait des bruits de perceuse. Ensuite, informe que la <target> a été robotomisée
// avec succès 50% du temps. Dans le cas contraire, informe que l’opération a échoué.
class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
	public:
		// Constructor & Destructor
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &copy);
		
		// Function
		void	execute(Bureaucrat const & executor) const;
};

#endif

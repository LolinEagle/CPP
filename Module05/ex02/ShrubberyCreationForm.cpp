/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:58 by frrusso           #+#    #+#             */
/*   Updated: 2022/11/08 13:32:00 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define SIGN 145
#define EXEC 137

ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("ShrubberyCreationForm", 0, SIGN, EXEC), _target("nobody")
{
	std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", 0, SIGN, EXEC), _target(target)
{
	std::cout << "ShrubberyCreationForm : String constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
AForm(copy.getName(), copy.getSigned(), copy.getGradeSign(), copy.getGradeExecuting()),
_target(copy._target)
{
	std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Default destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm : Assignment operator called" << std::endl;
	this->_target = copy._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::string		str(_target + "_shrubbery");
	std::ofstream	os(str.data());

	os << "         - - -" << std::endl;
	os << "       -        -  -     --    -" << std::endl;
	os << "    -                 -         -  -" << std::endl;
	os << "                    -" << std::endl;
	os << "                   -                --" << std::endl;
	os << "   -          -            -              -" << std::endl;
	os << "   -            '-,        -               -" << std::endl;
	os << "   -              'b      *" << std::endl;
	os << "    -              '$    #-                --" << std::endl;
	os << "   -    -           $:   #:               -" << std::endl;
	os << " --      -  --      *#  @):        -   - -" << std::endl;
	os << "              -     :@,@):   ,-**:'   -" << std::endl;
	os << "  -      -,         :@@*: --**'      -   -" << std::endl;
	os << "           '#o-    -:(@'-@*\"'  -" << std::endl;
	os << "   -  -       \'bq,--:,@@*\'   ,*      -  -" << std::endl;
	os << "              ,p$q8,:@)\'  -p*\'      -" << std::endl;
	os << "       -     \'  - \'@@Pp@@*\'    -  -" << std::endl;
	os << "        -  - --    Y7\'.\'     -  -" << std::endl;
	os << "                  :@):." << std::endl;
	os << "                 .:@:\'." << std::endl;
	os << "               .::(@:.      -Sam Blumenstein-" << std::endl;
}

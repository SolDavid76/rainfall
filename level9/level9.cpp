/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level9.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz & qcherel                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:02:00 by djanusz           #+#    #+#             */
/*   Updated: 2024/08/28 15:02:12 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

class N
{
	public:
		char annotation[108];
		typedef void (N::*FuncPtr)(char*);

		N(void);
		N(int a);
		void setAnnotation(char* str);
		~N();
};


void N::setAnnotation(char* str)
{
	memcpy(annotation, str, strlen(str));
}

N::N (void)
{
}

N::N (int a): annotation()
{
}

N::~N (void)
{
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	N *n1 = new N();
	N *n2 = new N();

	n1->setAnnotation(av[1]);

	void (* n)(char *);
	n(n1->annotation);
}
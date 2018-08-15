/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ntest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpirzent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:20:20 by jpirzent          #+#    #+#             */
/*   Updated: 2018/08/15 14:39:18 by jpirzent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int			dp = 100;
	int			dn = -123;
	char		*s = "i can print this out";
	int			*p;
	wchar_t		*ws = L"this is a widechar";
	long		ldp = 2000000;
	long		ldn = -3213210;
	int			ip = 258;
	int			in = -654;
	int			op = 200;
	int			on = -741;
	long		lop = 20000001;
	long		lon = -654321;
	int			up = 368;
	int			un = -985;
	long		lup = 9850147;
	long		lun = -6654217;
	int			xp = 257;
	int			xn = -5600;
	int			cxp = 500;
	int			cxn = -9875;
	char		c = 'y';
	wchar_t		wc = L'p';


	p = &ip;


	printf("{|STARTING TEST|}\n");
	printf("________________________________________________\n");
	
	printf("%%d positive test\n");
	ft_printf("ft_printf:\t%d\n", dp);
	printf("printf:	\t%d\n", dp);
	printf("________________________________________________\n");
	
	printf("%%d negative test\n");
	ft_printf("ft_printf:\t%d\n", dn);
	printf("printf:		%d\n", dn);
	printf("________________________________________________\n");

	printf("%%s test\n");
	ft_printf("ft_printf:	%s\n", s);
	printf("printf:	\t%s\n", s);
	printf("________________________________________________\n");

	printf("%%p test\n");
	ft_printf("ft_printf:	%p\n", p);
	printf("printf:	\t%p\n", p);
	printf("________________________________________________\n");


	printf("MIX TEST\n");
	ft_printf("ft_printf:\t%%s: %s\t%%d: %d\t\t%%s: %s\t%%p: %p\t%%d: %d\t%%p: %p\n", s, dp, s, p, dp, p);
	printf("printf:\t\t%%s: %s\t%%d: %d\t\t%%s: %s\t%%p: %p\t%%d: %d\t%%p: %p\n", s, dp, s, p, dp, p);
	printf("________________________________________________\n");
	
	printf("%%S test\n");
	ft_printf("ft_printf:	%S\n", ws);
	printf("printf:	\t%S\n", ws);
	printf("________________________________________________\n");
	
	printf("%%D positive test\n");
	ft_printf("ft_printf:	%D\n", ldp);
	printf("printf:	\t%ld\n", ldp);
	printf("________________________________________________\n");
	
	printf("%%D negative test\n");
	ft_printf("ft_printf:	%D\n", ldn);
	printf("printf:	\t%ld\n", ldn);
	printf("________________________________________________\n");
	
	printf("%%i positive test\n");
	ft_printf("ft_printf:	%i\n", ip);
	printf("printf:	\t%i\n", ip);
	printf("________________________________________________\n");
	
	printf("%%i negative test\n");
	ft_printf("ft_printf:	%i\n", in);
	printf("printf:	\t%i\n", in);
	printf("________________________________________________\n");
	
	printf("%%o positive test\n");
	ft_printf("ft_printf:	%o\n", op);
	printf("printf:	\t%o\n", op);
	printf("________________________________________________\n");
	
	printf("%%o negative test\n");
	ft_printf("ft_printf:	%o\n", on);
	printf("printf:	\t%o\n", on);
	printf("________________________________________________\n");
	
	printf("%%O positive test\n");
	ft_printf("ft_printf:	%O\n", lop);
	printf("printf:	\t%lo\n", lop);
	printf("________________________________________________\n");
	
	printf("%%O negative test\n");
	ft_printf("ft_printf:	%O\n", lon);
	printf("printf:	\t%lo\n", lon);
	printf("________________________________________________\n");
	
	printf("%%u positive test\n");
	ft_printf("ft_printf:	%u\n", up);
	printf("printf:	\t%u\n", up);
	printf("________________________________________________\n");
	
	printf("%%u negative test\n");
	ft_printf("ft_printf:	%u\n", un);
	printf("printf:	\t%u\n", un);
	printf("________________________________________________\n");
	
	printf("%%U positive test\n");
	ft_printf("ft_printf:	%U\n", lup);
	printf("printf:	\t%lu\n", lup);
	printf("________________________________________________\n");
	
	printf("%%U negative test\n");
	ft_printf("ft_printf:	%U\n", lun);
	printf("printf:\t	%lu\n", lun);
	printf("________________________________________________\n");
	
	printf("%%x positive test\n");
	ft_printf("ft_printf:	%x\n", xp);
	printf("printf:	\t%x\n", xp);
	printf("________________________________________________\n");


	printf("%%x negative test\n");
	ft_printf("ft_printf:	%x\n", xn);
	printf("printf:\t	%x\n", xn);
	printf("________________________________________________\n");
	
	
	printf("%%X positive test\n");
	ft_printf("ft_printf:	%X\n", cxp);
	printf("printf:	\t%X\n", cxp);
	printf("________________________________________________\n");
	
	
	printf("%%X negative test\n");
	ft_printf("ft_printf:	%X\n", cxn);
	printf("printf:	\t%X\n", cxn);
	printf("________________________________________________\n");
	
	
	printf("%%c test\n");
	ft_printf("ft_printf:	%c\n", c);
	printf("printf:	\t%c\n", c);
	printf("________________________________________________\n");
	
	
	printf("%%C test\n");
	ft_printf("ft_printf:	%C\n", wc);
	printf("printf:	\t%C\n", wc);
	printf("________________________________________________\n");

	printf("{|END OF TEST|}\n");
}

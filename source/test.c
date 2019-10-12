/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:15:34 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/12 18:28:03 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef enum type_e
{
	CHAR,
	SHORT,
	INT,
	FLOAT,
	DOUBLE,
	TYPE
}		tepe_t;

typedef void (*f_t)(void *, void *, void *);

void	sadd(void *one, void *two, void *result)
{
	*(short *)result = *(short *)one + *(short *)two;
}

void	tsadd(short *one, short *two, short *result)
{
	*result = *one + *two;
}

void	cadd(void *one, void *two, void *result)
{
	*(char *)result = *(char *)one + *(char *)two;
}

void	tcadd(char *one, char *two, char *result)
{
	*result = *one + *two;
}

void	fadd(void *one, void *two, void *result)
{
	*(float *)result = *(float *)one + *(float *)two;
}

void	tfadd(float *one, float *two, float *result)
{
	*result = *one + *two;
}

void	dadd(void *one, void *two, void *result)
{
	*(double *)result = *(double *)one + *(double *)two;
}

void	tdadd(double *one, double *two, double *result)
{
	*result = *one + *two;
}

void	add(void *one, void *two, void *result)
{
	*(int *)result = *(int *)one + *(int *)two;
}

void	tadd(int *one, int *two, int *result)
{
	*result = *one + *two;
}


void hello(void *one, void *two, void *result, f_t *f, int type)
{
	f[type](one, two, result);
}

void hello2(void *one, void *two, void *result, int type)
{
	if (type == CHAR)
		tcadd(one, two, result);
	else if (type == SHORT)
		tsadd(one, two, result);
	else if (type == INT)
		tadd(one, two, result);
	else if (type == FLOAT)
		tfadd(one, two, result);
	else if (type == DOUBLE)
		tdadd(one, two, result);
}

int main(void)
{
	f_t		*test;
	char	c = 3;
	char	lc = 8;
	char	rc = 0 ;
	short	s = 3;
	short	ls = 8;
	short	rs = 0;
	int		i = 3;
	int		li = 8;
	int		ri = 0;
	float 	f = 3.5f;
	float	lf = 4.5f;
	float	rf = 0.0f;
	double	d = 3.5;
	double	ld = 4.7;
	double	rd = 0.0;

	test = (f_t *)malloc(sizeof(f_t) * TYPE);
	test[CHAR]		= &cadd;
	test[SHORT]		= &sadd;
	test[INT]		= &add;
	test[FLOAT]		= &fadd;
	test[DOUBLE]	= &dadd;
	for (int j = 0; j < 10000000; ++j)
	{
		hello(&c, &lc, &rc, test, CHAR);
		hello(&s, &ls, &rs, test, SHORT);
		hello(&i, &li, &ri, test, INT);
		hello(&f, &lf, &rf, test, FLOAT);
		hello(&d, &ld, &rd, test, DOUBLE);
		//hello2(&c, &lc, &rc, CHAR);
		//hello2(&s, &ls, &rs, SHORT);
		//hello2(&i, &li, &ri, INT);
		//hello2(&f, &lf, &rf, FLOAT);
		//hello2(&d, &ld, &rd, DOUBLE);
		//rc = c + lc;
		//rs = s + ls;
		//ri = i + li;
		//rf = f + lf;
		//rd = d + ld;
	}
	printf("%d\n", rc);
	printf("%d\n", rs);
	printf("%d\n", ri);
	printf("%f\n", rf);
	printf("%f\n", rd);
	return (0);
}
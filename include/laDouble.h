/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laDouble.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:33:26 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/12 16:34:54 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LADOUBLE_H
# define LADOUBLE_H

typedef struct	s_dvec1
{
	double		x;
}				dvec1;

typedef	struct	s_dvec2
{
	double		x;
	double		y;
}				dvec2;

typedef struct	s_dvec3
{
	double		x;
	double		y;
	double		z;
}				dvec3;

typedef struct	s_dvec4
{
	double		x;
	double		y;
	double		z;
	double		w;
}				dvec4;

typedef struct	s_dmat1
{
	dvec1		x;
}				dmat1;

typedef struct	s_dmat2
{
	dvec2		x;
	dvec2		y;
}				dmat2;

typedef struct	s_dmat3
{
	dvec3		x;
	dvec3		y;
	dvec3		z;
}				dmat3;

typedef struct	s_dmat4
{
	dvec4		x;
	dvec4		y;
	dvec4		z;
	dvec4		w;
}				dmat4;

#endif
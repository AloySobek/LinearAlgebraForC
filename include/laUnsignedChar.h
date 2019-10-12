/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laUnsignedChar.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:36:26 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/12 16:38:59 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNISIGNEDCHAR_H
# define LAUNSIGNEDCHAR_H

typedef struct		s_ucvec1
{
	unsigned char	x;
}					ucvec1;

typedef	struct		s_ucvec2
{
	unsigned char	x;
	unsigned char	y;
}					ucvec2;

typedef struct		s_ucvec3
{
	unsigned char	x;
	unsigned char	y;
	unsigned char	z;
}					ucvec3;

typedef struct		s_ucvec4
{
	unsigned char	x;
	unsigned char	y;
	unsigned char	z;
	unsigned char	w;
}					ucvec4;

typedef struct	s_ucmat1
{
	ucvec1		x;
}				ucmat1;

typedef struct	s_ucmat2
{
	ucvec2		x;
	ucvec2		y;
}				ucmat2;

typedef struct	s_ucmat3
{
	ucvec3		x;
	ucvec3		y;
	ucvec3		z;
}				ucmat3;

typedef struct	s_ucmat4
{
	ucvec4		x;
	ucvec4		y;
	ucvec4		z;
	ucvec4		w;
}				ucmat4;

#endif
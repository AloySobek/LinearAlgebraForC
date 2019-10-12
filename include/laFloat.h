/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laFloat.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:33:32 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/12 16:35:10 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAFLOAT_H
# define LAFLOAT_H

typedef struct	s_fvec1
{
	float		x;
}				fvec1;

typedef	struct	s_vec2
{
	float		x;
	float		y;
}				fvec2;

typedef struct	s_fvec3
{
	float		x;
	float		y;
	float		z;
}				fvec3;

typedef struct	s_fvec4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				fvec4;

typedef struct	s_fmat1
{
	fvec1		x;
}				fmat1;

typedef struct	s_fmat2
{
	fvec2		x;
	fvec2		y;
}				fmat2;

typedef struct	s_fmat3
{
	fvec3		x;
	fvec3		y;
	fvec3		z;
}				fmat3;

typedef struct	s_fmat4
{
	fvec4		x;
	fvec4		y;
	fvec4		z;
	fvec4		w;
}				fmat4;

#endif
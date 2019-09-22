/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linearTypes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:58:32 by vrichese          #+#    #+#             */
/*   Updated: 2019/09/22 18:08:56 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINEARTYPES_H
# define LINEARTYPES_H

# define LA_BYTE		1
# define LA_UBYTE		2
# define LA_SHORT		3
# define LA_USHORT		4
# define LA_INT			5
# define LA_UINT		6
# define LA_FLOAT		7
# define LA_DOUBLE		8

typedef struct	s_vec1
{
	float		x;
}				fvec1;

typedef	struct	s_vec2
{
	float		x;
	float		y;
}				fvec2;

typedef struct	s_vec3
{
	float		x;
	float		y;
	float		z;
}				fvec3;

typedef struct	s_vec4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				fvec4;

typedef struct	s_vec1
{
	double		x;
}				vec1;

typedef	struct	s_vec2
{
	double		x;
	double		y;
}				vec2;

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				vec3;

typedef struct	s_vec4
{
	double		x;
	double		y;
	double		z;
	double		w;
}				vec4;

typedef struct	s_mat1
{
	float		x[1];
}				fmat1;

typedef struct	s_mat2
{
	float		x[2];
	float		y[2];
}				fmat2;

typedef struct	s_mat3
{
	float		x[3];
	float		y[3];
	float		z[3];
}				fmat3;

typedef struct	s_mat4
{
	float		x[4];
	float		y[4];
	float		z[4];
	float		w[4];
}				fmat4;

typedef struct	s_mat1
{
	double		x[1];
}				mat1;

typedef struct	s_mat2
{
	double		x[2];
	double		y[2];
}				mat2;

typedef struct	s_mat3
{
	double		x[3];
	double		y[3];
	double		z[3];
}				mat3;

typedef struct	s_mat4
{
	double		x[4];
	double		y[4];
	double		z[4];
	double		w[4];
}				mat4;

#endif
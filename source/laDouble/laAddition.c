/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laAddition.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:44:23 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/12 18:30:56 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linearTypes.h"

dvec1	laAddVec( *left_operand, void *right_operand, int dimension_type)
{

	result.x = left_operand.x + right_operand.x;
	return (result);
}

vec1	invert_vec1(vec1 vector)
{

}

vec1	substruction_vec1(vec1 left_operand, vec1 right_operand)
{
	vec1	result;

	result.x = left_operand.x - right_operand.x;
	return (result);
}

vec2	substruction_vec2(vec2 left_operand, vec2 right_operand)
{
	vec2	result;

	result.x = left_operand.x - right_operand.x;
	result.y = left_operand.y - right_operand.y;
	return (result);
}

vec3	substruction_vec3(vec3 left_operand, vec3 right_operand)
{
	vec3	result;

	result.x = left_operand.x - right_operand.x;
	result.y = left_operand.y - right_operand.y;
	result.z = left_operand.z - right_operand.z;
	return (result);
}

vec4	substruction_vec4(vec4 left_operand, vec4 right_operand)
{
	vec4	result;

	result.x = left_operand.x - right_operand.x;
	result.y = left_operand.y - right_operand.y;
	result.z = left_operand.z - right_operand.z;
	result.w = left_operand.w - right_operand.w;
	return (result);
}
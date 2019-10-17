/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laVectors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:00:50 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/17 17:49:37 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LLFC.h"

/*
** Initialization vector -----------------------------------------------------------
*/

void	laInit2DVector(vec2 *pSourceVector, float x, float y)
{
	if (!pSourceVector)
		return ;
	pSourceVector->data[LA_X] = x;
	pSourceVector->data[LA_Y] = y;
}

void	laInit3DVector(vec3 *pSourceVector, float x, float y, float z)
{
	if (!pSourceVector)
		return ;
	pSourceVector->data[LA_X] = x;
	pSourceVector->data[LA_Y] = y;
	pSourceVector->data[LA_Z] = z;
}

void	laInit4DVector(vec4 *pSourceVector, float x, float y, float z, float w)
{
	if (!pSourceVector)
		return ;
	pSourceVector->data[LA_X] = x;
	pSourceVector->data[LA_Y] = y;
	pSourceVector->data[LA_Z] = z;
	pSourceVector->data[LA_W] = w;
}

/*
** Addition vector -----------------------------------------------------------------
*/

void	laAdd2DVectors(vec2 *pLeftOperand, vec2 *pRightOperand, vec2 *pResultVector)
{
	if (!pResultVector || !pLeftOperand || !pRightOperand)
		return ;
	pResultVector->data[LA_X] = pLeftOperand->data[LA_X] + pRightOperand->data[LA_X];
	pResultVector->data[LA_Y] = pLeftOperand->data[LA_Y] + pRightOperand->data[LA_Y];
}

void	laAdd3DVectors(vec3 *pLeftOperand, vec3 *pRightOperand, vec3 *pResultVector)
{
	if (!pResultVector || !pLeftOperand || !pRightOperand)
		return ;
	pResultVector->data[LA_X] = pLeftOperand->data[LA_X] + pRightOperand->data[LA_X];
	pResultVector->data[LA_Y] = pLeftOperand->data[LA_Y] + pRightOperand->data[LA_Y];
	pResultVector->data[LA_Z] = pLeftOperand->data[LA_Z] + pRightOperand->data[LA_Z];
}

void	laAdd4DVectors(vec4 *pLeftOperand, vec4 *pRightOperand, vec4 *pResultVector)
{
	if (!pResultVector || !pLeftOperand || !pRightOperand)
		return ;
	pResultVector->data[LA_X] = pLeftOperand->data[LA_X] + pRightOperand->data[LA_X];
	pResultVector->data[LA_Y] = pLeftOperand->data[LA_Y] + pRightOperand->data[LA_Y];
	pResultVector->data[LA_Z] = pLeftOperand->data[LA_Z] + pRightOperand->data[LA_Z];
	pResultVector->data[LA_W] = pLeftOperand->data[LA_W] + pRightOperand->data[LA_W];
}

/*
** Subtraction vector ---------------------------------------------------------------
*/

void	laSub2DVectors(vec2 *pLeftOperand, vec2 *pRightOperand, vec2 *pResultVector)
{
	if (!pResultVector || !pLeftOperand || !pRightOperand)
		return ;
	pResultVector->data[LA_X] = pLeftOperand->data[LA_X] - pRightOperand->data[LA_X];
	pResultVector->data[LA_Y] = pLeftOperand->data[LA_Y] - pRightOperand->data[LA_Y];
}

void	laSub3DVectors(vec3 *pLeftOperand, vec3 *pRightOperand, vec3 *pResultVector)
{
	if (!pResultVector || !pLeftOperand || !pRightOperand)
		return ;
	pResultVector->data[LA_X] = pLeftOperand->data[LA_X] - pRightOperand->data[LA_X];
	pResultVector->data[LA_Y] = pLeftOperand->data[LA_Y] - pRightOperand->data[LA_Y];
	pResultVector->data[LA_Z] = pLeftOperand->data[LA_Z] - pRightOperand->data[LA_Z];
}

void	laSub4DVectors(vec4 *pLeftOperand, vec4 *pRightOperand, vec4 *pResultVector)
{
	if (!pResultVector || !pLeftOperand || !pRightOperand)
		return ;
	pResultVector->data[LA_X] = pLeftOperand->data[LA_X] - pRightOperand->data[LA_X];
	pResultVector->data[LA_Y] = pLeftOperand->data[LA_Y] - pRightOperand->data[LA_Y];
	pResultVector->data[LA_Z] = pLeftOperand->data[LA_Z] - pRightOperand->data[LA_Z];
	pResultVector->data[LA_W] = pLeftOperand->data[LA_W] - pRightOperand->data[LA_W];
}

/*
** Magnitude vector -----------------------------------------------------------------
*/

void	laGetMagnitude2DVector(vec2 *pSourceVector, float *pResult)
{
	if (!pSourceVector || !pResult)
		return ;
	*pResult = sqrtf(powf(pSourceVector->data[LA_X], 2.0f)
						+ powf(pSourceVector->data[LA_Y], 2.0f));
}

void	laGetMagnitude3DVector(vec3 *pSourceVector, float *pResult)
{
	if (!pSourceVector || !pResult)
		return ;
	*pResult = sqrtf(powf(pSourceVector->data[LA_X], 2.0f)
						+ powf(pSourceVector->data[LA_Y], 2.0f)
							+ powf(pSourceVector->data[LA_Z], 2.0f));
}

void	laGetMagnitude4DVector(vec4 *pSourceVector, float *pResult)
{
	if (!pSourceVector || !pResult)
		return ;
	*pResult = sqrtf(powf(pSourceVector->data[LA_X], 2.0f)
						+ powf(pSourceVector->data[LA_Y], 2.0f)
							+ powf(pSourceVector->data[LA_Z], 2.0f)
								+ powf(pSourceVector->data[LA_W], 2.0f));
}

/*
** Normalize vector -----------------------------------------------------------------
*/

void	laNormalize2DVector(vec2 *pSourceVector, vec2 *pResultVector)
{
	float	length;

	if (!pSourceVector || pResultVector)
		return ;
	length = sqrtf(powf(pSourceVector->data[LA_X], 2.0f)
						+ powf(pSourceVector->data[LA_Y], 2.0f));
	length = 1 / length;
	pResultVector->data[LA_X] = pSourceVector->data[LA_X] * length;
	pResultVector->data[LA_Y] = pSourceVector->data[LA_Y] * length;
}

void	laNormalize3DVector(vec3 *pSourceVector, vec3 *pResultVector)
{
	float	length;

	if (!pSourceVector || pResultVector)
		return ;
	length	= sqrtf(powf(pSourceVector->data[LA_X], 2.0f)
						+ powf(pSourceVector->data[LA_Y], 2.0f)
							+ powf(pSourceVector->data[LA_Z], 2.0f));
	length = 1 / length;
	pResultVector->data[LA_X] = pSourceVector->data[LA_X] * length;
	pResultVector->data[LA_Y] = pSourceVector->data[LA_Y] * length;
	pResultVector->data[LA_Z] = pSourceVector->data[LA_Z] * length;
}

void	laNormalize4DVector(vec4 *pSourceVector, vec4 *pResultVector)
{
	float	length;

	if (!pSourceVector || pResultVector)
		return ;
	length	= sqrtf(powf(pSourceVector->data[LA_X], 2.0f)
						+ powf(pSourceVector->data[LA_Y], 2.0f)
							+ powf(pSourceVector->data[LA_Z], 2.0f)
								+ powf(pSourceVector->data[LA_W], 2.0f));
	length = 1 / length;
	pResultVector->data[LA_X] = pSourceVector->data[LA_X] * length;
	pResultVector->data[LA_Y] = pSourceVector->data[LA_Y] * length;
	pResultVector->data[LA_Z] = pSourceVector->data[LA_Z] * length;
	pResultVector->data[LA_W] = pSourceVector->data[LA_W] * length;
}

/*
** Opposite vector -------------------------------------------------------------------
*/

void	laOpposite2DVector(vec2 *pSourceVector, vec2 *pResultVector)
{
	if (!pSourceVector || !pResultVector)
		return ;
	pResultVector->data[LA_X] = -pSourceVector->data[LA_X];
	pResultVector->data[LA_Y] = -pSourceVector->data[LA_Y];
}

void	laOpposite3DVector(vec3 *pSourceVector, vec3 *pResultVector)
{
	if (!pSourceVector || !pResultVector)
		return ;
	pResultVector->data[LA_X] = -pSourceVector->data[LA_X];
	pResultVector->data[LA_Y] = -pSourceVector->data[LA_Y];
	pResultVector->data[LA_Z] = -pSourceVector->data[LA_Z];
}

void	laOpposite4DVector(vec4 *pSourceVector, vec4 *pResultVector)
{
	if (!pSourceVector || !pResultVector)
		return ;
	pResultVector->data[LA_X] = -pSourceVector->data[LA_X];
	pResultVector->data[LA_Y] = -pSourceVector->data[LA_Y];
	pResultVector->data[LA_Z] = -pSourceVector->data[LA_Z];
	pResultVector->data[LA_W] = -pSourceVector->data[LA_W];
}

/*
** Scalar Product vector --------------------------------------------------------------
*/

void	laScalarProduct2DVector(vec2 *pSourceVector, float scalar, vec2 *pResultVector)
{
	if (!pSourceVector || !pResultVector)
		return ;
	pResultVector->data[LA_X] = scalar * pSourceVector->data[LA_X];
	pResultVector->data[LA_Y] = scalar * pSourceVector->data[LA_Y];
}

void	laScalarProduct3DVector(vec3 *pSourceVector, float scalar, vec3 *pResultVector)
{
	if (!pSourceVector || !pResultVector)
		return ;
	pResultVector->data[LA_X] = scalar * pSourceVector->data[LA_X];
	pResultVector->data[LA_Y] = scalar * pSourceVector->data[LA_Y];
	pResultVector->data[LA_Z] = scalar * pSourceVector->data[LA_Z];
}

void	laScalarProduct4DVector(vec4 *pSourceVector, float scalar, vec4 *pResultVector)
{
	if (!pSourceVector || !pResultVector)
		return ;
	pResultVector->data[LA_X] = scalar * pSourceVector->data[LA_X];
	pResultVector->data[LA_Y] = scalar * pSourceVector->data[LA_Y];
	pResultVector->data[LA_Z] = scalar * pSourceVector->data[LA_Z];
	pResultVector->data[LA_W] = scalar * pSourceVector->data[LA_W];
}

/*
** Dot Product vector ------------------------------------------------------------------
*/

void	laDotProduct2DVectors(vec2 *pLeftVector, vec2 *pRightVector, float *pResult)
{
	if (!pLeftVector || !pRightVector || !pResult)
		return ;
	*pResult	= pLeftVector->data[LA_X] * pRightVector->data[LA_X]
				+ pLeftVector->data[LA_Y] * pRightVector->data[LA_Y];
}

void	laDotProduct3DVectors(vec3 *pLeftVector, vec3 *pRightVector, float *pResult)
{
	if (!pLeftVector || !pRightVector || !pResult)
		return ;
	*pResult	= pLeftVector->data[LA_X] * pRightVector->data[LA_X]
				+ pLeftVector->data[LA_Y] * pRightVector->data[LA_Y]
				+ pLeftVector->data[LA_Z] * pRightVector->data[LA_Z];
}

void	laDotProduct4DVectors(vec4 *pLeftVector, vec4 *pRightVector, float *pResult)
{
	if (!pLeftVector || !pRightVector || !pResult)
		return ;
	*pResult	= pLeftVector->data[LA_X] * pRightVector->data[LA_X]
				+ pLeftVector->data[LA_Y] * pRightVector->data[LA_Y]
				+ pLeftVector->data[LA_Z] * pRightVector->data[LA_Z]
				+ pLeftVector->data[LA_W] * pRightVector->data[LA_W];
}

/*
** Cosine vector ----------------------------------------------------------------------
*/

void	laGetCosBetween2DVectors(vec2 *pLeftVector, vec2 *pRightVector, float *pResult)
{
	float	dotProduct;
	float	leftVectorLength;
	float	rightVectorLength;

	if (!pLeftVector || !pRightVector || !pResult)
		return ;
	dotProduct	= pLeftVector->data[LA_X] * pRightVector->data[LA_X]
				+ pLeftVector->data[LA_Y] * pRightVector->data[LA_Y];
	leftVectorLength	= sqrtf(powf(pLeftVector->data[LA_X], 2.0f)
								+ powf(pLeftVector->data[LA_Y], 2.0f));
	rightVectorLength	= sqrtf(powf(pRightVector->data[LA_X], 2.0f)
								+ powf(pRightVector->data[LA_Y], 2.0f));
	*pResult = dotProduct / (leftVectorLength * rightVectorLength);
}

void	laGetCosBetween3DVectors(vec3 *pLeftVector, vec3 *pRightVector, float *pResult)
{
	float	dotProduct;
	float	leftVectorLength;
	float	rightVectorLength;

	if (!pLeftVector || !pRightVector || !pResult)
		return ;
	dotProduct	= pLeftVector->data[LA_X] * pRightVector->data[LA_X]
				+ pLeftVector->data[LA_Y] * pRightVector->data[LA_Y]
				+ pLeftVector->data[LA_Z] * pRightVector->data[LA_Z];
	leftVectorLength	= sqrtf(powf(pLeftVector->data[LA_X], 2.0f)
								+ powf(pLeftVector->data[LA_Y], 2.0f)
									+ powf(pLeftVector->data[LA_Z], 2.0f));
	rightVectorLength	= sqrtf(powf(pRightVector->data[LA_X], 2.0f)
								+ powf(pRightVector->data[LA_Y], 2.0f)
									+ powf(pRightVector->data[LA_Z], 2.0f));
	*pResult = dotProduct / (leftVectorLength * rightVectorLength);
}

void	laGetCosBetween4DVectors(vec4 *pLeftVector, vec4 *pRightVector, float *pResult)
{
	float	dotProduct;
	float	leftVectorLength;
	float	rightVectorLength;

	if (!pLeftVector || !pRightVector || !pResult)
		return ;
	dotProduct	= pLeftVector->data[LA_X] * pRightVector->data[LA_X]
				+ pLeftVector->data[LA_Y] * pRightVector->data[LA_Y]
				+ pLeftVector->data[LA_Z] * pRightVector->data[LA_Z]
				+ pLeftVector->data[LA_W] * pRightVector->data[LA_W];
	leftVectorLength	= sqrtf(powf(pLeftVector->data[LA_X], 2.0f)
								+ powf(pLeftVector->data[LA_Y], 2.0f)
									+ powf(pLeftVector->data[LA_Z], 2.0f)
										+ powf(pLeftVector->data[LA_W], 2.0f));
	rightVectorLength	= sqrtf(powf(pRightVector->data[LA_X], 2.0f)
								+ powf(pRightVector->data[LA_Y], 2.0f)
									+ powf(pRightVector->data[LA_Z], 2.0f)
										+ powf(pRightVector->data[LA_W], 2.0f));
	*pResult = dotProduct / (leftVectorLength * rightVectorLength);
}

/*
** Cross Product vector ---------------------------------------------------------------
*/

void	laCrossProduct3DVectors(vec3 *pBasisVector, vec3 *pLeftVector, vec3 *pRightVector, vec3 *pResultVector)
{
	mat3	matrix;
	float	det;
	float	subMatrix[3];

	laInit3DMatrix(&matrix, pBasisVector, pLeftVector, pRightVector, (void *)0);
	laGetDeterminant3DMatrix(&matrix, &det, subMatrix);
	pResultVector->data[LA_X] = subMatrix[0];
	pResultVector->data[LA_Y] = -subMatrix[1];
	pResultVector->data[LA_Z] = subMatrix[2];
}

/*
** Main for testing -------------------------------------------------------------------
*/

// int main(int argc, char **argv)
// {
// 	vec3	test;
// 	vec3	test2;
// 	vec3	basis;

// 	laInit3DVector(&test, 3.0f, 1.0f, 7.0f);
// 	laInit3DVector(&test2, 7.0f, 4.0f, 2.0f);
// 	laInit3DVector(&basis, 1.0f, 1.0f, 1.0f);
// 	laCrossProduct3DVectors(&basis, &test, &test2, &test);

// 	printf("%f\n%f\n%f\n", test.data[LA_X], test.data[LA_Y], test.data[LA_Z]);
// }
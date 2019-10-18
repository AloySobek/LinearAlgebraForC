/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laMatrix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:45:14 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/18 20:17:57 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LLFC.h"

/*
** Initialization matrix ------------------------------------------------------------------------------------------------
*/

mat2		laInit2DMatrix(mat2 *pSourceMatrix, vec2 *pFirstVector, vec2 *pSecondVector, float *pInitArray, float *pOneValue)
{
	mat2	newMatrix;

	if (pFirstVector && pSecondVector)
		for (int y = 0; y < LA_2D; ++y)
		{
			newMatrix.data[y][LA_X] = pFirstVector->data[y];
			newMatrix.data[y][LA_Y] = pSecondVector->data[y];
		}
	else if (pInitArray)
		for (int y = 0; y < LA_2D; ++y)
			for (int x = 0; x < LA_2D; ++x)
				newMatrix.data[y][x] = pInitArray[x + (y * LA_2D)];
	else if (pOneValue)
		for (int y = 0; y < LA_2D; ++y)
			for(int x = 0; x < LA_2D; ++x)
				newMatrix.data[y][x] = *pOneValue;
	if (pSourceMatrix)
	{
		*pSourceMatrix = newMatrix;
		return (*pSourceMatrix);
	}
	return (newMatrix);
}

mat3		laInit3DMatrix(mat3 *pSourceMatrix, vec3 *pFirstVector, vec3 *pSecondVector,
						vec3 *pThirdVector, float *pInitArray, float *pOneValue)
{
	mat3	newMatrix;

	if (pFirstVector && pSecondVector && pThirdVector)
		for (int y = 0; y < LA_3D; ++y)
		{
			newMatrix.data[y][LA_X] = pFirstVector->data[y];
			newMatrix.data[y][LA_Y] = pSecondVector->data[y];
			newMatrix.data[y][LA_Z] = pThirdVector->data[y];
		}
	else if (pInitArray)
		for (int y = 0; y < LA_3D; ++y)
			for (int x = 0; x < LA_3D; ++x)
				newMatrix.data[y][x] = pInitArray[x + (y * LA_3D)];
	else if (pOneValue)
		for (int y = 0; y < LA_3D; ++y)
			for(int x = 0; x < LA_3D; ++x)
				newMatrix.data[y][x] = *pOneValue;
	if (pSourceMatrix)
	{
		*pSourceMatrix = newMatrix;
		return (*pSourceMatrix);
	}
	return (newMatrix);
}

mat4		laInit4DMatrix(mat4 *pSourceMatrix, vec4 *pFirstVector, vec4 *pSecondVector,
						vec4 *pThirdVector, vec4 *pFourthVector, float *pInitArray, float *pOneValue)
{
	mat4	newMatrix;

	if (pFirstVector && pSecondVector && pThirdVector && pFourthVector)
		for (int y = 0; y < 4; ++y)
		{
			newMatrix.data[y][LA_X] = pFirstVector->data[y];
			newMatrix.data[y][LA_Y] = pSecondVector->data[y];
			newMatrix.data[y][LA_Z] = pThirdVector->data[y];
			newMatrix.data[y][LA_W] = pFourthVector->data[y];
		}
	else if (pOneValue)
		for (int y = 0; y < LA_4D; ++y)
			for (int x = 0; x < LA_4D; ++x)
				newMatrix.data[y][x] = pInitArray[x + (y * LA_4D)];
	else if (pOneValue)
		for (int y = 0; y < LA_4D; ++y)
			for (int x = 0; x < LA_4D; ++x)
				newMatrix.data[y][x] = *pOneValue;
	if (pSourceMatrix)
	{
		*pSourceMatrix = newMatrix;
		return (*pSourceMatrix);
	}
	return (newMatrix);
}

/*
** Copy matrix ----------------------------------------------------------------------------------------
*/

mat2	laCopy2DMatrix(mat2 *pSourceMatrix, mat2 *pResultMatrix)
{
	mat2	newMatrix;

	if (!pSourceMatrix)
		return (newMatrix);
	if (pResultMatrix)
	{
		for (int y = 0; y < LA_2D; ++y)
			for(int x = 0; x < LA_2D; ++x)
				pResultMatrix->data[y][x] = pSourceMatrix->data[y][x];
		return (*pResultMatrix);
	}
	else
	{
		for (int y = 0; y < LA_2D; ++y)
			for(int x = 0; x < LA_2D; ++x)
				newMatrix.data[y][x] = pSourceMatrix->data[y][x];
		return (newMatrix);
	}
}

mat3	laCopy3DMatrix(mat3 *pSourceMatrix, mat3 *pResultMatrix)
{
	mat3	newMatrix;

	if (!pSourceMatrix)
		return (newMatrix);
	if (pResultMatrix)
	{
		for (int y = 0; y < LA_3D; ++y)
			for(int x = 0; x < LA_3D; ++x)
				pResultMatrix->data[y][x] = pSourceMatrix->data[y][x];
		return (*pResultMatrix);
	}
	else
	{
		for (int y = 0; y < LA_3D; ++y)
			for(int x = 0; x < LA_3D; ++x)
				newMatrix.data[y][x] = pSourceMatrix->data[y][x];
		return (newMatrix);
	}
}

mat4	laCopy4DMatrix(mat4 *pSourceMatrix, mat4 *pResultMatrix)
{
	mat4	newMatrix;

	if (!pSourceMatrix)
		return (newMatrix);
	if (pResultMatrix)
	{
		for (int y = 0; y < LA_4D; ++y)
			for(int x = 0; x < LA_4D; ++x)
				pResultMatrix->data[y][x] = pSourceMatrix->data[y][x];
		return (*pResultMatrix);
	}
	else
	{
		for (int y = 0; y < LA_4D; ++y)
			for(int x = 0; x < LA_4D; ++x)
				newMatrix.data[y][x] = pSourceMatrix->data[y][x];
		return (newMatrix);
	}
}

/*
** Addition matrix ------------------------------------------------------------------------------------
*/

void	laAdd2DMatrix(mat2 *pLeftOperand, mat2 *pRightOperand, mat2 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	for (int y = 0; y < LA_2D; ++y)
	{
		pResultMatrix->data[y][LA_X] = pLeftOperand->data[y][LA_X] + pRightOperand->data[y][LA_X];
		pResultMatrix->data[y][LA_Y] = pLeftOperand->data[y][LA_Y] + pRightOperand->data[y][LA_Y];
	}

}

void	laAdd3DMatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	for (int y = 0; y < LA_3D; ++y)
	{
		pResultMatrix->data[y][LA_X] = pLeftOperand->data[y][LA_X] + pRightOperand->data[y][LA_X];
		pResultMatrix->data[y][LA_Y] = pLeftOperand->data[y][LA_Y] + pRightOperand->data[y][LA_Y];
		pResultMatrix->data[y][LA_Z] = pLeftOperand->data[y][LA_Z] + pRightOperand->data[y][LA_Z];
	}
}

void	laAdd4DMatrix(mat4 *pLeftOperand, mat4 *pRightOperand, mat4 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	for (int y = 0; y < LA_4D; ++y)
	{
		pResultMatrix->data[y][LA_X] = pLeftOperand->data[y][LA_X] + pRightOperand->data[y][LA_X];
		pResultMatrix->data[y][LA_Y] = pLeftOperand->data[y][LA_Y] + pRightOperand->data[y][LA_Y];
		pResultMatrix->data[y][LA_Z] = pLeftOperand->data[y][LA_Z] + pRightOperand->data[y][LA_Z];
		pResultMatrix->data[y][LA_W] = pLeftOperand->data[y][LA_W] + pRightOperand->data[y][LA_W];
	}
}

/*
** Subtraction matrix ----------------------------------------------------------------------------------
*/

void	laSub2DMatrix(mat2 *pLeftOperand, mat2 *pRightOperand, mat2 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	for (int y = 0; y < LA_2D; ++y)
	{
		pResultMatrix->data[y][LA_X] = pLeftOperand->data[y][LA_X] - pRightOperand->data[y][LA_X];
		pResultMatrix->data[y][LA_Y] = pLeftOperand->data[y][LA_Y] - pRightOperand->data[y][LA_Y];
	}
}

void	laSub3DMatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	for (int y = 0; y < LA_3D; ++y)
	{
		pResultMatrix->data[y][LA_X] = pLeftOperand->data[y][LA_X] - pRightOperand->data[y][LA_X];
		pResultMatrix->data[y][LA_Y] = pLeftOperand->data[y][LA_Y] - pRightOperand->data[y][LA_Y];
		pResultMatrix->data[y][LA_Z] = pLeftOperand->data[y][LA_Z] - pRightOperand->data[y][LA_Z];
	}
}

void	laSub4DMatrix(mat4 *pLeftOperand, mat4 *pRightOperand, mat4 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	for (int y = 0; y < LA_4D; ++y)
	{
		pResultMatrix->data[y][LA_X] = pLeftOperand->data[y][LA_X] - pRightOperand->data[y][LA_X];
		pResultMatrix->data[y][LA_Y] = pLeftOperand->data[y][LA_Y] - pRightOperand->data[y][LA_Y];
		pResultMatrix->data[y][LA_Z] = pLeftOperand->data[y][LA_Z] - pRightOperand->data[y][LA_Z];
		pResultMatrix->data[y][LA_W] = pLeftOperand->data[y][LA_W] - pRightOperand->data[y][LA_W];
	}
}

/*
** Determinant matrix ---------------------------------------------------------------------------------
*/

void	laGetDeterminant2DMatrix(mat2 *pSourceMatrix, float *pResult)
{
	if (!pSourceMatrix || !pResult)
		return ;
	*pResult = pSourceMatrix->data[LA_X][LA_X] * pSourceMatrix->data[LA_Y][LA_Y]
				- pSourceMatrix->data[LA_X][LA_Y] * pSourceMatrix->data[LA_Y][LA_X];
}

void	laGetDeterminant3DMatrix(mat3 *pSourceMatrix, float *pResult, float *pSubMatrixArray)
{
	mat2	topSubMatrix;
	mat2	middleSubMatrix;
	mat2	bottomSubMatrix;
	float	firstResult;
	float	secondResult;
	float	thirdResult;
	int		y;
	int		x;

	y = -1;
	while (++y < 2 && (x = -1))
		while (++x < 2)
		{
			topSubMatrix.data[y][x]		= pSourceMatrix->data[y][x + 1];
			bottomSubMatrix.data[y][x]	= pSourceMatrix->data[y + 1][x + 1];
			middleSubMatrix.data[y][x]	= pSourceMatrix->data[y + (y % 2)][x + 1];
		}
	laGetDeterminant2DMatrix(&bottomSubMatrix, &firstResult);
	laGetDeterminant2DMatrix(&middleSubMatrix, &secondResult);
	laGetDeterminant2DMatrix(&topSubMatrix, &thirdResult);
	*pResult = pSourceMatrix->data[LA_X][LA_X] * firstResult
					+ -pSourceMatrix->data[LA_Y][LA_X] * secondResult
						+ pSourceMatrix->data[LA_Z][LA_X] * thirdResult;
	if (pSubMatrixArray)
	{
		pSubMatrixArray[0] = firstResult;
		pSubMatrixArray[1] = secondResult;
		pSubMatrixArray[2] = thirdResult;
	}
}

void	laGetDeterminant4DMatrix(mat4 *pSourceMatrix, float *pResult, float *pSubMatrixArray)
{
	mat3	topSubMatrix;
	mat3	middleSubFirstMatrix;
	mat3	middleSubSecondMatrix;
	mat3	bottomSubMatrix;
	float	firstResult;
	float	secondResult;
	float	thirdResult;
	float	fourthResult;
	int		x;
	int		y;

	y = -1;
	while (++y < 3 && (x = - 1))
		while(++x < 3)
		{
			topSubMatrix.data[y][x]				= pSourceMatrix->data[y][x + 1];
			middleSubFirstMatrix.data[y][x]		= pSourceMatrix->data[y + (y > 0)][x + 1];
			middleSubSecondMatrix.data[y][x]	= pSourceMatrix->data[y + (y > 1)][x + 1];
			bottomSubMatrix.data[y][x]			= pSourceMatrix->data[y + 1][x + 1];
		}
	laGetDeterminant3DMatrix(&bottomSubMatrix, &firstResult, NULL);
	laGetDeterminant3DMatrix(&middleSubFirstMatrix, &secondResult, NULL);
	laGetDeterminant3DMatrix(&middleSubSecondMatrix, &thirdResult, NULL);
	laGetDeterminant3DMatrix(&topSubMatrix, &fourthResult, NULL);
	*pResult = pSourceMatrix->data[LA_X][LA_X] * firstResult
				+ -pSourceMatrix->data[LA_Y][LA_X] * secondResult
					+ pSourceMatrix->data[LA_Z][LA_X] * thirdResult
						+ -pSourceMatrix->data[LA_W][LA_X] * fourthResult;
	if (pSubMatrixArray)
	{
		pSubMatrixArray[0] = firstResult;
		pSubMatrixArray[1] = secondResult;
		pSubMatrixArray[2] = thirdResult;
		pSubMatrixArray[3] = fourthResult;
	}
}

/*
** Multiply matrix ----------------------------------------------------------------------------------
*/

void	laMul3Dmatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix)
{
	mat3	tmp;
	float	total;
	int		iter;
	int		x;
	int		y;

	total = 0.0f;
	if (pLeftOperand == pResultMatrix)
	{
		laInit3DMatrix(&tmp, NULL, NULL, NULL, NULL, &total);
		laCopy3DMatrix(pLeftOperand, &tmp);
	}
	else
		tmp = *pResultMatrix;
	x = -1;
	while (++x < 3 && (y = -1))
		while (++y < 3 && (iter = -1) && (total = 0.0f) > -1)
		{
			while (++iter < 3)
				total += tmp.data[y][iter] * pRightOperand->data[iter][x];
			pResultMatrix->data[y][x] = total;
		}
}

/*
** Some Transoformation matrix ----------------------------------------------------------------------
*/

void	laXaxisRotation(mat3 *pSourceMatrix, float *pAngle)
{
	float null;

	if (!pSourceMatrix || !pAngle)
		return ;
	null = 0.0f;
	laInit3DMatrix(pSourceMatrix, NULL, NULL, NULL, NULL, &null);
	pSourceMatrix->data[LA_Y][LA_Y] = cosf(*pAngle);
	pSourceMatrix->data[LA_Z][LA_Y] = -sinf(*pAngle);
	pSourceMatrix->data[LA_Y][LA_Z] = sinf(*pAngle);
	pSourceMatrix->data[LA_Z][LA_Z] = cos(*pAngle);
	pSourceMatrix->data[LA_X][LA_X] = 1.0f;
}

void	laYaxisRotation(mat3 *pSourceMatrix, float *pAngle)
{
	float null;

	if (!pSourceMatrix || !pAngle)
		return ;
	null = 0.0f;
	laInit3DMatrix(pSourceMatrix, NULL, NULL, NULL, NULL, &null);
	pSourceMatrix->data[LA_X][LA_X] = cosf(*pAngle);
	pSourceMatrix->data[LA_Z][LA_X] = sinf(*pAngle);
	pSourceMatrix->data[LA_X][LA_Z] = -sinf(*pAngle);
	pSourceMatrix->data[LA_Z][LA_Z] = cosf(*pAngle);
	pSourceMatrix->data[LA_Y][LA_Y] = 1.0f;
}

void	laZaxisRotation(mat3 *pSourceMatrix, float *pAngle)
{
	float null;

	if (!pSourceMatrix || !pAngle)
		return ;
	null = 0.0f;
	laInit3DMatrix(pSourceMatrix, NULL, NULL, NULL, NULL, &null);
	pSourceMatrix->data[LA_X][LA_X] = cosf(*pAngle);
	pSourceMatrix->data[LA_Y][LA_X] = -sinf(*pAngle);
	pSourceMatrix->data[LA_X][LA_Y] = cosf(*pAngle);
	pSourceMatrix->data[LA_Y][LA_Y] = sinf(*pAngle);
	pSourceMatrix->data[LA_Z][LA_Z] = 1.0f;
}

void	laRotate(mat3 *pSourceMatrix, vec3 *pRotateVector)
{
	mat3	xRot;
	mat3	yRot;
	mat3	zRot;
	mat3	xyzRot;
	float	null;

	null = 0.0f;
	laXaxisRotation(&xRot, &pRotateVector->data[LA_X]);
	laYaxisRotation(&yRot, &pRotateVector->data[LA_Y]);
	laZaxisRotation(&zRot, &pRotateVector->data[LA_Z]);
	laInit3DMatrix(&xyzRot, NULL, NULL, NULL, NULL, &null);
	laMul3Dmatrix(&xRot, &yRot, &xyzRot);
	laMul3Dmatrix(&zRot, &xyzRot, &xyzRot);
	laMul3Dmatrix(&xyzRot, pSourceMatrix, pSourceMatrix);
}

/*
** For testing ---------------------------------------------------------------------------------------
*/

// int main(int argc, char **argv)
// {
// 	vec3 one;
// 	vec3 two;
// 	vec3 three;
// 	vec3 rot;
// 	mat3 matrix;
// 	float test = 0.0f;

// 	laInit3DVector(&one, 1.0f, 0.0f, 0.0f, NULL);

// 	laInit3DVector(&two, 0.0f, 1.0f, 0.0f, NULL);
// 	laInit3DVector(&three, 0.0f, 0.0f, 1.0f, NULL);
// 	laInit3DVector(&rot, 30.0f, 0.0f, 0.0f, NULL);
// 	laInit3DMatrix(&matrix, &one, &two, &three, NULL, NULL);
// 	laRotate(&matrix, &rot);
// 	for (int y = 0; y < 3; ++y)
// 	{
// 		for (int x = 0; x < 3; ++x)
// 			printf("%f ", matrix.data[y][x]);
// 		printf("\n");
// 	}
// 	return (0);
// }
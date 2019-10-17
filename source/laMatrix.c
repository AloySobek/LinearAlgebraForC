/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laMatrix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:45:14 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/17 21:25:44 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LLFC.h"

/*
** Initialization matrix ------------------------------------------------------------------------------------------------
*/

void	laInit2DMatrix(mat2 *pSourceMatrix, vec2 *pFirstVector, vec2 *pSecondVector, float *pInitArray, float *pOneValue)
{
	if (!pSourceMatrix || (!pFirstVector && !pInitArray && !pSecondVector))
		return ;
	if (!pInitArray)
	{
		pSourceMatrix->data[LA_X][LA_X] = pFirstVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_X] = pFirstVector->data[LA_Y];

		pSourceMatrix->data[LA_X][LA_Y] = pSecondVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_Y] = pSecondVector->data[LA_Y];
	}
	else if (pOneValue)
	{
		pSourceMatrix->data[LA_X][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_X][LA_Y] = *pOneValue;

		pSourceMatrix->data[LA_Y][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_Y][LA_Y] = *pOneValue;
	}
	else
	{
		pSourceMatrix->data[LA_X][LA_X] = pInitArray[0];
		pSourceMatrix->data[LA_X][LA_Y] = pInitArray[1];

		pSourceMatrix->data[LA_Y][LA_X] = pInitArray[2];
		pSourceMatrix->data[LA_Y][LA_Y] = pInitArray[3];
	}
}

void	laInit3DMatrix(mat3 *pSourceMatrix, vec3 *pFirstVector, vec3 *pSecondVector, vec3 *pThirdVector, float *pInitArray, float *pOneValue)
{
	if (!pSourceMatrix || (!pFirstVector && !pInitArray && !pSecondVector && !pThirdVector && !pOneValue))
		return ;
	if (!pInitArray && !pOneValue)
	{
		pSourceMatrix->data[LA_X][LA_X] = pFirstVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_X] = pFirstVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_X] = pFirstVector->data[LA_Z];

		pSourceMatrix->data[LA_X][LA_Y] = pSecondVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_Y] = pSecondVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_Y] = pSecondVector->data[LA_Z];

		pSourceMatrix->data[LA_X][LA_Z] = pThirdVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_Z] = pThirdVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_Z] = pThirdVector->data[LA_Z];
	}
	else if (pOneValue)
	{
		pSourceMatrix->data[LA_X][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_X][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_X][LA_Z] = *pOneValue;

		pSourceMatrix->data[LA_Y][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_Y][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_Y][LA_Z] = *pOneValue;

		pSourceMatrix->data[LA_Z][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_Z][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_Z][LA_Z] = *pOneValue;
	}
	else
	{
		pSourceMatrix->data[LA_X][LA_X] = pInitArray[0];
		pSourceMatrix->data[LA_X][LA_Y] = pInitArray[1];
		pSourceMatrix->data[LA_X][LA_Z] = pInitArray[2];

		pSourceMatrix->data[LA_Y][LA_X] = pInitArray[3];
		pSourceMatrix->data[LA_Y][LA_Y] = pInitArray[4];
		pSourceMatrix->data[LA_Y][LA_Z] = pInitArray[5];

		pSourceMatrix->data[LA_Z][LA_X] = pInitArray[6];
		pSourceMatrix->data[LA_Z][LA_Y] = pInitArray[7];
		pSourceMatrix->data[LA_Z][LA_Z] = pInitArray[8];
	}
}

void	laInit4DMatrix(mat4 *pSourceMatrix, vec4 *pFirstVector, vec4 *pSecondVector, vec4 *pThirdVector, vec4 *pFourthVector, float *pInitArray, float *pOneValue)
{
	if (!pSourceMatrix || (!pFirstVector && !pInitArray && !pSecondVector && !pThirdVector))
		return ;
	if (!pInitArray)
	{
		pSourceMatrix->data[LA_X][LA_X] = pFirstVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_X] = pFirstVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_X] = pFirstVector->data[LA_Z];
		pSourceMatrix->data[LA_W][LA_X] = pFirstVector->data[LA_W];

		pSourceMatrix->data[LA_X][LA_Y] = pSecondVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_Y] = pSecondVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_Y] = pSecondVector->data[LA_Z];
		pSourceMatrix->data[LA_W][LA_Y] = pSecondVector->data[LA_W];

		pSourceMatrix->data[LA_X][LA_Z] = pThirdVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_Z] = pThirdVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_Z] = pThirdVector->data[LA_Z];
		pSourceMatrix->data[LA_W][LA_Z] = pThirdVector->data[LA_W];

		pSourceMatrix->data[LA_X][LA_W] = pFourthVector->data[LA_X];
		pSourceMatrix->data[LA_Y][LA_W] = pFourthVector->data[LA_Y];
		pSourceMatrix->data[LA_Z][LA_W] = pFourthVector->data[LA_Z];
		pSourceMatrix->data[LA_W][LA_W] = pFourthVector->data[LA_W];
	}
	else if (pOneValue)
	{
		pSourceMatrix->data[LA_X][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_X][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_X][LA_Z] = *pOneValue;
		pSourceMatrix->data[LA_X][LA_Z] = *pOneValue;

		pSourceMatrix->data[LA_Y][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_Y][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_Y][LA_Z] = *pOneValue;
		pSourceMatrix->data[LA_Y][LA_Z] = *pOneValue;

		pSourceMatrix->data[LA_Z][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_Z][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_Z][LA_Z] = *pOneValue;
		pSourceMatrix->data[LA_Z][LA_W] = *pOneValue;

		pSourceMatrix->data[LA_W][LA_X] = *pOneValue;
		pSourceMatrix->data[LA_W][LA_Y] = *pOneValue;
		pSourceMatrix->data[LA_W][LA_Z] = *pOneValue;
		pSourceMatrix->data[LA_W][LA_W] = *pOneValue;
	}
	else
	{
		pSourceMatrix->data[LA_X][LA_X] = pInitArray[0];
		pSourceMatrix->data[LA_X][LA_Y] = pInitArray[1];
		pSourceMatrix->data[LA_X][LA_Z] = pInitArray[2];
		pSourceMatrix->data[LA_X][LA_Z] = pInitArray[3];

		pSourceMatrix->data[LA_Y][LA_X] = pInitArray[4];
		pSourceMatrix->data[LA_Y][LA_Y] = pInitArray[5];
		pSourceMatrix->data[LA_Y][LA_Z] = pInitArray[6];
		pSourceMatrix->data[LA_Y][LA_Z] = pInitArray[7];

		pSourceMatrix->data[LA_Z][LA_X] = pInitArray[8];
		pSourceMatrix->data[LA_Z][LA_Y] = pInitArray[9];
		pSourceMatrix->data[LA_Z][LA_Z] = pInitArray[10];
		pSourceMatrix->data[LA_Z][LA_W] = pInitArray[11];

		pSourceMatrix->data[LA_W][LA_X] = pInitArray[12];
		pSourceMatrix->data[LA_W][LA_Y] = pInitArray[13];
		pSourceMatrix->data[LA_W][LA_Z] = pInitArray[14];
		pSourceMatrix->data[LA_W][LA_W] = pInitArray[15];
	}
}

/*
** Addition matrix ------------------------------------------------------------------------------------
*/

void	laAdd2DMatrix(mat2 *pLeftOperand, mat2 *pRightOperand, mat2 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	pResultMatrix->data[LA_X][LA_X] = pLeftOperand->data[LA_X][LA_X] + pRightOperand->data[LA_X][LA_X];
	pResultMatrix->data[LA_X][LA_Y] = pLeftOperand->data[LA_X][LA_Y] + pRightOperand->data[LA_X][LA_Y];

	pResultMatrix->data[LA_Y][LA_X] = pLeftOperand->data[LA_Y][LA_X] + pRightOperand->data[LA_Y][LA_X];
	pResultMatrix->data[LA_Y][LA_Y] = pLeftOperand->data[LA_Y][LA_Y] + pRightOperand->data[LA_Y][LA_Y];
}

void	laAdd3DMatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	pResultMatrix->data[LA_X][LA_X] = pLeftOperand->data[LA_X][LA_X] + pRightOperand->data[LA_X][LA_X];
	pResultMatrix->data[LA_X][LA_Y] = pLeftOperand->data[LA_X][LA_Y] + pRightOperand->data[LA_X][LA_Y];
	pResultMatrix->data[LA_X][LA_Z] = pLeftOperand->data[LA_X][LA_Z] + pRightOperand->data[LA_X][LA_Z];

	pResultMatrix->data[LA_Y][LA_X] = pLeftOperand->data[LA_Y][LA_X] + pRightOperand->data[LA_Y][LA_X];
	pResultMatrix->data[LA_Y][LA_Y] = pLeftOperand->data[LA_Y][LA_Y] + pRightOperand->data[LA_Y][LA_Y];
	pResultMatrix->data[LA_Y][LA_Z] = pLeftOperand->data[LA_Y][LA_Z] + pRightOperand->data[LA_Y][LA_Z];

	pResultMatrix->data[LA_Z][LA_X] = pLeftOperand->data[LA_Z][LA_X] + pRightOperand->data[LA_Z][LA_X];
	pResultMatrix->data[LA_Z][LA_Y] = pLeftOperand->data[LA_Z][LA_Y] + pRightOperand->data[LA_Z][LA_Y];
	pResultMatrix->data[LA_Z][LA_Z] = pLeftOperand->data[LA_Z][LA_Z] + pRightOperand->data[LA_Z][LA_Z];
}

void	laAdd4DMatrix(mat4 *pLeftOperand, mat4 *pRightOperand, mat4 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	pResultMatrix->data[LA_X][LA_X] = pLeftOperand->data[LA_X][LA_X] + pRightOperand->data[LA_X][LA_X];
	pResultMatrix->data[LA_X][LA_Y] = pLeftOperand->data[LA_X][LA_Y] + pRightOperand->data[LA_X][LA_Y];
	pResultMatrix->data[LA_X][LA_Z] = pLeftOperand->data[LA_X][LA_Z] + pRightOperand->data[LA_X][LA_Z];
	pResultMatrix->data[LA_X][LA_W] = pLeftOperand->data[LA_X][LA_W] + pRightOperand->data[LA_X][LA_W];

	pResultMatrix->data[LA_Y][LA_X] = pLeftOperand->data[LA_Y][LA_X] + pRightOperand->data[LA_Y][LA_X];
	pResultMatrix->data[LA_Y][LA_Y] = pLeftOperand->data[LA_Y][LA_Y] + pRightOperand->data[LA_Y][LA_Y];
	pResultMatrix->data[LA_Y][LA_Z] = pLeftOperand->data[LA_Y][LA_Z] + pRightOperand->data[LA_Y][LA_Z];
	pResultMatrix->data[LA_Y][LA_W] = pLeftOperand->data[LA_Y][LA_W] + pRightOperand->data[LA_Y][LA_W];

	pResultMatrix->data[LA_Z][LA_X] = pLeftOperand->data[LA_Z][LA_X] + pRightOperand->data[LA_Z][LA_X];
	pResultMatrix->data[LA_Z][LA_Y] = pLeftOperand->data[LA_Z][LA_Y] + pRightOperand->data[LA_Z][LA_Y];
	pResultMatrix->data[LA_Z][LA_Z] = pLeftOperand->data[LA_Z][LA_Z] + pRightOperand->data[LA_Z][LA_Z];
	pResultMatrix->data[LA_Z][LA_W] = pLeftOperand->data[LA_Z][LA_W] + pRightOperand->data[LA_Z][LA_W];

	pResultMatrix->data[LA_W][LA_X] = pLeftOperand->data[LA_W][LA_X] + pRightOperand->data[LA_W][LA_X];
	pResultMatrix->data[LA_W][LA_Y] = pLeftOperand->data[LA_W][LA_Y] + pRightOperand->data[LA_W][LA_Y];
	pResultMatrix->data[LA_W][LA_Z] = pLeftOperand->data[LA_W][LA_Z] + pRightOperand->data[LA_W][LA_Z];
	pResultMatrix->data[LA_W][LA_W] = pLeftOperand->data[LA_W][LA_W] + pRightOperand->data[LA_W][LA_W];
}

/*
** Subtraction matrix ----------------------------------------------------------------------------------
*/

void	laSub2DMatrix(mat2 *pLeftOperand, mat2 *pRightOperand, mat2 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	pResultMatrix->data[LA_X][LA_X] = pLeftOperand->data[LA_X][LA_X] - pRightOperand->data[LA_X][LA_X];
	pResultMatrix->data[LA_X][LA_Y] = pLeftOperand->data[LA_X][LA_Y] - pRightOperand->data[LA_X][LA_Y];

	pResultMatrix->data[LA_Y][LA_X] = pLeftOperand->data[LA_Y][LA_X] - pRightOperand->data[LA_Y][LA_X];
	pResultMatrix->data[LA_Y][LA_Y] = pLeftOperand->data[LA_Y][LA_Y] - pRightOperand->data[LA_Y][LA_Y];
}

void	laSub3DMatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	pResultMatrix->data[LA_X][LA_X] = pLeftOperand->data[LA_X][LA_X] - pRightOperand->data[LA_X][LA_X];
	pResultMatrix->data[LA_X][LA_Y] = pLeftOperand->data[LA_X][LA_Y] - pRightOperand->data[LA_X][LA_Y];
	pResultMatrix->data[LA_X][LA_Z] = pLeftOperand->data[LA_X][LA_Z] - pRightOperand->data[LA_X][LA_Z];

	pResultMatrix->data[LA_Y][LA_X] = pLeftOperand->data[LA_Y][LA_X] - pRightOperand->data[LA_Y][LA_X];
	pResultMatrix->data[LA_Y][LA_Y] = pLeftOperand->data[LA_Y][LA_Y] - pRightOperand->data[LA_Y][LA_Y];
	pResultMatrix->data[LA_Y][LA_Z] = pLeftOperand->data[LA_Y][LA_Z] - pRightOperand->data[LA_Y][LA_Z];

	pResultMatrix->data[LA_Z][LA_X] = pLeftOperand->data[LA_Z][LA_X] - pRightOperand->data[LA_Z][LA_X];
	pResultMatrix->data[LA_Z][LA_Y] = pLeftOperand->data[LA_Z][LA_Y] - pRightOperand->data[LA_Z][LA_Y];
	pResultMatrix->data[LA_Z][LA_Z] = pLeftOperand->data[LA_Z][LA_Z] - pRightOperand->data[LA_Z][LA_Z];
}

void	laSub4DMatrix(mat4 *pLeftOperand, mat4 *pRightOperand, mat4 *pResultMatrix)
{
	if (!pResultMatrix || !pLeftOperand || !pRightOperand)
		return ;
	pResultMatrix->data[LA_X][LA_X] = pLeftOperand->data[LA_X][LA_X] - pRightOperand->data[LA_X][LA_X];
	pResultMatrix->data[LA_X][LA_Y] = pLeftOperand->data[LA_X][LA_Y] - pRightOperand->data[LA_X][LA_Y];
	pResultMatrix->data[LA_X][LA_Z] = pLeftOperand->data[LA_X][LA_Z] - pRightOperand->data[LA_X][LA_Z];
	pResultMatrix->data[LA_X][LA_W] = pLeftOperand->data[LA_X][LA_W] - pRightOperand->data[LA_X][LA_W];

	pResultMatrix->data[LA_Y][LA_X] = pLeftOperand->data[LA_Y][LA_X] - pRightOperand->data[LA_Y][LA_X];
	pResultMatrix->data[LA_Y][LA_Y] = pLeftOperand->data[LA_Y][LA_Y] - pRightOperand->data[LA_Y][LA_Y];
	pResultMatrix->data[LA_Y][LA_Z] = pLeftOperand->data[LA_Y][LA_Z] - pRightOperand->data[LA_Y][LA_Z];
	pResultMatrix->data[LA_Y][LA_W] = pLeftOperand->data[LA_Y][LA_W] - pRightOperand->data[LA_Y][LA_W];

	pResultMatrix->data[LA_Z][LA_X] = pLeftOperand->data[LA_Z][LA_X] - pRightOperand->data[LA_Z][LA_X];
	pResultMatrix->data[LA_Z][LA_Y] = pLeftOperand->data[LA_Z][LA_Y] - pRightOperand->data[LA_Z][LA_Y];
	pResultMatrix->data[LA_Z][LA_Z] = pLeftOperand->data[LA_Z][LA_Z] - pRightOperand->data[LA_Z][LA_Z];
	pResultMatrix->data[LA_Z][LA_W] = pLeftOperand->data[LA_Z][LA_W] - pRightOperand->data[LA_Z][LA_W];

	pResultMatrix->data[LA_W][LA_X] = pLeftOperand->data[LA_W][LA_X] - pRightOperand->data[LA_W][LA_X];
	pResultMatrix->data[LA_W][LA_Y] = pLeftOperand->data[LA_W][LA_Y] - pRightOperand->data[LA_W][LA_Y];
	pResultMatrix->data[LA_W][LA_Z] = pLeftOperand->data[LA_W][LA_Z] - pRightOperand->data[LA_W][LA_Z];
	pResultMatrix->data[LA_W][LA_W] = pLeftOperand->data[LA_W][LA_W] - pRightOperand->data[LA_W][LA_W];
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
	laGetDeterminant3DMatrix(&bottomSubMatrix, &firstResult, (void *)0);
	laGetDeterminant3DMatrix(&middleSubFirstMatrix, &secondResult, (void *)0);
	laGetDeterminant3DMatrix(&middleSubSecondMatrix, &thirdResult, (void *)0);
	laGetDeterminant3DMatrix(&topSubMatrix, &fourthResult, (void *)0);
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
	float	total;
	int		iter;
	int		x;
	int		y;

	x = -1;
	while (++x < 3 && (y = -1))
		while (++y < 3 && (iter = -1) && (total = 0.0f) > -1)
		{
			while (++iter < 3)
				total += pLeftOperand->data[y][iter] * pRightOperand->data[iter][x];
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
	laInit3DMatrix(pSourceMatrix, (void *)0, (void *)0, (void *)0, (void *)0, &null);
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
	laInit3DMatrix(pSourceMatrix, (void *)0, (void *)0, (void *)0, (void *)0, &null);
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
	laInit3DMatrix(pSourceMatrix, (void *)0, (void *)0, (void *)0, (void *)0, &null);
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
	laInit3DMatrix(&xyzRot, (void *)0, (void *)0, (void *)0, (void *)0, &null);
	laMul3Dmatrix(&xRot, &yRot, &xyzRot);
	laMul3Dmatrix(&zRot, &xyzRot, &xyzRot);
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
			printf("%f ", xyzRot.data[y][x]);
		printf("\n");
	}
	exit(1);
	laMul3Dmatrix(&xyzRot, pSourceMatrix, pSourceMatrix);
}

/*
** For testing ---------------------------------------------------------------------------------------
*/

int main(int argc, char **argv)
{
	vec3 one;
	vec3 two;
	vec3 three;
	vec3 rot;
	mat3 matrix;
	float test = 0.0f;

	laInit3DVector(&one, 1.0f, 0.0f, 0.0f);
	laInit3DVector(&two, 0.0f, 1.0f, 0.0f);
	laInit3DVector(&three, 0.0f, 0.0f, 1.0f);
	laInit3DVector(&rot, 30.0f, 0.0f, 0.0f);
	laInit3DMatrix(&matrix, &one, &two, &three, (void *)0, (void *)0);
	laRotate(&matrix, &rot);
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
			printf("%f ", matrix.data[y][x]);
		printf("\n");
	}
	return (0);
}
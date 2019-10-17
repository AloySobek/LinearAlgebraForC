/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LLFC.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrichese <vrichese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:50:45 by vrichese          #+#    #+#             */
/*   Updated: 2019/10/17 17:52:30 by vrichese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LLFC_H
# define LLFC_H

#include "linearTypes.h"

void	laInit2DVector(vec2 *pSourceVector, float x, float y);
void	laInit3DVector(vec3 *pSourceVector, float x, float y, float z);
void	laInit4DVector(vec4 *pSourceVector, float x, float y, float z, float w);

void	laAdd2DVectors(vec2 *leftOperand, vec2 *rightOperand, vec2 *resultVector);
void	laAdd3DVectors(vec3 *leftOperand, vec3 *rightOperand, vec3 *resultVector);
void	laAdd4DVectors(vec4 *leftOperand, vec4 *rightOperand, vec4 *resultVector);

void	laSub2DVectors(vec2 *leftOperand, vec2 *rightOperand, vec2 *resultVector);
void	laSub3DVectors(vec3 *leftOperand, vec3 *rightOperand, vec3 *resultVector);
void	laSub4DVectors(vec4 *leftOperand, vec4 *rightOperand, vec4 *resultVector);

void	laGetMagnitude2DVector(vec2 *pSourceVector, float *pResult);
void	laGetMagnitude3DVector(vec3 *pSourceVector, float *pResult);
void	laGetMagnitude4DVector(vec4 *pSourceVector, float *pResult);

void	laNormalize2DVector(vec2 *pSourceVector, vec2 *pResultVector);
void	laNormalize3DVector(vec3 *pSourceVector, vec3 *pResultVector);
void	laNormalize4DVector(vec4 *pSourceVector, vec4 *pResultVector);

void	laOpposite2DVector(vec2 *pSourceVector, vec2 *pResultVector);
void	laOpposite3DVector(vec3 *pSourceVector, vec3 *pResultVector);
void	laOpposite4DVector(vec4 *pSourceVector, vec4 *pResultVector);

void	laScalarProduct2DVector(vec2 *pSourceVector, float scalar, vec2 *pResultVector);
void	laScalarProduct3DVector(vec3 *pSourceVector, float scalar, vec3 *pResultVector);
void	laScalarProduct4DVector(vec4 *pSourceVector, float scalar, vec4 *pResultVector);

void	laDotProduct2DVectors(vec2 *pLeftVector, vec2 *pRightVector, float *pResult);
void	laDotProduct3DVectors(vec3 *pLeftVector, vec3 *pRightVector, float *pResult);
void	laDotProduct4DVectors(vec4 *pLeftVector, vec4 *pRightVector, float *pResult);

void	laGetCosBetween2DVectors(vec2 *pLeftVector, vec2 *pRightVector, float *pResult);
void	laGetCosBetween3DVectors(vec3 *pLeftVector, vec3 *pRightVector, float *pResult);
void	laGetCosBetween4DVectors(vec4 *pLeftVector, vec4 *pRightVector, float *pResult);

void	laCrossProduct3DVectors(vec3 *pBasisVector, vec3 *pLeftVector, vec3 *pRightVector, vec3 *pResultVector);

void	laInit2DMatrix(mat2 *pSourceMatrix, vec2 *pFirstVector, vec2 *pSecondVector, float *pInitArray);
void	laInit3DMatrix(mat3 *pSourceMatrix, vec3 *pFirstVector, vec3 *pSecondVector, vec3 *pThirdVector, float *pInitArray);
void	laInit4DMatrix(mat4 *pSourceMatrix, vec4 *pFirstVector, vec4 *pSecondVector, vec4 *pThirdVector, vec4 *pFourthVector, float *pInitArray);

void	laAdd2DMatrix(mat2 *pLeftOperand, mat2 *pRightOperand, mat2 *pResultMatrix);
void	laAdd3DMatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix);
void	laAdd4DMatrix(mat4 *pLeftOperand, mat4 *pRightOperand, mat4 *pResultMatrix);

void	laSub2DMatrix(mat2 *pLeftOperand, mat2 *pRightOperand, mat2 *pResultMatrix);
void	laSub3DMatrix(mat3 *pLeftOperand, mat3 *pRightOperand, mat3 *pResultMatrix);
void	laSub4DMatrix(mat4 *pLeftOperand, mat4 *pRightOperand, mat4 *pResultMatrix);

void	laGetDeterminant2DMatrix(mat2 *pSourceMatrix, float *pResult);
void	laGetDeterminant3DMatrix(mat3 *pSourceMatrix, float *pResult, float *pSubMatrixArray);
void	laGetDeterminant4DMatrix(mat4 *pSourceMatrix, float *pResult, float *pSubMatrixArray);

#endif
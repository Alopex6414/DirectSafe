/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		DirectSafe.h
* @brief	This Program is DirectSafe DLL Project.
* @author	Alopex/Helium
* @version	v1.01a
* @date		2018-1-3	v1.00a	alopex	Create Project.
* @date		2018-1-4	v1.01a	alopex	Modify inline Key Words.
*/
#pragma once

#ifndef __DIRECTSAFE_H_
#define __DIRECTSAFE_H_

//Include DirectX Common Header File
#include "DirectCommon.h"

//Macro Definition
#ifdef  DIRECTSAFE_EXPORTS
#define DIRECTSAFE_API	__declspec(dllexport)
#else
#define DIRECTSAFE_API	__declspec(dllimport)
#endif

//Class Definition
class DIRECTSAFE_API DirectSafe
{
public:
	DirectSafe();
	~DirectSafe();
};

//Variable Definition
extern "C" DIRECTSAFE_API CRITICAL_SECTION g_csDirect;
extern "C" DIRECTSAFE_API bool g_bDirectSafe;

//Function Definition
extern "C" DIRECTSAFE_API void DirectSafeInit();
extern "C" DIRECTSAFE_API void DirectSafeDelete();

#endif
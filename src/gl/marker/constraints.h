/***** BEGIN LICENSE BLOCK *****

BSD License

Copyright (c) 2005-2012, NIF File Format Library and Tools
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the NIF File Format Library and Tools project may not be
   used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

***** END LICENCE BLOCK *****/

#include "gl/glmarker.h"

static const float BumperMarker01Verts[] = 
{
	-0.653245f, 0.900000f, 1.213643f,
	-0.653245f, -0.900000f, 1.213643f,
	-2.700000f, -0.900000f, 0.100000f,
	-2.474048f, -0.900000f, 0.100000f,
	-2.700000f, -0.900000f, -0.100000f,
	-2.125359f, -0.900000f, 0.100000f,
	0.000000f, -0.900000f, -0.100000f,
	0.000000f, -0.900000f, 0.100000f,
	-2.700000f, -1.100000f, -0.100000f,
	-2.474048f, -1.100000f, 0.100000f,
	-2.700001f, -1.100000f, 0.100000f,
	-2.125359f, -1.100000f, 0.100000f,
	0.000000f, -1.100000f, -0.100000f,
	-0.000001f, -1.100000f, 0.100000f,
	-2.700000f, 1.100000f, 0.100000f,
	-2.474048f, 1.100000f, 0.100000f,
	-2.700000f, 1.100000f, -0.100000f,
	-2.125359f, 1.100000f, 0.100000f,
	0.000000f, 1.100000f, -0.100000f,
	0.000000f, 1.100000f, 0.100000f,
	-2.700000f, 0.900000f, -0.100000f,
	-2.474048f, 0.900000f, 0.100000f,
	-2.700001f, 0.900000f, 0.100000f,
	-2.125359f, 0.900000f, 0.100000f,
	0.000000f, 0.900000f, -0.100000f,
	-0.000001f, 0.900000f, 0.100000f,
	-1.056096f, -0.900000f, 0.848706f,
	-0.364301f, -0.900000f, 0.100000f,
	-1.056096f, -1.100000f, 0.848706f,
	-0.706968f, -1.100000f, 0.100000f,
	-0.364301f, -1.100000f, 0.100000f,
	-0.706968f, 1.100000f, 0.100000f,
	-1.056096f, 1.100000f, 0.848706f,
	-0.364301f, 1.100000f, 0.100000f,
	-1.056096f, 0.900000f, 0.848706f,
	-0.364301f, 0.900000f, 0.100000f,
	-0.653245f, -1.100000f, 0.719644f,
	-0.653245f, -0.900000f, 0.719644f,
	-0.653245f, 0.900000f, 0.719644f,
	-0.653245f, 1.100000f, 0.719644f,
	-0.883601f, -0.900000f, 1.213643f,
	-1.141923f, -0.900000f, 1.032764f,
	-0.883601f, -1.100000f, 1.213643f,
	-1.141923f, -1.100000f, 1.032764f,
	-0.883601f, 1.100000f, 1.213643f,
	-1.141923f, 1.100000f, 1.032764f,
	-0.883601f, 0.900000f, 1.213643f,
	-1.141923f, 0.900000f, 1.032764f,
	-0.403245f, -0.900000f, 0.719644f,
	-0.403245f, -1.100000f, 0.719644f,
	-0.403245f, 1.100000f, 0.719644f,
	-0.403245f, 0.900000f, 0.719644f,
	-0.403245f, -0.900000f, 1.213643f,
	-0.403245f, -1.100000f, 1.213643f,
	-0.403245f, 1.100000f, 1.213643f,
	-0.403245f, 0.900000f, 1.213643f,
	-0.505289f, 0.900000f, 0.400000f,
	-0.705289f, 0.900000f, 0.400000f,
	-0.705289f, -0.899999f, 0.400000f,
	-0.505289f, -0.900001f, 0.400000f,
	-0.505289f, 0.899999f, 0.100000f,
	-0.706968f, 0.900000f, 0.100000f,
	-0.706968f, -0.900000f, 0.100000f,
	-0.505289f, -0.900000f, 0.100000f,
	-0.403245f, 1.000000f, 1.095567f,
	-0.403245f, 1.091924f, 1.003643f,
	-0.403245f, -1.000000f, 1.095567f,
	-0.403245f, -0.908076f, 1.003643f,
	-0.003245f, 1.070711f, 1.003643f,
	-0.003245f, 1.000000f, 1.074354f,
	-0.003245f, -0.929289f, 1.003643f,
	-0.003245f, -1.000000f, 1.074354f,
	-0.403245f, 1.000000f, 0.911719f,
	-0.003245f, 1.000000f, 0.932932f,
	-0.003245f, 0.929289f, 1.003643f,
	-0.403245f, 0.908076f, 1.003643f,
	-0.403245f, -1.000000f, 0.911719f,
	-0.003245f, -1.000000f, 0.932932f,
	-0.403245f, -1.091924f, 1.003643f,
	-0.003245f, -1.070711f, 1.003643f,
	-0.003245f, -1.000000f, 1.215775f,
	-0.003245f, -0.787868f, 1.003643f,
	-0.003245f, -1.000000f, 0.791511f,
	-0.003245f, -1.212132f, 1.003643f,
	-0.003245f, 0.787868f, 1.003643f,
	-0.003245f, 1.000000f, 0.791511f,
	-0.003245f, 1.212132f, 1.003643f,
	-0.003245f, 1.000000f, 1.215775f,
	-0.003245f, -1.212132f, 1.003643f,
	-0.003245f, -1.000000f, 0.791511f,
	-0.003245f, -0.787868f, 1.003643f,
	-0.003245f, -1.000000f, 1.215775f,
	-0.003245f, 1.000000f, 1.215775f,
	-0.003245f, 1.212132f, 1.003643f,
	-0.003245f, 1.000000f, 0.791511f,
	-0.003245f, 0.787868f, 1.003643f,
};

static const unsigned short BumperMarker01Faces[] = 
{
	2, 3, 4,
	5, 4, 3,
	5, 6, 4,
	5, 7, 6,
	8, 9, 10,
	8, 11, 9,
	12, 11, 8,
	12, 13, 11,
	14, 15, 16,
	17, 16, 15,
	17, 18, 16,
	17, 19, 18,
	20, 21, 22,
	20, 23, 21,
	24, 23, 20,
	24, 25, 23,
	37, 62, 26,
	37, 27, 62,
	36, 28, 29,
	30, 36, 29,
	39, 31, 32,
	39, 33, 31,
	38, 34, 61,
	35, 38, 61,
	1, 40, 42,
	28, 42, 43,
	28, 36, 42,
	26, 41, 40,
	34, 46, 47,
	32, 45, 44,
	32, 44, 39,
	0, 44, 46,
	72, 75, 74,
	72, 74, 73,
	76, 78, 79,
	76, 79, 77,
	66, 71, 79,
	66, 79, 78,
	70, 67, 76,
	70, 76, 77,
	64, 69, 74,
	64, 74, 75,
	68, 65, 72,
	68, 72, 73,
	66, 67, 70,
	66, 70, 71,
	64, 65, 68,
	64, 68, 69,
	61, 60, 62,
	60, 63, 62,
	59, 56, 58,
	56, 57, 58,
	62, 58, 61,
	58, 57, 61,
	60, 56, 59,
	60, 59, 63,
	48, 51, 55,
	48, 55, 52,
	37, 38, 51,
	37, 51, 48,
	0, 1, 52,
	0, 52, 55,
	0, 55, 54,
	0, 54, 44,
	50, 39, 54,
	39, 44, 54,
	0, 46, 34,
	0, 34, 38,
	26, 40, 1,
	26, 1, 37,
	36, 49, 53,
	36, 53, 42,
	1, 42, 53,
	1, 53, 52,
	0, 37, 1,
	0, 38, 37,
	54, 55, 51,
	54, 51, 50,
	52, 53, 49,
	52, 49, 48,
	38, 39, 50,
	38, 50, 51,
	36, 37, 48,
	36, 48, 49,
	33, 39, 38,
	33, 38, 35,
	27, 37, 36,
	27, 36, 30,
	32, 17, 45,
	17, 15, 45,
	17, 32, 34,
	17, 34, 23,
	61, 34, 32,
	61, 32, 31,
	61, 31, 17,
	61, 17, 23,
	21, 15, 14,
	21, 14, 22,
	15, 21, 47,
	15, 47, 45,
	34, 47, 23,
	47, 21, 23,
	19, 33, 25,
	33, 35, 25,
	47, 46, 44,
	47, 44, 45,
	18, 19, 24,
	19, 25, 24,
	14, 16, 20,
	14, 20, 22,
	26, 5, 41,
	5, 3, 41,
	5, 26, 28,
	5, 28, 11,
	29, 28, 26,
	29, 26, 62,
	29, 62, 5,
	29, 5, 11,
	2, 10, 9,
	2, 9, 3,
	3, 9, 43,
	3, 43, 41,
	28, 43, 11,
	43, 9, 11,
	7, 27, 13,
	27, 30, 13,
	43, 42, 40,
	43, 40, 41,
	6, 7, 12,
	7, 13, 12,
	2, 4, 8,
	2, 8, 10,
	16, 18, 24,
	16, 24, 20,
	8, 4, 12,
	4, 6, 12,
	85, 84, 87,
	85, 87, 86,
	82, 83, 80,
	82, 80, 81,
	89, 90, 91,
	89, 91, 88,
	94, 93, 92,
	94, 92, 95,
};

static const GLMarker BumperMarker01 = { 96, 144, BumperMarker01Verts, BumperMarker01Faces };

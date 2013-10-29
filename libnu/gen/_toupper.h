/*
1382872513
FNV_OFFSET_BASIS: FFFFFFFF,
FNV_PRIME: 01000193,
FNV_SIZE: 1079,
ENCODING: UTF-8,
*/

static const int16_t FNV[] = {
	-1078, -1077, -1076, -1074, -1072, -1070, -1068, -1066, -1065, -1064, -1063, -1062, 
	-1060, 3, -1059, 3, -1058, 1, -1056, 3, 4, 1, 2, 1, 
	3, 1, 3, 1, 1, 2, 1, 2, 3, 1, 1, 1, 
	1, 1, 1, 1, -1054, 1, 1, 1, 1, 2, 1, 2, 
	2, 1, 2, 1, 0, -1053, 0, -1052, 0, -1051, 0, -1050, 
	0, 2, 0, 3, -1048, 3, -1046, 3, 0, -1044, 2, 3, 
	-1043, -1042, -1041, 3, -1039, 2, 2, 1, 1, 1, 1, 1, 
	2, 1, 1, 1, 7, 1, 4, 1, 7, 1, 1, 1, 
	2, 1, 1, 1, 1, 1, 1, 3, 4, 0, 1, -1038, 
	3, 0, -1037, -1036, 5, -1034, 1, 5, 3, -1032, 4, -1030, 
	1, -1029, 4, -1027, 2, -1026, 2, -1023, 2, -1022, 3, -1021, 
	2, -1020, 1, -1015, -1013, 0, -1010, 0, -1007, 0, 0, 0, 
	-1005, -1003, -1000, -995, -994, -993, 1, -990, -988, -987, -985, -982, 
	-979, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 
	1, -974, 2, 1, -971, -969, -967, 2, 4, 1, 1, 2, 
	-965, 1, -962, 2, 0, -961, 0, -958, 0, 1, -956, 1, 
	-955, 2, -954, 3, -952, 3, -951, 3, -950, 1, -948, 2, 
	-947, 0, -943, -941, -937, 0, 0, -933, 0, -931, 0, 0, 
	-923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -919, -914, -912, -908, -901, -900, -893, 0, -884, -882, -878, 
	-875, -874, -868, -863, -860, -859, -857, -833, -821, 0, 0, 0, 
	0, 0, 0, -813, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -811, 0, -792, 
	0, -790, 0, 0, 0, -788, 0, 0, 0, 0, 0, -786, 
	-780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, -774, 0, 0, 
	0, -773, 0, 0, 0, -754, 0, -752, 0, -739, 0, -738, 
	0, -737, 0, -736, 0, -734, 0, -730, 0, -725, 0, -723, 
	0, -721, 0, -713, 0, 0, -707, -705, -703, 0, -699, -694, 
	-693, 1, 3, -691, 4, -688, 7, 3, -686, 3, -684, 3, 
	-682, 1, -681, 6, -680, 2, 0, 6, -678, 1, 0, -677, 
	-676, 0, -675, -674, -673, 0, -672, 0, -671, -670, -669, -661, 
	-660, -659, -656, -655, -654, -653, -652, -651, -644, 1, 0, -638, 
	0, -634, -633, -632, -631, -630, -627, -623, -621, -619, -617, -615, 
	-612, -611, 0, 2, 0, -600, -594, -593, 0, -592, 0, 2, 
	0, -591, 0, 1, 0, -590, 0, -588, 0, 0, -586, 0, 
	0, -584, -581, 0, 0, -580, 0, 0, -576, 0, -572, 0, 
	0, 0, -570, 0, 0, 0, 0, -568, 0, 0, -566, 0, 
	0, 0, 0, -564, 0, -562, 0, -560, 0, 0, -558, 0, 
	-554, 0, -550, 0, 0, -549, 0, -545, 0, -544, 0, -542, 
	-539, 0, 0, -538, -534, 0, -532, 0, -526, 0, -524, 0, 
	-522, 0, -518, 0, -517, -516, 3, -514, 2, -512, 4, -511, 
	3, -510, 7, -508, 7, -506, 1, -504, 2, -502, 1, -500, 
	2, -498, 1, -496, 1, -495, 1, -494, 1, 1, 1, -490, 
	1, 1, -488, 1, 1, 1, 0, 2, 1, -472, -470, 1, 
	-463, 1, -454, 2, -452, 4, -451, 1, -450, 2, -444, 5, 
	-438, 5, -434, 3, -424, 2, -416, 8, -414, 1, -412, 2, 
	-408, 11, -406, 7, -404, 4, -403, 1, 4, 1, 7, 1, 
	1, 2, 1, 2, 4, 10, 1, 2, 1, 2, 1, 4, 
	-402, 1, -400, 1, 0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 4, 0, 5, 0, 1, 0, 3, 0, 1, 
	0, 1, 0, 1, 0, 11, 0, 12, 0, 4, 0, -398, 
	0, 3, 0, 3, 0, -384, 0, -378, 0, -376, 0, 4, 
	0, 10, 0, 1, 0, 3, -364, 3, -361, 9, -356, 4, 
	-355, 2, -353, 1, -351, 1, -348, 2, -345, 10, -342, 4, 
	-340, 5, -338, 7, -336, 4, -334, 10, -328, 5, -327, 3, 
	-326, 6, 0, 1, -324, 1, -322, 1, -312, 1, -308, 1, 
	-307, 1, -306, 1, -304, 1, -300, 1, -287, 1, -285, 1, 
	-283, 1, -282, 5, 0, 5, 0, 5, 0, -279, 0, -278, 
	0, -275, 0, -273, 0, -271, 0, -264, 0, -263, 0, -262, 
	0, -259, 0, -258, 0, -257, 0, -253, 0, -251, 0, -250, 
	0, 2, 0, 2, 0, 9, 0, 2, 0, -249, 0, -243, 
	0, -241, 0, -237, -236, 4, 0, 4, 0, 4, -235, 4, 
	-233, 4, -231, 1, -230, 3, -229, 4, -223, 2, -217, 1, 
	-211, 10, 0, 4, 0, -209, 0, 4, 0, -208, 0, 1, 
	0, -206, 0, -204, 0, -203, 0, -199, 0, -197, 0, -193, 
	0, -190, 0, 0, 0, -188, 0, -187, 0, -185, 0, -182, 
	0, -181, 0, -180, 0, -179, 0, -178, 0, -177, 0, -176, 
	0, -175, 0, -173, 0, -172, 0, -167, -165, -160, 0, 1, 
	0, -158, 0, -153, -151, 1, -149, 1, 0, -147, 0, 1, 
	0, 7, 0, -145, 0, 0, 0, 0, 0, -139, 0, 0, 
	0, 0, -130, 0, 0, -129, 0, 0, -127, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, -123, -121, -120, -119, 
	-118, 5, -116, 5, 13, 6, 2, 12, 1, 5, 6, 4, 
	3, 7, 8, 6, 8, 3, 5, 3, 20, 2, -115, 7, 
	1, 15, 9, 26, -113, -112, 0, 9, 12, -110, 0, 3, 
	0, -109, -108, 0, -106, 0, -105, -104, -103, 0, 0, 0, 
	0, -102, -101, 0, 0, 0, -97, 0, 0, 0, 0, 0, 
	0, 0, -95, 0, -79, 0, -75, -74, -72, 0, -64, 0, 
	-60, 0, -58, 0, -54, 0, -53, 0, 3, 0, 2, 0, 
	14, -50, 2, 0, 14, 0, 19, 0, 17, 0, 16, 0, 
	8, 0, -48, 0, 14, -47, 1, 0, 13, 21, 4, -46, 
	4, 0, 1, -39, 5, 0, 2, -37, 0, 0, 0, 0, 
	0, 0, 0, 0, -23, -9, 0, 4, -3, 0, -1, };

static const nu_udb_t VALUES[] = {
	{ 0x01FFC, "\xCE\xA9\xCE\x99" },
	{ 0x01EB9, "\xE1\xBA\xB8" },
	{ 0x02CF3, "\xE2\xB3\xB2" },
	{ 0x00213, "\xC8\x92" },
	{ 0x00071, "\x51" },
	{ 0x0045B, "\xD0\x8B" },
	{ 0x00073, "\x53" },
	{ 0x00072, "\x52" },
	{ 0x02CEE, "\xE2\xB3\xAD" },
	{ 0x00074, "\x54" },
	{ 0x00077, "\x57" },
	{ 0x000E1, "\xC3\x81" },
	{ 0x0217D, "\xE2\x85\xAD" },
	{ 0x0217A, "\xE2\x85\xAA" },
	{ 0x02C76, "\xE2\xB1\xB5" },
	{ 0x02D12, "\xE1\x82\xB2" },
	{ 0x000EA, "\xC3\x8A" },
	{ 0x02D14, "\xE1\x82\xB4" },
	{ 0x000E8, "\xC3\x88" },
	{ 0x02D16, "\xE1\x82\xB6" },
	{ 0x00061, "\x41" },
	{ 0x02D18, "\xE1\x82\xB8" },
	{ 0x0023F, "\xE2\xB1\xBE" },
	{ 0x02D1A, "\xE1\x82\xBA" },
	{ 0x01EAD, "\xE1\xBA\xAC" },
	{ 0x02D1C, "\xE1\x82\xBC" },
	{ 0x02D1F, "\xE1\x82\xBF" },
	{ 0x02D1E, "\xE1\x82\xBE" },
	{ 0x00069, "\x49" },
	{ 0x00068, "\x48" },
	{ 0x01EB7, "\xE1\xBA\xB6" },
	{ 0x0006A, "\x4A" },
	{ 0x000FA, "\xC3\x9A" },
	{ 0x0006C, "\x4C" },
	{ 0x000F8, "\xC3\x98" },
	{ 0x0006E, "\x4E" },
	{ 0x01FF3, "\xE1\xBF\xBC" },
	{ 0x000FF, "\xC5\xB8" },
	{ 0x00585, "\xD5\x95" },
	{ 0x000FD, "\xC3\x9D" },
	{ 0x00515, "\xD4\x94" },
	{ 0x01E25, "\xE1\xB8\xA4" },
	{ 0x0051B, "\xD4\x9A" },
	{ 0x02D0E, "\xE1\x82\xAE" },
	{ 0x00519, "\xD4\x98" },
	{ 0x00581, "\xD5\x91" },
	{ 0x01FE1, "\xE1\xBF\xA9" },
	{ 0x02CD1, "\xE2\xB3\x90" },
	{ 0x0051D, "\xD4\x9C" },
	{ 0x01FD1, "\xE1\xBF\x99" },
	{ 0x00563, "\xD4\xB3" },
	{ 0x02C59, "\xE2\xB0\xA9" },
	{ 0x0020D, "\xC8\x8C" },
	{ 0x0020F, "\xC8\x8E" },
	{ 0x00260, "\xC6\x93" },
	{ 0x00564, "\xD4\xB4" },
	{ 0x02C5C, "\xE2\xB0\xAC" },
	{ 0x00209, "\xC8\x88" },
	{ 0x0056B, "\xD4\xBB" },
	{ 0x0020B, "\xC8\x8A" },
	{ 0x02D21, "\xE1\x83\x81" },
	{ 0x02D20, "\xE1\x83\x80" },
	{ 0x02D23, "\xE1\x83\x83" },
	{ 0x00205, "\xC8\x84" },
	{ 0x0056D, "\xD4\xBD" },
	{ 0x02D24, "\xE1\x83\x84" },
	{ 0x02D27, "\xE1\x83\x87" },
	{ 0x024D8, "\xE2\x92\xBE" },
	{ 0x00252, "\xE2\xB1\xB0" },
	{ 0x024DA, "\xE2\x93\x80" },
	{ 0x00250, "\xE2\xB1\xAF" },
	{ 0x00207, "\xC8\x86" },
	{ 0x000B5, "\xCE\x9C" },
	{ 0x01FC3, "\xE1\xBF\x8C" },
	{ 0x00201, "\xC8\x80" },
	{ 0x02CB1, "\xE2\xB2\xB0" },
	{ 0x00579, "\xD5\x89" },
	{ 0x02CB7, "\xE2\xB2\xB6" },
	{ 0x00203, "\xC8\x82" },
	{ 0x02CB5, "\xE2\xB2\xB4" },
	{ 0x01EE5, "\xE1\xBB\xA4" },
	{ 0x10449, "\xF0\x90\x90\xA1" },
	{ 0x01EEB, "\xE1\xBB\xAA" },
	{ 0x02CB9, "\xE2\xB2\xB8" },
	{ 0x00249, "\xC9\x88" },
	{ 0x024D4, "\xE2\x92\xBA" },
	{ 0x01EEF, "\xE1\xBB\xAE" },
	{ 0x02CBD, "\xE2\xB2\xBC" },
	{ 0x01EED, "\xE1\xBB\xAC" },
	{ 0x00437, "\xD0\x97" },
	{ 0x024DF, "\xE2\x93\x85" },
	{ 0x00431, "\xD0\x91" },
	{ 0x024DD, "\xE2\x93\x83" },
	{ 0x00433, "\xD0\x93" },
	{ 0x0027D, "\xE2\xB1\xA4" },
	{ 0x0024F, "\xC9\x8E" },
	{ 0x00275, "\xC6\x9F" },
	{ 0x0A737, "\xEA\x9C\xB6" },
	{ 0x024E9, "\xE2\x93\x8F" },
	{ 0x00439, "\xD0\x99" },
	{ 0x00271, "\xE2\xB1\xAE" },
	{ 0x00272, "\xC6\x9D" },
	{ 0x0026F, "\xC6\x9C" },
	{ 0x00268, "\xC6\x97" },
	{ 0x00269, "\xC6\x96" },
	{ 0x0026B, "\xE2\xB1\xA2" },
	{ 0x0A7A7, "\xEA\x9E\xA6" },
	{ 0x00265, "\xEA\x9E\x8D" },
	{ 0x00266, "\xEA\x9E\xAA" },
	{ 0x0A73F, "\xEA\x9C\xBE" },
	{ 0x01EC7, "\xE1\xBB\x86" },
	{ 0x0A73B, "\xEA\x9C\xBA" },
	{ 0x024E4, "\xE2\x93\x8A" },
	{ 0x024E6, "\xE2\x93\x8C" },
	{ 0x024E2, "\xE2\x93\x88" },
	{ 0x02175, "\xE2\x85\xA5" },
	{ 0x01EC9, "\xE1\xBB\x88" },
	{ 0x02177, "\xE2\x85\xA7" },
	{ 0x02170, "\xE2\x85\xA0" },
	{ 0x02171, "\xE2\x85\xA1" },
	{ 0x02172, "\xE2\x85\xA2" },
	{ 0x02C83, "\xE2\xB2\x82" },
	{ 0x02173, "\xE2\x85\xA3" },
	{ 0x02C81, "\xE2\xB2\x80" },
	{ 0x01ED1, "\xE1\xBB\x90" },
	{ 0x01F01, "\xE1\xBC\x89" },
	{ 0x0A77C, "\xEA\x9D\xBB" },
	{ 0x02C85, "\xE2\xB2\x84" },
	{ 0x0A77F, "\xEA\x9D\xBE" },
	{ 0x0A77A, "\xEA\x9D\xB9" },
	{ 0x01EDB, "\xE1\xBB\x9A" },
	{ 0x01E43, "\xE1\xB9\x82" },
	{ 0x000F1, "\xC3\x91" },
	{ 0x000F0, "\xC3\x90" },
	{ 0x000F3, "\xC3\x93" },
	{ 0x000F2, "\xC3\x92" },
	{ 0x000F5, "\xC3\x95" },
	{ 0x000F4, "\xC3\x94" },
	{ 0x0214E, "\xE2\x84\xB2" },
	{ 0x000F6, "\xC3\x96" },
	{ 0x000F9, "\xC3\x99" },
	{ 0x004E3, "\xD3\xA2" },
	{ 0x000FB, "\xC3\x9B" },
	{ 0x01F77, "\xE1\xBF\x9B" },
	{ 0x0A76D, "\xEA\x9D\xAC" },
	{ 0x000FC, "\xC3\x9C" },
	{ 0x0A76B, "\xEA\x9D\xAA" },
	{ 0x000FE, "\xC3\x9E" },
	{ 0x00289, "\xC9\x84" },
	{ 0x000E0, "\xC3\x80" },
	{ 0x0028B, "\xC6\xB2" },
	{ 0x000E2, "\xC3\x82" },
	{ 0x0A761, "\xEA\x9D\xA0" },
	{ 0x000E4, "\xC3\x84" },
	{ 0x0A73D, "\xEA\x9C\xBC" },
	{ 0x000E6, "\xC3\x86" },
	{ 0x000E9, "\xC3\x89" },
	{ 0x0A763, "\xEA\x9D\xA2" },
	{ 0x000EB, "\xC3\x8B" },
	{ 0x0A75F, "\xEA\x9D\x9E" },
	{ 0x000ED, "\xC3\x8D" },
	{ 0x000EC, "\xC3\x8C" },
	{ 0x01F64, "\xE1\xBD\xAC" },
	{ 0x000EE, "\xC3\x8E" },
	{ 0x00283, "\xC6\xA9" },
	{ 0x004FB, "\xD3\xBA" },
	{ 0x0A759, "\xEA\x9D\x98" },
	{ 0x00459, "\xD0\x89" },
	{ 0x0A72F, "\xEA\x9C\xAE" },
	{ 0x02CD3, "\xE2\xB3\x92" },
	{ 0x0A72D, "\xEA\x9C\xAC" },
	{ 0x0A75B, "\xEA\x9D\x9A" },
	{ 0x0A755, "\xEA\x9D\x94" },
	{ 0x00453, "\xD0\x83" },
	{ 0x0A757, "\xEA\x9D\x96" },
	{ 0x0A751, "\xEA\x9D\x90" },
	{ 0x0A753, "\xEA\x9D\x92" },
	{ 0x0A74D, "\xEA\x9D\x8C" },
	{ 0x0A74F, "\xEA\x9D\x8E" },
	{ 0x0A749, "\xEA\x9D\x88" },
	{ 0x0A74B, "\xEA\x9D\x8A" },
	{ 0x0A745, "\xEA\x9D\x84" },
	{ 0x01EDF, "\xE1\xBB\x9E" },
	{ 0x02D06, "\xE1\x82\xA6" },
	{ 0x0A747, "\xEA\x9D\x86" },
	{ 0x02CC3, "\xE2\xB3\x82" },
	{ 0x0A741, "\xEA\x9D\x80" },
	{ 0x0A743, "\xEA\x9D\x82" },
	{ 0x01F42, "\xE1\xBD\x8A" },
	{ 0x01E3D, "\xE1\xB8\xBC" },
	{ 0x01F40, "\xE1\xBD\x88" },
	{ 0x10445, "\xF0\x90\x90\x9D" },
	{ 0x01E3F, "\xE1\xB8\xBE" },
	{ 0x1044B, "\xF0\x90\x90\xA3" },
	{ 0x01F44, "\xE1\xBD\x8C" },
	{ 0x00499, "\xD2\x98" },
	{ 0x01E39, "\xE1\xB8\xB8" },
	{ 0x1044F, "\xF0\x90\x90\xA7" },
	{ 0x01E3B, "\xE1\xB8\xBA" },
	{ 0x1044D, "\xF0\x90\x90\xA5" },
	{ 0x003D0, "\xCE\x92" },
	{ 0x024E5, "\xE2\x93\x8B" },
	{ 0x01E35, "\xE1\xB8\xB4" },
	{ 0x01E37, "\xE1\xB8\xB6" },
	{ 0x00259, "\xC6\x8F" },
	{ 0x01E31, "\xE1\xB8\xB0" },
	{ 0x02178, "\xE2\x85\xA8" },
	{ 0x01E2D, "\xE1\xB8\xAC" },
	{ 0x01E29, "\xE1\xB8\xA8" },
	{ 0x004AF, "\xD2\xAE" },
	{ 0x0043C, "\xD0\x9C" },
	{ 0x01E15, "\xE1\xB8\x94" },
	{ 0x0A665, "\xEA\x99\xA4" },
	{ 0x01E17, "\xE1\xB8\x96" },
	{ 0x01EBF, "\xE1\xBA\xBE" },
	{ 0x01E11, "\xE1\xB8\x90" },
	{ 0x0043E, "\xD0\x9E" },
	{ 0x02CDB, "\xE2\xB3\x9A" },
	{ 0x01FBC, "\xCE\x91\xCE\x99" },
	{ 0x01FA3, "\xE1\xBE\xAB" },
	{ 0x00163, "\xC5\xA2" },
	{ 0x0FF49, "\xEF\xBC\xA9" },
	{ 0x00438, "\xD0\x98" },
	{ 0x01E19, "\xE1\xB8\x98" },
	{ 0x024D1, "\xE2\x92\xB7" },
	{ 0x01E1B, "\xE1\xB8\x9A" },
	{ 0x0043B, "\xD0\x9B" },
	{ 0x004B9, "\xD2\xB8" },
	{ 0x0043A, "\xD0\x9A" },
	{ 0x00434, "\xD0\x94" },
	{ 0x00436, "\xD0\x96" },
	{ 0x024E8, "\xE2\x93\x8E" },
	{ 0x00430, "\xD0\x90" },
	{ 0x01E23, "\xE1\xB8\xA2" },
	{ 0x00432, "\xD0\x92" },
	{ 0x0A78C, "\xEA\x9E\x8B" },
	{ 0x01E13, "\xE1\xB8\x92" },
	{ 0x01E2F, "\xE1\xB8\xAE" },
	{ 0x01F90, "\xE1\xBE\x98" },
	{ 0x024D6, "\xE2\x92\xBC" },
	{ 0x01E0D, "\xE1\xB8\x8C" },
	{ 0x01E2B, "\xE1\xB8\xAA" },
	{ 0x01E0F, "\xE1\xB8\x8E" },
	{ 0x01F9B, "\xE1\xBC\xAB\xCE\x99" },
	{ 0x024D3, "\xE2\x92\xB9" },
	{ 0x01F99, "\xE1\xBC\xA9\xCE\x99" },
	{ 0x00159, "\xC5\x98" },
	{ 0x02CCB, "\xE2\xB3\x8A" },
	{ 0x01E09, "\xE1\xB8\x88" },
	{ 0x01E03, "\xE1\xB8\x82" },
	{ 0x01E7D, "\xE1\xB9\xBC" },
	{ 0x02CC7, "\xE2\xB3\x86" },
	{ 0x01E7F, "\xE1\xB9\xBE" },
	{ 0x00263, "\xC6\x94" },
	{ 0x024D9, "\xE2\x92\xBF" },
	{ 0x00583, "\xD5\x93" },
	{ 0x01E79, "\xE1\xB9\xB8" },
	{ 0x01E7B, "\xE1\xB9\xBA" },
	{ 0x01E75, "\xE1\xB9\xB4" },
	{ 0x01EC5, "\xE1\xBB\x84" },
	{ 0x01E1F, "\xE1\xB8\x9E" },
	{ 0x01E77, "\xE1\xB9\xB6" },
	{ 0x01E71, "\xE1\xB9\xB0" },
	{ 0x01E73, "\xE1\xB9\xB2" },
	{ 0x01F8E, "\xE1\xBC\x8E\xCE\x99" },
	{ 0x02D25, "\xE1\x83\x85" },
	{ 0x01F8C, "\xE1\xBC\x8C\xCE\x99" },
	{ 0x02CD7, "\xE2\xB3\x96" },
	{ 0x0A65D, "\xEA\x99\x9C" },
	{ 0x02D0A, "\xE1\x82\xAA" },
	{ 0x01E6D, "\xE1\xB9\xAC" },
	{ 0x02D08, "\xE1\x82\xA8" },
	{ 0x01E6F, "\xE1\xB9\xAE" },
	{ 0x02D2D, "\xE1\x83\x8D" },
	{ 0x01E69, "\xE1\xB9\xA8" },
	{ 0x003D7, "\xCF\x8F" },
	{ 0x003D6, "\xCE\xA0" },
	{ 0x01E6B, "\xE1\xB9\xAA" },
	{ 0x01E65, "\xE1\xB9\xA4" },
	{ 0x003DB, "\xCF\x9A" },
	{ 0x01E33, "\xE1\xB8\xB2" },
	{ 0x1043C, "\xF0\x90\x90\x94" },
	{ 0x1043E, "\xF0\x90\x90\x96" },
	{ 0x01EDD, "\xE1\xBB\x9C" },
	{ 0x10438, "\xF0\x90\x90\x90" },
	{ 0x003C1, "\xCE\xA1" },
	{ 0x1043A, "\xF0\x90\x90\x92" },
	{ 0x003C3, "\xCE\xA3" },
	{ 0x003C2, "\xCE\xA3" },
	{ 0x003C5, "\xCE\xA5" },
	{ 0x003C4, "\xCE\xA4" },
	{ 0x003C7, "\xCE\xA7" },
	{ 0x02D00, "\xE1\x82\xA0" },
	{ 0x10442, "\xF0\x90\x90\x9A" },
	{ 0x003C8, "\xCE\xA8" },
	{ 0x003CB, "\xCE\xAB" },
	{ 0x003CA, "\xCE\xAA" },
	{ 0x003CD, "\xCE\x8E" },
	{ 0x0FF54, "\xEF\xBC\xB4" },
	{ 0x10434, "\xF0\x90\x90\x8C" },
	{ 0x01E27, "\xE1\xB8\xA6" },
	{ 0x1044A, "\xF0\x90\x90\xA2" },
	{ 0x0A787, "\xEA\x9E\x86" },
	{ 0x10436, "\xF0\x90\x90\x8E" },
	{ 0x02D0C, "\xE1\x82\xAC" },
	{ 0x10430, "\xF0\x90\x90\x88" },
	{ 0x10432, "\xF0\x90\x90\x8A" },
	{ 0x1042C, "\xF0\x90\x90\x84" },
	{ 0x02D10, "\xE1\x82\xB0" },
	{ 0x0A75D, "\xEA\x9D\x9C" },
	{ 0x01E51, "\xE1\xB9\x90" },
	{ 0x1042E, "\xF0\x90\x90\x86" },
	{ 0x01E53, "\xE1\xB9\x92" },
	{ 0x01EF3, "\xE1\xBB\xB2" },
	{ 0x01E55, "\xE1\xB9\x94" },
	{ 0x01E8D, "\xE1\xBA\x8C" },
	{ 0x01E57, "\xE1\xB9\x96" },
	{ 0x003E1, "\xCF\xA0" },
	{ 0x01E59, "\xE1\xB9\x98" },
	{ 0x003E3, "\xCF\xA2" },
	{ 0x01E5B, "\xE1\xB9\x9A" },
	{ 0x10428, "\xF0\x90\x90\x80" },
	{ 0x01E5D, "\xE1\xB9\x9C" },
	{ 0x1042A, "\xF0\x90\x90\x82" },
	{ 0x01E5F, "\xE1\xB9\x9E" },
	{ 0x0045C, "\xD0\x8C" },
	{ 0x0045E, "\xD0\x8E" },
	{ 0x00458, "\xD0\x88" },
	{ 0x0045D, "\xD0\x8D" },
	{ 0x01E83, "\xE1\xBA\x82" },
	{ 0x00443, "\xD0\xA3" },
	{ 0x003EF, "\xCF\xAE" },
	{ 0x00441, "\xD0\xA1" },
	{ 0x0045A, "\xD0\x8A" },
	{ 0x01E49, "\xE1\xB9\x88" },
	{ 0x00454, "\xD0\x84" },
	{ 0x01E4B, "\xE1\xB9\x8A" },
	{ 0x00456, "\xD0\x86" },
	{ 0x01E4D, "\xE1\xB9\x8C" },
	{ 0x00450, "\xD0\x80" },
	{ 0x01E4F, "\xE1\xB9\x8E" },
	{ 0x00452, "\xD0\x82" },
	{ 0x00103, "\xC4\x82" },
	{ 0x01E91, "\xE1\xBA\x90" },
	{ 0x0044C, "\xD0\xAC" },
	{ 0x0FF56, "\xEF\xBC\xB6" },
	{ 0x004B3, "\xD2\xB2" },
	{ 0x0044E, "\xD0\xAE" },
	{ 0x004B1, "\xD2\xB0" },
	{ 0x0A765, "\xEA\x9D\xA4" },
	{ 0x00448, "\xD0\xA8" },
	{ 0x0A767, "\xEA\x9D\xA6" },
	{ 0x0044A, "\xD0\xAA" },
	{ 0x0A769, "\xEA\x9D\xA8" },
	{ 0x00444, "\xD0\xA4" },
	{ 0x00446, "\xD0\xA6" },
	{ 0x00131, "\x49" },
	{ 0x0FF5A, "\xEF\xBC\xBA" },
	{ 0x00133, "\xC4\xB2" },
	{ 0x01ED9, "\xE1\xBB\x98" },
	{ 0x00440, "\xD0\xA0" },
	{ 0x01EA3, "\xE1\xBA\xA2" },
	{ 0x004A3, "\xD2\xA2" },
	{ 0x00442, "\xD0\xA2" },
	{ 0x10431, "\xF0\x90\x90\x89" },
	{ 0x01EAF, "\xE1\xBA\xAE" },
	{ 0x10433, "\xF0\x90\x90\x8B" },
	{ 0x0013A, "\xC4\xB9" },
	{ 0x10435, "\xF0\x90\x90\x8D" },
	{ 0x0013C, "\xC4\xBB" },
	{ 0x10437, "\xF0\x90\x90\x8F" },
	{ 0x0013E, "\xC4\xBD" },
	{ 0x10439, "\xF0\x90\x90\x91" },
	{ 0x00219, "\xC8\x98" },
	{ 0x1043B, "\xF0\x90\x90\x93" },
	{ 0x004BB, "\xD2\xBA" },
	{ 0x1043D, "\xF0\x90\x90\x95" },
	{ 0x004B5, "\xD2\xB4" },
	{ 0x1043F, "\xF0\x90\x90\x97" },
	{ 0x01EBD, "\xE1\xBA\xBC" },
	{ 0x00129, "\xC4\xA8" },
	{ 0x00167, "\xC5\xA6" },
	{ 0x0012B, "\xC4\xAA" },
	{ 0x004B7, "\xD2\xB6" },
	{ 0x0012D, "\xC4\xAC" },
	{ 0x01EBB, "\xE1\xBA\xBA" },
	{ 0x001C5, "\xC7\x84" },
	{ 0x00161, "\xC5\xA0" },
	{ 0x10429, "\xF0\x90\x90\x81" },
	{ 0x0A76F, "\xEA\x9D\xAE" },
	{ 0x1042B, "\xF0\x90\x90\x83" },
	{ 0x001C8, "\xC7\x87" },
	{ 0x1042D, "\xF0\x90\x90\x85" },
	{ 0x001CE, "\xC7\x8D" },
	{ 0x1042F, "\xF0\x90\x90\x87" },
	{ 0x001CC, "\xC7\x8A" },
	{ 0x01E87, "\xE1\xBA\x86" },
	{ 0x004AD, "\xD2\xAC" },
	{ 0x01E89, "\xE1\xBA\x88" },
	{ 0x00135, "\xC4\xB4" },
	{ 0x01E8B, "\xE1\xBA\x8A" },
	{ 0x00137, "\xC4\xB6" },
	{ 0x00121, "\xC4\xA0" },
	{ 0x00123, "\xC4\xA2" },
	{ 0x01E8F, "\xE1\xBA\x8E" },
	{ 0x0011D, "\xC4\x9C" },
	{ 0x01EB1, "\xE1\xBA\xB0" },
	{ 0x0011F, "\xC4\x9E" },
	{ 0x01EB3, "\xE1\xBA\xB2" },
	{ 0x0A7A1, "\xEA\x9E\xA0" },
	{ 0x02D02, "\xE1\x82\xA2" },
	{ 0x00119, "\xC4\x98" },
	{ 0x10441, "\xF0\x90\x90\x99" },
	{ 0x0011B, "\xC4\x9A" },
	{ 0x10443, "\xF0\x90\x90\x9B" },
	{ 0x00115, "\xC4\x94" },
	{ 0x02D04, "\xE1\x82\xA4" },
	{ 0x10444, "\xF0\x90\x90\x9C" },
	{ 0x10447, "\xF0\x90\x90\x9F" },
	{ 0x10446, "\xF0\x90\x90\x9E" },
	{ 0x00171, "\xC5\xB0" },
	{ 0x10448, "\xF0\x90\x90\xA0" },
	{ 0x00173, "\xC5\xB2" },
	{ 0x00117, "\xC4\x96" },
	{ 0x00175, "\xC5\xB4" },
	{ 0x1044C, "\xF0\x90\x90\xA4" },
	{ 0x00177, "\xC5\xB6" },
	{ 0x1044E, "\xF0\x90\x90\xA6" },
	{ 0x01EA7, "\xE1\xBA\xA6" },
	{ 0x003E7, "\xCF\xA6" },
	{ 0x0043F, "\xD0\x9F" },
	{ 0x0017A, "\xC5\xB9" },
	{ 0x0A739, "\xEA\x9C\xB8" },
	{ 0x00111, "\xC4\x90" },
	{ 0x0017F, "\x53" },
	{ 0x0017E, "\xC5\xBD" },
	{ 0x004E9, "\xD3\xA8" },
	{ 0x00113, "\xC4\x92" },
	{ 0x00435, "\xD0\x95" },
	{ 0x003ED, "\xCF\xAC" },
	{ 0x00165, "\xC5\xA4" },
	{ 0x00577, "\xD5\x87" },
	{ 0x01ED5, "\xE1\xBB\x94" },
	{ 0x0010D, "\xC4\x8C" },
	{ 0x00169, "\xC5\xA8" },
	{ 0x00257, "\xC6\x8A" },
	{ 0x0043D, "\xD0\x9D" },
	{ 0x00125, "\xC4\xA4" },
	{ 0x0016D, "\xC5\xAC" },
	{ 0x0010F, "\xC4\x8E" },
	{ 0x00109, "\xC4\x88" },
	{ 0x0010B, "\xC4\x8A" },
	{ 0x004ED, "\xD3\xAC" },
	{ 0x00105, "\xC4\x84" },
	{ 0x01EC1, "\xE1\xBB\x80" },
	{ 0x0217B, "\xE2\x85\xAB" },
	{ 0x01EC3, "\xE1\xBB\x82" },
	{ 0x0A72B, "\xEA\x9C\xAA" },
	{ 0x003C0, "\xCE\xA0" },
	{ 0x00501, "\xD4\x80" },
	{ 0x003C6, "\xCE\xA6" },
	{ 0x024DC, "\xE2\x93\x82" },
	{ 0x00107, "\xC4\x86" },
	{ 0x02C65, "\xC8\xBA" },
	{ 0x01ECB, "\xE1\xBB\x8A" },
	{ 0x01F70, "\xE1\xBE\xBA" },
	{ 0x01F73, "\xE1\xBF\x89" },
	{ 0x003C9, "\xCE\xA9" },
	{ 0x003CE, "\xCE\x8F" },
	{ 0x00101, "\xC4\x80" },
	{ 0x01EF1, "\xE1\xBB\xB0" },
	{ 0x004DB, "\xD3\x9A" },
	{ 0x01ED7, "\xE1\xBB\x96" },
	{ 0x00517, "\xD4\x96" },
	{ 0x01EF5, "\xE1\xBB\xB4" },
	{ 0x003D1, "\xCE\x98" },
	{ 0x01EF7, "\xE1\xBB\xB6" },
	{ 0x00513, "\xD4\x92" },
	{ 0x01EF9, "\xE1\xBB\xB8" },
	{ 0x003D5, "\xCE\xA6" },
	{ 0x01EFB, "\xE1\xBB\xBA" },
	{ 0x0018C, "\xC6\x8B" },
	{ 0x01EFD, "\xE1\xBB\xBC" },
	{ 0x003D9, "\xCF\x98" },
	{ 0x01EFF, "\xE1\xBB\xBE" },
	{ 0x01E93, "\xE1\xBA\x92" },
	{ 0x01EE1, "\xE1\xBB\xA0" },
	{ 0x02D22, "\xE1\x83\x82" },
	{ 0x01EE3, "\xE1\xBB\xA2" },
	{ 0x02D1D, "\xE1\x82\xBD" },
	{ 0x00449, "\xD0\xA9" },
	{ 0x01FE5, "\xE1\xBF\xAC" },
	{ 0x01EE7, "\xE1\xBB\xA6" },
	{ 0x02D19, "\xE1\x82\xB9" },
	{ 0x02D1B, "\xE1\x82\xBB" },
	{ 0x02D15, "\xE1\x82\xB5" },
	{ 0x0044F, "\xD0\xAF" },
	{ 0x02D17, "\xE1\x82\xB7" },
	{ 0x00471, "\xD1\xB0" },
	{ 0x02D11, "\xE1\x82\xB1" },
	{ 0x00473, "\xD1\xB2" },
	{ 0x02D13, "\xE1\x82\xB3" },
	{ 0x00475, "\xD1\xB4" },
	{ 0x02D0D, "\xE1\x82\xAD" },
	{ 0x00477, "\xD1\xB6" },
	{ 0x02D0F, "\xE1\x82\xAF" },
	{ 0x0044B, "\xD0\xAB" },
	{ 0x02D09, "\xE1\x82\xA9" },
	{ 0x0047B, "\xD1\xBA" },
	{ 0x02D0B, "\xE1\x82\xAB" },
	{ 0x02D05, "\xE1\x82\xA5" },
	{ 0x02D07, "\xE1\x82\xA7" },
	{ 0x0044D, "\xD0\xAD" },
	{ 0x02D01, "\xE1\x82\xA1" },
	{ 0x00461, "\xD1\xA0" },
	{ 0x02D03, "\xE1\x82\xA3" },
	{ 0x0015B, "\xC5\x9A" },
	{ 0x00155, "\xC5\x94" },
	{ 0x00465, "\xD1\xA4" },
	{ 0x001D2, "\xC7\x91" },
	{ 0x00467, "\xD1\xA6" },
	{ 0x00157, "\xC5\x96" },
	{ 0x00469, "\xD1\xA8" },
	{ 0x00151, "\xC5\x90" },
	{ 0x0046B, "\xD1\xAA" },
	{ 0x00153, "\xC5\x92" },
	{ 0x0046D, "\xD1\xAC" },
	{ 0x001DA, "\xC7\x99" },
	{ 0x0046F, "\xD1\xAE" },
	{ 0x0021F, "\xC8\x9E" },
	{ 0x00491, "\xD2\x90" },
	{ 0x0014D, "\xC5\x8C" },
	{ 0x00493, "\xD2\x92" },
	{ 0x0014F, "\xC5\x8E" },
	{ 0x00495, "\xD2\x94" },
	{ 0x0A735, "\xEA\x9C\xB4" },
	{ 0x00497, "\xD2\x96" },
	{ 0x00148, "\xC5\x87" },
	{ 0x0014B, "\xC5\x8A" },
	{ 0x001C6, "\xC7\x84" },
	{ 0x0049B, "\xD2\x9A" },
	{ 0x00144, "\xC5\x83" },
	{ 0x0049D, "\xD2\x9C" },
	{ 0x00146, "\xC5\x85" },
	{ 0x00140, "\xC4\xBF" },
	{ 0x01F23, "\xE1\xBC\xAB" },
	{ 0x00509, "\xD4\x88" },
	{ 0x01F21, "\xE1\xBC\xA9" },
	{ 0x00142, "\xC5\x81" },
	{ 0x001BD, "\xC6\xBC" },
	{ 0x01F24, "\xE1\xBC\xAC" },
	{ 0x001F2, "\xC7\xB1" },
	{ 0x0016B, "\xC5\xAA" },
	{ 0x001BF, "\xC7\xB7" },
	{ 0x01EA9, "\xE1\xBA\xA8" },
	{ 0x001C9, "\xC7\x87" },
	{ 0x0016F, "\xC5\xAE" },
	{ 0x001B9, "\xC6\xB8" },
	{ 0x0048D, "\xD2\x8C" },
	{ 0x001B4, "\xC6\xB3" },
	{ 0x0048F, "\xD2\x8E" },
	{ 0x001B6, "\xC6\xB5" },
	{ 0x01F30, "\xE1\xBC\xB8" },
	{ 0x001B0, "\xC6\xAF" },
	{ 0x00481, "\xD2\x80" },
	{ 0x001AD, "\xC6\xAC" },
	{ 0x01F34, "\xE1\xBC\xBC" },
	{ 0x001A8, "\xC6\xA7" },
	{ 0x00455, "\xD0\x85" },
	{ 0x001A5, "\xC6\xA4" },
	{ 0x0048B, "\xD2\x8A" },
	{ 0x001A1, "\xC6\xA0" },
	{ 0x00447, "\xD0\xA7" },
	{ 0x0017C, "\xC5\xBB" },
	{ 0x004BD, "\xD2\xBC" },
	{ 0x001A3, "\xC6\xA2" },
	{ 0x0217C, "\xE2\x85\xAC" },
	{ 0x01F03, "\xE1\xBC\x8B" },
	{ 0x004A1, "\xD2\xA0" },
	{ 0x0019E, "\xC8\xA0" },
	{ 0x00199, "\xC6\x98" },
	{ 0x01F07, "\xE1\xBC\x8F" },
	{ 0x004A5, "\xD2\xA4" },
	{ 0x0019A, "\xC8\xBD" },
	{ 0x004A7, "\xD2\xA6" },
	{ 0x00195, "\xC7\xB6" },
	{ 0x00580, "\xD5\x90" },
	{ 0x0A66D, "\xEA\x99\xAC" },
	{ 0x00582, "\xD5\x92" },
	{ 0x00192, "\xC6\x91" },
	{ 0x0A66B, "\xEA\x99\xAA" },
	{ 0x0A667, "\xEA\x99\xA6" },
	{ 0x0A661, "\xEA\x99\xA0" },
	{ 0x00185, "\xC6\x84" },
	{ 0x004D1, "\xD3\x90" },
	{ 0x01F75, "\xE1\xBF\x8B" },
	{ 0x004D3, "\xD3\x92" },
	{ 0x02CE3, "\xE2\xB3\xA2" },
	{ 0x004E7, "\xD3\xA6" },
	{ 0x0A663, "\xEA\x99\xA2" },
	{ 0x004D7, "\xD3\x96" },
	{ 0x003E5, "\xCF\xA4" },
	{ 0x004D9, "\xD3\x98" },
	{ 0x003EB, "\xCF\xAA" },
	{ 0x0015F, "\xC5\x9E" },
	{ 0x003E9, "\xCF\xA8" },
	{ 0x004EF, "\xD3\xAE" },
	{ 0x01F79, "\xE1\xBF\xB9" },
	{ 0x004DF, "\xD3\x9E" },
	{ 0x01F63, "\xE1\xBD\xAB" },
	{ 0x0A65F, "\xEA\x99\x9E" },
	{ 0x00183, "\xC6\x82" },
	{ 0x004F1, "\xD3\xB0" },
	{ 0x004C2, "\xD3\x81" },
	{ 0x0A659, "\xEA\x99\x98" },
	{ 0x004C4, "\xD3\x83" },
	{ 0x001FD, "\xC7\xBC" },
	{ 0x004C6, "\xD3\x85" },
	{ 0x0A65B, "\xEA\x99\x9A" },
	{ 0x004C8, "\xD3\x87" },
	{ 0x001FF, "\xC7\xBE" },
	{ 0x004CA, "\xD3\x89" },
	{ 0x0A655, "\xEA\x99\x94" },
	{ 0x004CC, "\xD3\x8B" },
	{ 0x004CF, "\xD3\x80" },
	{ 0x004CE, "\xD3\x8D" },
	{ 0x001F9, "\xC7\xB8" },
	{ 0x00251, "\xE2\xB1\xAD" },
	{ 0x004F3, "\xD3\xB2" },
	{ 0x0A657, "\xEA\x99\x96" },
	{ 0x001FB, "\xC7\xBA" },
	{ 0x0A651, "\xEA\x99\x90" },
	{ 0x001F5, "\xC7\xB4" },
	{ 0x0A653, "\xEA\x99\x92" },
	{ 0x004F9, "\xD3\xB8" },
	{ 0x000E3, "\xC3\x83" },
	{ 0x024D7, "\xE2\x92\xBD" },
	{ 0x0A64D, "\xEA\x99\x8C" },
	{ 0x004FD, "\xD3\xBC" },
	{ 0x01F7D, "\xE1\xBF\xBB" },
	{ 0x004FF, "\xD3\xBE" },
	{ 0x00180, "\xC9\x83" },
	{ 0x004E1, "\xD3\xA0" },
	{ 0x001F3, "\xC7\xB1" },
	{ 0x00240, "\xE2\xB1\xBF" },
	{ 0x024DE, "\xE2\x93\x84" },
	{ 0x00242, "\xC9\x81" },
	{ 0x01F45, "\xE1\xBD\x8D" },
	{ 0x004D5, "\xD3\x94" },
	{ 0x00188, "\xC6\x87" },
	{ 0x0A649, "\xEA\x99\x88" },
	{ 0x001ED, "\xC7\xAC" },
	{ 0x0A64B, "\xEA\x99\x8A" },
	{ 0x001EF, "\xC7\xAE" },
	{ 0x0A645, "\xEA\x99\x84" },
	{ 0x001E9, "\xC7\xA8" },
	{ 0x004DD, "\xD3\x9C" },
	{ 0x01E45, "\xE1\xB9\x84" },
	{ 0x0A647, "\xEA\x99\x86" },
	{ 0x001EB, "\xC7\xAA" },
	{ 0x0A641, "\xEA\x99\x80" },
	{ 0x01F57, "\xE1\xBD\x9F" },
	{ 0x01E05, "\xE1\xB8\x84" },
	{ 0x00584, "\xD5\x94" },
	{ 0x004F5, "\xD3\xB4" },
	{ 0x01F33, "\xE1\xBC\xBB" },
	{ 0x01F15, "\xE1\xBC\x9D" },
	{ 0x00231, "\xC8\xB0" },
	{ 0x001E5, "\xC7\xA4" },
	{ 0x0A643, "\xEA\x99\x82" },
	{ 0x001E7, "\xC7\xA6" },
	{ 0x001E1, "\xC7\xA0" },
	{ 0x001E3, "\xC7\xA2" },
	{ 0x001DC, "\xC7\x9B" },
	{ 0x001DD, "\xC6\x8E" },
	{ 0x001DF, "\xC7\x9E" },
	{ 0x001D8, "\xC7\x97" },
	{ 0x0FF59, "\xEF\xBC\xB9" },
	{ 0x0051F, "\xD4\x9E" },
	{ 0x0FF55, "\xEF\xBC\xB5" },
	{ 0x0FF57, "\xEF\xBC\xB7" },
	{ 0x0FF51, "\xEF\xBC\xB1" },
	{ 0x01F05, "\xE1\xBC\x8D" },
	{ 0x0FF53, "\xEF\xBC\xB3" },
	{ 0x01FAE, "\xE1\xBD\xAE\xCE\x99" },
	{ 0x0FF4D, "\xEF\xBC\xAD" },
	{ 0x01FAC, "\xE1\xBD\xAC\xCE\x99" },
	{ 0x0FF48, "\xEF\xBC\xA8" },
	{ 0x00505, "\xD4\x84" },
	{ 0x01FB3, "\xE1\xBE\xBC" },
	{ 0x0FF4A, "\xEF\xBC\xAA" },
	{ 0x01FB1, "\xE1\xBE\xB9" },
	{ 0x0FF45, "\xEF\xBC\xA5" },
	{ 0x0FF46, "\xEF\xBC\xA6" },
	{ 0x01F31, "\xE1\xBC\xB9" },
	{ 0x02C37, "\xE2\xB0\x87" },
	{ 0x0050D, "\xD4\x8C" },
	{ 0x01F32, "\xE1\xBC\xBA" },
	{ 0x0FF47, "\xEF\xBC\xA7" },
	{ 0x00211, "\xC8\x90" },
	{ 0x01FBE, "\xCE\x99" },
	{ 0x01F36, "\xE1\xBC\xBE" },
	{ 0x0FF41, "\xEF\xBC\xA1" },
	{ 0x00215, "\xC8\x94" },
	{ 0x0FF42, "\xEF\xBC\xA2" },
	{ 0x02C3D, "\xE2\xB0\x8D" },
	{ 0x0FF43, "\xEF\xBC\xA3" },
	{ 0x02C31, "\xE2\xB0\x81" },
	{ 0x02174, "\xE2\x85\xA4" },
	{ 0x02C33, "\xE2\xB0\x83" },
	{ 0x02176, "\xE2\x85\xA6" },
	{ 0x01F20, "\xE1\xBC\xA8" },
	{ 0x0A695, "\xEA\x9A\x94" },
	{ 0x01F22, "\xE1\xBC\xAA" },
	{ 0x01F25, "\xE1\xBC\xAD" },
	{ 0x00562, "\xD4\xB2" },
	{ 0x01F27, "\xE1\xBC\xAF" },
	{ 0x01F26, "\xE1\xBC\xAE" },
	{ 0x0217E, "\xE2\x85\xAE" },
	{ 0x00566, "\xD4\xB6" },
	{ 0x0A697, "\xEA\x9A\x96" },
	{ 0x02C3F, "\xE2\xB0\x8F" },
	{ 0x0A691, "\xEA\x9A\x90" },
	{ 0x001D6, "\xC7\x95" },
	{ 0x0A693, "\xEA\x9A\x92" },
	{ 0x00233, "\xC8\xB2" },
	{ 0x01F51, "\xE1\xBD\x99" },
	{ 0x01F95, "\xE1\xBE\x9D" },
	{ 0x01F53, "\xE1\xBD\x9B" },
	{ 0x0A68D, "\xEA\x9A\x8C" },
	{ 0x01F55, "\xE1\xBD\x9D" },
	{ 0x02CCF, "\xE2\xB3\x8E" },
	{ 0x01F9E, "\xE1\xBC\xAE\xCE\x99" },
	{ 0x0A68F, "\xEA\x9A\x8E" },
	{ 0x01F9C, "\xE1\xBC\xAC\xCE\x99" },
	{ 0x0A689, "\xEA\x9A\x88" },
	{ 0x0A68B, "\xEA\x9A\x8A" },
	{ 0x0A685, "\xEA\x9A\x84" },
	{ 0x0A687, "\xEA\x9A\x86" },
	{ 0x02C51, "\xE2\xB0\xA1" },
	{ 0x0FF50, "\xEF\xBC\xB0" },
	{ 0x02C53, "\xE2\xB0\xA3" },
	{ 0x02C52, "\xE2\xB0\xA2" },
	{ 0x02C55, "\xE2\xB0\xA5" },
	{ 0x02C54, "\xE2\xB0\xA4" },
	{ 0x02C57, "\xE2\xB0\xA7" },
	{ 0x02C56, "\xE2\xB0\xA6" },
	{ 0x0A725, "\xEA\x9C\xA4" },
	{ 0x0FF58, "\xEF\xBC\xB8" },
	{ 0x02C5B, "\xE2\xB0\xAB" },
	{ 0x02C5A, "\xE2\xB0\xAA" },
	{ 0x0A681, "\xEA\x9A\x80" },
	{ 0x02C6C, "\xE2\xB1\xAB" },
	{ 0x0A683, "\xEA\x9A\x82" },
	{ 0x02C5E, "\xE2\xB0\xAE" },
	{ 0x02C41, "\xE2\xB0\x91" },
	{ 0x02C40, "\xE2\xB0\x90" },
	{ 0x01F97, "\xE1\xBE\x9F" },
	{ 0x01F71, "\xE1\xBE\xBB" },
	{ 0x02C45, "\xE2\xB0\x95" },
	{ 0x0FF44, "\xEF\xBC\xA4" },
	{ 0x02C47, "\xE2\xB0\x97" },
	{ 0x02C46, "\xE2\xB0\x96" },
	{ 0x02C49, "\xE2\xB0\x99" },
	{ 0x00256, "\xC6\x89" },
	{ 0x02C4B, "\xE2\xB0\x9B" },
	{ 0x02C4A, "\xE2\xB0\x9A" },
	{ 0x02C4D, "\xE2\xB0\x9D" },
	{ 0x01F7B, "\xE1\xBF\xAB" },
	{ 0x02C4F, "\xE2\xB0\x9F" },
	{ 0x02C42, "\xE2\xB0\x92" },
	{ 0x02C43, "\xE2\xB0\x93" },
	{ 0x01D7D, "\xE2\xB1\xA3" },
	{ 0x01D79, "\xEA\x9D\xBD" },
	{ 0x01F61, "\xE1\xBD\xA9" },
	{ 0x01F60, "\xE1\xBD\xA8" },
	{ 0x02C44, "\xE2\xB0\x94" },
	{ 0x01F62, "\xE1\xBD\xAA" },
	{ 0x01F65, "\xE1\xBD\xAD" },
	{ 0x0037C, "\xCF\xBE" },
	{ 0x01F67, "\xE1\xBD\xAF" },
	{ 0x01F66, "\xE1\xBD\xAE" },
	{ 0x01FCC, "\xCE\x97\xCE\x99" },
	{ 0x00463, "\xD1\xA2" },
	{ 0x01E1D, "\xE1\xB8\x9C" },
	{ 0x0037D, "\xCF\xBF" },
	{ 0x01FD0, "\xE1\xBF\x98" },
	{ 0x0037B, "\xCF\xBD" },
	{ 0x02C50, "\xE2\xB0\xA0" },
	{ 0x00377, "\xCD\xB6" },
	{ 0x02C4E, "\xE2\xB0\x9E" },
	{ 0x00371, "\xCD\xB0" },
	{ 0x00225, "\xC8\xA4" },
	{ 0x01F92, "\xE1\xBE\x9A" },
	{ 0x02C66, "\xC8\xBE" },
	{ 0x01F94, "\xE1\xBE\x9C" },
	{ 0x02C68, "\xE2\xB1\xA7" },
	{ 0x01F96, "\xE1\xBE\x9E" },
	{ 0x0217F, "\xE2\x85\xAF" },
	{ 0x01F98, "\xE1\xBC\xA8\xCE\x99" },
	{ 0x0022D, "\xC8\xAC" },
	{ 0x01F9A, "\xE1\xBC\xAA\xCE\x99" },
	{ 0x01F9D, "\xE1\xBC\xAD\xCE\x99" },
	{ 0x02CA3, "\xE2\xB2\xA2" },
	{ 0x01F9F, "\xE1\xBC\xAF\xCE\x99" },
	{ 0x02CA1, "\xE2\xB2\xA0" },
	{ 0x02CCD, "\xE2\xB3\x8C" },
	{ 0x02C95, "\xE2\xB2\x94" },
	{ 0x02C58, "\xE2\xB0\xA8" },
	{ 0x02C97, "\xE2\xB2\x96" },
	{ 0x00373, "\xCD\xB2" },
	{ 0x02C99, "\xE2\xB2\x98" },
	{ 0x00345, "\xCE\x99" },
	{ 0x02C9B, "\xE2\xB2\x9A" },
	{ 0x0025B, "\xC6\x90" },
	{ 0x02C9D, "\xE2\xB2\x9C" },
	{ 0x00254, "\xC6\x86" },
	{ 0x02C9F, "\xE2\xB2\x9E" },
	{ 0x00511, "\xD4\x90" },
	{ 0x02CB3, "\xE2\xB2\xB2" },
	{ 0x003BC, "\xCE\x9C" },
	{ 0x0A733, "\xEA\x9C\xB2" },
	{ 0x0022F, "\xC8\xAE" },
	{ 0x01FB0, "\xE1\xBE\xB8" },
	{ 0x00229, "\xC8\xA8" },
	{ 0x02C87, "\xE2\xB2\x86" },
	{ 0x02C6A, "\xE2\xB1\xA9" },
	{ 0x02C89, "\xE2\xB2\x88" },
	{ 0x0A727, "\xEA\x9C\xA6" },
	{ 0x02C8B, "\xE2\xB2\x8A" },
	{ 0x0024B, "\xC9\x8A" },
	{ 0x02C8D, "\xE2\xB2\x8C" },
	{ 0x003BD, "\xCE\x9D" },
	{ 0x02C8F, "\xE2\xB2\x8E" },
	{ 0x024D5, "\xE2\x92\xBB" },
	{ 0x0023C, "\xC8\xBB" },
	{ 0x00503, "\xD4\x82" },
	{ 0x02184, "\xE2\x86\x83" },
	{ 0x01FA1, "\xE1\xBE\xA9" },
	{ 0x01FA0, "\xE1\xBE\xA8" },
	{ 0x00507, "\xD4\x86" },
	{ 0x01FA2, "\xE1\xBE\xAA" },
	{ 0x01FA5, "\xE1\xBE\xAD" },
	{ 0x01FA4, "\xE1\xBE\xAC" },
	{ 0x01FA7, "\xE1\xBE\xAF" },
	{ 0x01FA6, "\xE1\xBE\xAE" },
	{ 0x01FA9, "\xE1\xBD\xA9\xCE\x99" },
	{ 0x01FA8, "\xE1\xBD\xA8\xCE\x99" },
	{ 0x0050F, "\xD4\x8E" },
	{ 0x01FAA, "\xE1\xBD\xAA\xCE\x99" },
	{ 0x01FAD, "\xE1\xBD\xAD\xCE\x99" },
	{ 0x02C93, "\xE2\xB2\x92" },
	{ 0x01FAF, "\xE1\xBD\xAF\xCE\x99" },
	{ 0x02C91, "\xE2\xB2\x90" },
	{ 0x01E47, "\xE1\xB9\x86" },
	{ 0x02CA5, "\xE2\xB2\xA4" },
	{ 0x003BE, "\xCE\x9E" },
	{ 0x02CA7, "\xE2\xB2\xA6" },
	{ 0x003BF, "\xCE\x9F" },
	{ 0x003B8, "\xCE\x98" },
	{ 0x00223, "\xC8\xA2" },
	{ 0x0FF52, "\xEF\xBC\xB2" },
	{ 0x003B9, "\xCE\x99" },
	{ 0x0A791, "\xEA\x9E\x90" },
	{ 0x01E41, "\xE1\xB9\x80" },
	{ 0x0A793, "\xEA\x9E\x92" },
	{ 0x02C4C, "\xE2\xB0\x9C" },
	{ 0x003BA, "\xCE\x9A" },
	{ 0x00523, "\xD4\xA2" },
	{ 0x02CE1, "\xE2\xB3\xA0" },
	{ 0x02C48, "\xE2\xB0\x98" },
	{ 0x02CD5, "\xE2\xB3\x94" },
	{ 0x00457, "\xD0\x87" },
	{ 0x003BB, "\xCE\x9B" },
	{ 0x003B4, "\xCE\x94" },
	{ 0x0A7A5, "\xEA\x9E\xA4" },
	{ 0x0FF4F, "\xEF\xBC\xAF" },
	{ 0x003B5, "\xCE\x95" },
	{ 0x001D4, "\xC7\x93" },
	{ 0x02CDD, "\xE2\xB3\x9C" },
	{ 0x0045F, "\xD0\x8F" },
	{ 0x003B6, "\xCE\x96" },
	{ 0x001D0, "\xC7\x8F" },
	{ 0x003B7, "\xCE\x97" },
	{ 0x0FF4B, "\xEF\xBC\xAB" },
	{ 0x00280, "\xC6\xA6" },
	{ 0x0024D, "\xC9\x8C" },
	{ 0x0A7A9, "\xEA\x9E\xA8" },
	{ 0x01EA5, "\xE1\xBA\xA4" },
	{ 0x0FF4E, "\xEF\xBC\xAE" },
	{ 0x01EAB, "\xE1\xBA\xAA" },
	{ 0x0FF4C, "\xEF\xBC\xAC" },
	{ 0x003B1, "\xCE\x91" },
	{ 0x00288, "\xC6\xAE" },
	{ 0x01E67, "\xE1\xB9\xA6" },
	{ 0x0028A, "\xC6\xB1" },
	{ 0x01E61, "\xE1\xB9\xA0" },
	{ 0x0028C, "\xC9\x85" },
	{ 0x01E63, "\xE1\xB9\xA2" },
	{ 0x003B2, "\xCE\x92" },
	{ 0x003B3, "\xCE\x93" },
	{ 0x02CC1, "\xE2\xB3\x80" },
	{ 0x10440, "\xF0\x90\x90\x98" },
	{ 0x01FE0, "\xE1\xBF\xA8" },
	{ 0x01E95, "\xE1\xBA\x94" },
	{ 0x02CC5, "\xE2\xB3\x84" },
	{ 0x01E9B, "\xE1\xB9\xA0" },
	{ 0x003AC, "\xCE\x86" },
	{ 0x00253, "\xC6\x81" },
	{ 0x0015D, "\xC5\x9C" },
	{ 0x0047D, "\xD1\xBC" },
	{ 0x003AD, "\xCE\x88" },
	{ 0x0047F, "\xD1\xBE" },
	{ 0x003AE, "\xCE\x89" },
	{ 0x00479, "\xD1\xB8" },
	{ 0x00570, "\xD5\x80" },
	{ 0x00573, "\xD5\x83" },
	{ 0x00572, "\xD5\x82" },
	{ 0x003AF, "\xCE\x8A" },
	{ 0x00574, "\xD5\x84" },
	{ 0x01E85, "\xE1\xBA\x84" },
	{ 0x00576, "\xD5\x86" },
	{ 0x003F8, "\xCF\xB7" },
	{ 0x00578, "\xD5\x88" },
	{ 0x0057B, "\xD5\x8B" },
	{ 0x0057A, "\xD5\x8A" },
	{ 0x0057D, "\xD5\x8D" },
	{ 0x0057C, "\xD5\x8C" },
	{ 0x0057F, "\xD5\x8F" },
	{ 0x0057E, "\xD5\x8E" },
	{ 0x003FB, "\xCF\xBA" },
	{ 0x00227, "\xC8\xA6" },
	{ 0x003F5, "\xCE\x95" },
	{ 0x0A7A3, "\xEA\x9E\xA2" },
	{ 0x02179, "\xE2\x85\xA9" },
	{ 0x02CDF, "\xE2\xB3\x9E" },
	{ 0x003F0, "\xCE\x9A" },
	{ 0x02CD9, "\xE2\xB3\x98" },
	{ 0x00569, "\xD4\xB9" },
	{ 0x00568, "\xD4\xB8" },
	{ 0x003F1, "\xCE\xA1" },
	{ 0x0056A, "\xD4\xBA" },
	{ 0x003F2, "\xCF\xB9" },
	{ 0x0056C, "\xD4\xBC" },
	{ 0x0056F, "\xD4\xBF" },
	{ 0x0056E, "\xD4\xBE" },
	{ 0x02C3C, "\xE2\xB0\x8C" },
	{ 0x02C3E, "\xE2\xB0\x8E" },
	{ 0x02CEC, "\xE2\xB3\xAB" },
	{ 0x02C38, "\xE2\xB0\x88" },
	{ 0x02C3A, "\xE2\xB0\x8A" },
	{ 0x02C34, "\xE2\xB0\x84" },
	{ 0x00575, "\xD5\x85" },
	{ 0x02C36, "\xE2\xB0\x86" },
	{ 0x02C30, "\xE2\xB0\x80" },
	{ 0x02C32, "\xE2\xB0\x82" },
	{ 0x00571, "\xD5\x81" },
	{ 0x003DD, "\xCF\x9C" },
	{ 0x024E3, "\xE2\x93\x89" },
	{ 0x024D0, "\xE2\x92\xB6" },
	{ 0x003DF, "\xCF\x9E" },
	{ 0x01F35, "\xE1\xBC\xBD" },
	{ 0x01ED3, "\xE1\xBB\x92" },
	{ 0x01E21, "\xE1\xB8\xA0" },
	{ 0x01F37, "\xE1\xBC\xBF" },
	{ 0x0A783, "\xEA\x9E\x82" },
	{ 0x00079, "\x59" },
	{ 0x0A781, "\xEA\x9E\x80" },
	{ 0x0007A, "\x5A" },
	{ 0x00586, "\xD5\x96" },
	{ 0x003CC, "\xCE\x8C" },
	{ 0x0A785, "\xEA\x9E\x84" },
	{ 0x0006F, "\x4F" },
	{ 0x00076, "\x56" },
	{ 0x0006D, "\x4D" },
	{ 0x0021B, "\xC8\x9A" },
	{ 0x00247, "\xC9\x86" },
	{ 0x00070, "\x50" },
	{ 0x0006B, "\x4B" },
	{ 0x00217, "\xC8\x96" },
	{ 0x02CC9, "\xE2\xB3\x88" },
	{ 0x00064, "\x44" },
	{ 0x00075, "\x55" },
	{ 0x00127, "\xC4\xA6" },
	{ 0x00065, "\x45" },
	{ 0x00078, "\x58" },
	{ 0x00066, "\x46" },
	{ 0x00067, "\x47" },
	{ 0x01EA1, "\xE1\xBA\xA0" },
	{ 0x01F14, "\xE1\xBC\x9C" },
	{ 0x0A64F, "\xEA\x99\x8E" },
	{ 0x0012F, "\xC4\xAE" },
	{ 0x00062, "\x42" },
	{ 0x00063, "\x43" },
	{ 0x01F10, "\xE1\xBC\x98" },
	{ 0x01E01, "\xE1\xB8\x80" },
	{ 0x01ECD, "\xE1\xBB\x8C" },
	{ 0x01E07, "\xE1\xB8\x86" },
	{ 0x01ECF, "\xE1\xBB\x8E" },
	{ 0x01F11, "\xE1\xBC\x99" },
	{ 0x00130, "\xC4\xB0" },
	{ 0x01E0B, "\xE1\xB8\x8A" },
	{ 0x01F12, "\xE1\xBC\x9A" },
	{ 0x0A723, "\xEA\x9C\xA2" },
	{ 0x01F13, "\xE1\xBC\x9B" },
	{ 0x024D2, "\xE2\x92\xB8" },
	{ 0x00525, "\xD4\xA4" },
	{ 0x024E0, "\xE2\x93\x86" },
	{ 0x01EB5, "\xE1\xBA\xB4" },
	{ 0x00527, "\xD4\xA6" },
	{ 0x00292, "\xC6\xB7" },
	{ 0x004A9, "\xD2\xA8" },
	{ 0x00521, "\xD4\xA0" },
	{ 0x0A729, "\xEA\x9C\xA8" },
	{ 0x01F04, "\xE1\xBC\x8C" },
	{ 0x000E7, "\xC3\x87" },
	{ 0x0A669, "\xEA\x99\xA8" },
	{ 0x000E5, "\xC3\x85" },
	{ 0x004AB, "\xD2\xAA" },
	{ 0x01F06, "\xE1\xBC\x8E" },
	{ 0x01F00, "\xE1\xBC\x88" },
	{ 0x01F02, "\xE1\xBC\x8A" },
	{ 0x01F7C, "\xE1\xBF\xBA" },
	{ 0x000EF, "\xC3\x8F" },
	{ 0x004BF, "\xD2\xBE" },
	{ 0x02C73, "\xE2\xB1\xB2" },
	{ 0x01F78, "\xE1\xBF\xB8" },
	{ 0x001CB, "\xC7\x8A" },
	{ 0x01F7A, "\xE1\xBF\xAA" },
	{ 0x01F74, "\xE1\xBF\x8A" },
	{ 0x02C35, "\xE2\xB0\x85" },
	{ 0x01F76, "\xE1\xBF\x9A" },
	{ 0x02C3B, "\xE2\xB0\x8B" },
	{ 0x01F72, "\xE1\xBF\x88" },
	{ 0x02C39, "\xE2\xB0\x89" },
	{ 0x02C61, "\xE2\xB1\xA0" },
	{ 0x0050B, "\xD4\x8A" },
	{ 0x02C5D, "\xE2\xB0\xAD" },
	{ 0x00565, "\xD4\xB5" },
	{ 0x024E7, "\xE2\x93\x8D" },
	{ 0x00567, "\xD4\xB7" },
	{ 0x02CBF, "\xE2\xB2\xBE" },
	{ 0x00561, "\xD4\xB1" },
	{ 0x02CBB, "\xE2\xB2\xBA" },
	{ 0x01EE9, "\xE1\xBB\xA8" },
	{ 0x01F41, "\xE1\xBD\x89" },
	{ 0x004E5, "\xD3\xA4" },
	{ 0x01F43, "\xE1\xBD\x8B" },
	{ 0x024E1, "\xE2\x93\x87" },
	{ 0x02CAD, "\xE2\xB2\xAC" },
	{ 0x02CAF, "\xE2\xB2\xAE" },
	{ 0x02CA9, "\xE2\xB2\xA8" },
	{ 0x02CAB, "\xE2\xB2\xAA" },
	{ 0x01FAB, "\xE1\xBD\xAB\xCE\x99" },
	{ 0x00445, "\xD0\xA5" },
	{ 0x01F91, "\xE1\xBE\x99" },
	{ 0x01E81, "\xE1\xBA\x80" },
	{ 0x01F93, "\xE1\xBE\x9B" },
	{ 0x01F8D, "\xE1\xBC\x8D\xCE\x99" },
	{ 0x01F8F, "\xE1\xBC\x8F\xCE\x99" },
	{ 0x004EB, "\xD3\xAA" },
	{ 0x01F88, "\xE1\xBC\x88\xCE\x99" },
	{ 0x01F89, "\xE1\xBC\x89\xCE\x99" },
	{ 0x01F8A, "\xE1\xBC\x8A\xCE\x99" },
	{ 0x01F8B, "\xE1\xBC\x8B\xCE\x99" },
	{ 0x01F84, "\xE1\xBE\x8C" },
	{ 0x0021D, "\xC8\x9C" },
	{ 0x01F85, "\xE1\xBE\x8D" },
	{ 0x0022B, "\xC8\xAA" },
	{ 0x01F86, "\xE1\xBE\x8E" },
	{ 0x024DB, "\xE2\x93\x81" },
	{ 0x01F87, "\xE1\xBE\x8F" },
	{ 0x0049F, "\xD2\x9E" },
	{ 0x01F80, "\xE1\xBE\x88" },
	{ 0x00451, "\xD0\x81" },
	{ 0x01F81, "\xE1\xBE\x89" },
	{ 0x01F82, "\xE1\xBE\x8A" },
	{ 0x01F83, "\xE1\xBE\x8B" },
	{ 0x004F7, "\xD3\xB6" },
};

/*
1382872514
FNV_OFFSET_BASIS: FFFFFFFF,
FNV_PRIME: 01000193,
FNV_SIZE: 1043,
ENCODING: UTF-8,
*/

static const int16_t FNV[] = {
	-1042, -1041, -1040, 1, -1038, 1, -1034, 2, -1032, 1, -1030, 1, 
	-1028, 1, -1010, 1, -1008, -1006, -1003, 2, 0, 1, -998, 3, 
	0, 3, 0, 1, -988, -986, 0, 0, 2, -982, 2, -978, 
	2, -976, 2, -972, 3, -971, 1, -962, 1, -961, 1, -959, 
	1, 2, 1, 2, -958, 0, -956, 0, -940, 0, -934, 0, 
	-932, 0, -930, 0, 1, -928, 1, -926, -924, 0, -922, -916, 
	-912, 0, -910, 0, -908, 0, -906, 0, 3, -898, 1, -897, 
	-896, 0, -895, -894, -892, 0, -890, 0, -889, 0, -888, 0, 
	4, -885, 2, -883, 3, -881, 3, -880, -879, 0, -878, 0, 
	-877, 0, -876, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
	8, -874, 3, -872, 7, -870, 1, -868, 1, 2, 1, 1, 
	1, 1, 1, 4, 2, -867, 2, 5, 2, 2, 2, 1, 
	1, 2, 1, 1, 2, 1, 2, 1, -866, -865, -864, -860, 
	-855, -850, -845, -840, 2, 3, 3, 6, -838, -834, 3, 1, 
	-832, -829, -825, -817, -813, -810, -809, 0, 3, 0, 2, 0, 
	3, 0, 3, 0, 1, 0, -808, -801, -794, 0, -791, 0, 
	-789, -783, -776, -774, -769, -768, -766, -764, 0, 0, 0, -748, 
	0, -746, 0, -744, 0, -742, 0, -737, 0, -735, 0, -734, 
	0, -733, 0, -731, 0, -730, 0, -729, -728, 3, -727, 3, 
	-725, 2, -723, 2, 0, -721, 0, -720, 0, -719, 0, -717, 
	-715, 5, -714, 5, 0, -713, -709, 3, 0, -705, 0, -703, 
	0, -699, 0, -695, -689, 3, -687, 1, -686, 3, -685, 3, 
	0, -683, -682, 0, 0, 0, 0, 0, -681, -680, -679, -677, 
	-675, -673, -671, -670, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -668, -666, 
	0, -665, -664, 0, 0, -663, -661, 0, -659, 0, -658, -656, 
	-654, 0, 0, -653, 0, -651, 0, 0, -650, 0, 0, 0, 
	0, 0, -649, -647, 0, 0, -646, -645, -644, -643, -642, -641, 
	-640, -639, -638, -636, -634, -633, -632, -629, -628, -627, -626, -625, 
	-624, -623, -619, -617, -616, -615, -613, -611, -609, -607, -606, -603, 
	-602, -601, 2, 7, 2, 1, 2, 5, 1, 1, 3, 3, 
	2, 6, -600, 1, 5, 1, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -598, -596, 
	-594, -592, -590, -589, -588, -587, -586, -585, -584, -583, -582, -581, 
	-580, -579, -578, -577, -574, -573, 0, -572, -571, -569, -567, -566, 
	-565, -564, 0, -562, -560, -558, 0, 0, 0, 0, 0, -557, 
	0, 0, -556, -555, 0, 0, 0, 0, 0, 0, 0, -554, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -553, -552, -551, -550, -549, -547, -541, -540, -535, -533, -532, 
	-526, -524, -523, -521, -513, 0, 0, -512, 0, -510, -508, -507, 
	-505, 0, -503, -502, 0, -501, 0, -499, 0, -498, 0, -497, 
	0, -496, 0, -495, 0, -494, 0, 0, -493, 0, 0, 0, 
	-492, 0, -491, 0, -490, 0, 2, -489, 2, 0, 1, -488, 
	1, -486, 1, -485, 1, 1, -480, 2, 5, -473, 1, -472, 
	1, -469, 3, -467, 3, -460, -458, -457, 2, 2, 0, -454, 
	-453, 0, -452, -448, -447, -445, 0, -442, -441, 0, 0, -439, 
	0, -438, -436, -434, -432, 0, -429, 0, 0, 0, -427, -426, 
	0, -425, -423, 0, -422, 0, -421, -420, -419, -418, 1, 0, 
	0, 4, -416, 2, 1, -412, 1, 4, 3, -408, 0, -406, 
	0, -404, 0, 0, 0, 0, -400, 0, 0, 0, 2, 1, 
	-398, -396, -392, 1, -391, 1, -390, -386, 1, -382, -381, -380, 
	1, -378, 2, -374, 2, -369, 3, -367, 6, -360, -359, -358, 
	4, -356, -355, 0, -354, 0, -353, 0, -351, 0, -348, 0, 
	-346, 0, -344, 0, -342, 0, -340, 0, -338, 0, -335, 0, 
	-334, 0, -333, 0, -332, 0, -331, -329, 0, -328, -327, 0, 
	0, 4, 0, 0, -326, 0, -324, 0, -322, 0, -321, 0, 
	-320, 0, 1, 0, 3, 0, 3, 0, 2, 0, 2, 0, 
	2, 0, 2, 0, 1, 0, 1, 0, 4, -317, 1, -313, 
	7, -309, -307, -305, -303, 1, -300, -298, 1, 0, 1, -297, 
	-291, -287, 4, -285, -283, 0, -282, 0, -277, 0, 1, -276, 
	0, -275, -271, 3, -269, 2, -265, 0, -264, -263, -261, -260, 
	0, -259, -257, -255, -254, -253, 1, -252, 1, 4, 2, -250, 
	3, -249, -248, -245, 1, -243, -242, -241, 7, 1, -239, 1, 
	-238, 2, 0, 3, 0, 1, 0, 1, -237, 1, -236, 1, 
	0, 1, -235, 1, 0, 7, 0, 1, 0, 1, 0, 3, 
	0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 2, 
	0, 2, 0, 2, 0, 2, 0, 1, 0, 1, 0, 8, 
	0, -233, 0, 0, -232, -231, 0, -230, 0, -227, -226, -224, 
	0, -222, 0, -221, 0, -220, 0, -219, 0, -217, -216, -215, 
	-214, -212, -208, -206, 0, -204, 0, -202, 0, -200, 0, -198, 
	0, -197, 0, -196, 0, 1, 0, 7, 0, 4, 0, 1, 
	0, 7, 0, 1, 0, 3, 0, 1, -195, 5, -194, 1, 
	-193, 1, -192, 18, -191, 2, 2, 2, 4, 1, 3, 1, 
	14, 1, -190, 2, -189, 1, -188, 2, -187, 1, 8, 2, 
	6, -186, -184, -182, 0, 0, 0, 0, 0, 0, 0, -181, 
	0, -180, -178, -177, -176, -174, -170, -169, -168, -166, -163, -162, 
	-161, -160, 0, -159, 0, -158, 0, -156, 0, -155, 0, -153, 
	0, -152, 0, -151, 0, -148, -147, -144, -143, -142, 4, -141, 
	4, -140, 2, -136, 2, -135, 1, -132, 9, -130, 3, -126, 
	5, -124, 10, -123, 4, -122, 5, 3, 3, 1, 1, 2, 
	1, 3, 1, 1, 1, 11, 6, 1, 2, 1, 3, 2, 
	3, 1, 1, 6, 3, 1, 3, -119, -118, -108, 0, -98, 
	0, -94, 0, -92, 0, 3, 0, 2, 0, -90, -88, 3, 
	0, -86, 0, -72, 0, -71, 0, -70, 0, -66, 0, -60, 
	0, -54, 0, -52, 0, -50, 0, -47, 0, -46, 0, -42, 
	-38, -36, -30, -20, -14, -12, -10, -8, -6, -4, 3, };

static const nu_udb_t VALUES[] = {
	{ 0x00551, "\xD6\x81" },
	{ 0x00550, "\xD6\x80" },
	{ 0x00411, "\xD0\xB1" },
	{ 0x01EFC, "\xE1\xBB\xBD" },
	{ 0x00555, "\xD6\x85" },
	{ 0x0050A, "\xD4\x8B" },
	{ 0x01FDA, "\xE1\xBD\xB6" },
	{ 0x01EFE, "\xE1\xBB\xBF" },
	{ 0x01FD8, "\xE1\xBF\x90" },
	{ 0x00504, "\xD4\x85" },
	{ 0x004B2, "\xD2\xB3" },
	{ 0x01EF8, "\xE1\xBB\xB9" },
	{ 0x0041B, "\xD0\xBB" },
	{ 0x00506, "\xD4\x87" },
	{ 0x004B6, "\xD2\xB7" },
	{ 0x01FF9, "\xE1\xBD\xB9" },
	{ 0x00541, "\xD5\xB1" },
	{ 0x00540, "\xD5\xB0" },
	{ 0x004BA, "\xD2\xBB" },
	{ 0x01EFA, "\xE1\xBB\xBB" },
	{ 0x004BC, "\xD2\xBD" },
	{ 0x00544, "\xD5\xB4" },
	{ 0x004BE, "\xD2\xBF" },
	{ 0x00546, "\xD5\xB6" },
	{ 0x0216B, "\xE2\x85\xBB" },
	{ 0x0216A, "\xE2\x85\xBA" },
	{ 0x0054B, "\xD5\xBB" },
	{ 0x0054A, "\xD5\xBA" },
	{ 0x0054D, "\xD5\xBD" },
	{ 0x00500, "\xD4\x81" },
	{ 0x0054F, "\xD5\xBF" },
	{ 0x01FE9, "\xE1\xBF\xA1" },
	{ 0x004A8, "\xD2\xA9" },
	{ 0x01FEB, "\xE1\xBD\xBB" },
	{ 0x0FF22, "\xEF\xBD\x82" },
	{ 0x01EF4, "\xE1\xBB\xB5" },
	{ 0x0FF24, "\xEF\xBD\x84" },
	{ 0x00502, "\xD4\x83" },
	{ 0x0FF26, "\xEF\xBD\x86" },
	{ 0x0FF29, "\xEF\xBD\x89" },
	{ 0x0FF23, "\xEF\xBD\x83" },
	{ 0x01EF6, "\xE1\xBB\xB7" },
	{ 0x004D2, "\xD3\x93" },
	{ 0x0FF2D, "\xEF\xBD\x8D" },
	{ 0x004D4, "\xD3\x95" },
	{ 0x01EF0, "\xE1\xBB\xB1" },
	{ 0x01EF2, "\xE1\xBB\xB3" },
	{ 0x010BE, "\xE2\xB4\x9E" },
	{ 0x004D8, "\xD3\x99" },
	{ 0x01EEC, "\xE1\xBB\xAD" },
	{ 0x004DA, "\xD3\x9B" },
	{ 0x01EEE, "\xE1\xBB\xAF" },
	{ 0x004DC, "\xD3\x9D" },
	{ 0x01EE8, "\xE1\xBB\xA9" },
	{ 0x004DE, "\xD3\x9F" },
	{ 0x004C1, "\xD3\x82" },
	{ 0x0FF33, "\xEF\xBD\x93" },
	{ 0x004C3, "\xD3\x84" },
	{ 0x0FF31, "\xEF\xBD\x91" },
	{ 0x01EEA, "\xE1\xBB\xAB" },
	{ 0x10411, "\xF0\x90\x90\xB9" },
	{ 0x10410, "\xF0\x90\x90\xB8" },
	{ 0x10413, "\xF0\x90\x90\xBB" },
	{ 0x004C9, "\xD3\x8A" },
	{ 0x10415, "\xF0\x90\x90\xBD" },
	{ 0x01EE4, "\xE1\xBB\xA5" },
	{ 0x10417, "\xF0\x90\x90\xBF" },
	{ 0x10416, "\xF0\x90\x90\xBE" },
	{ 0x02CBA, "\xE2\xB2\xBB" },
	{ 0x01EE6, "\xE1\xBB\xA7" },
	{ 0x01EE0, "\xE1\xBB\xA1" },
	{ 0x01EE2, "\xE1\xBB\xA3" },
	{ 0x004F0, "\xD3\xB1" },
	{ 0x1041C, "\xF0\x90\x91\x84" },
	{ 0x004F2, "\xD3\xB3" },
	{ 0x01EC6, "\xE1\xBB\x87" },
	{ 0x10401, "\xF0\x90\x90\xA9" },
	{ 0x10400, "\xF0\x90\x90\xA8" },
	{ 0x10403, "\xF0\x90\x90\xAB" },
	{ 0x10402, "\xF0\x90\x90\xAA" },
	{ 0x10405, "\xF0\x90\x90\xAD" },
	{ 0x10404, "\xF0\x90\x90\xAC" },
	{ 0x10407, "\xF0\x90\x90\xAF" },
	{ 0x10406, "\xF0\x90\x90\xAE" },
	{ 0x004FC, "\xD3\xBD" },
	{ 0x01EDC, "\xE1\xBB\x9D" },
	{ 0x004FE, "\xD3\xBF" },
	{ 0x0A77E, "\xEA\x9D\xBF" },
	{ 0x1040D, "\xF0\x90\x90\xB5" },
	{ 0x01ED8, "\xE1\xBB\x99" },
	{ 0x004E2, "\xD3\xA3" },
	{ 0x01ED6, "\xE1\xBB\x97" },
	{ 0x004E4, "\xD3\xA5" },
	{ 0x01ED0, "\xE1\xBB\x91" },
	{ 0x004E6, "\xD3\xA7" },
	{ 0x01EDA, "\xE1\xBB\x9B" },
	{ 0x004E8, "\xD3\xA9" },
	{ 0x01ED2, "\xE1\xBB\x93" },
	{ 0x10409, "\xF0\x90\x90\xB1" },
	{ 0x0FF37, "\xEF\xBD\x97" },
	{ 0x004EC, "\xD3\xAD" },
	{ 0x02163, "\xE2\x85\xB3" },
	{ 0x004EE, "\xD3\xAF" },
	{ 0x02161, "\xE2\x85\xB1" },
	{ 0x02CDE, "\xE2\xB3\x9F" },
	{ 0x02167, "\xE2\x85\xB7" },
	{ 0x010AC, "\xE2\xB4\x8C" },
	{ 0x01ECC, "\xE1\xBB\x8D" },
	{ 0x10421, "\xF0\x90\x91\x89" },
	{ 0x10420, "\xF0\x90\x91\x88" },
	{ 0x10423, "\xF0\x90\x91\x8B" },
	{ 0x02169, "\xE2\x85\xB9" },
	{ 0x02CC6, "\xE2\xB3\x87" },
	{ 0x10424, "\xF0\x90\x91\x8C" },
	{ 0x02CC8, "\xE2\xB3\x89" },
	{ 0x10426, "\xF0\x90\x91\x8E" },
	{ 0x02CCA, "\xE2\xB3\x8B" },
	{ 0x0A76C, "\xEA\x9D\xAD" },
	{ 0x01ECE, "\xE1\xBB\x8F" },
	{ 0x01F48, "\xE1\xBD\x80" },
	{ 0x02CCE, "\xE2\xB3\x8F" },
	{ 0x00414, "\xD0\xB4" },
	{ 0x00416, "\xD0\xB6" },
	{ 0x00410, "\xD0\xB0" },
	{ 0x02160, "\xE2\x85\xB0" },
	{ 0x00412, "\xD0\xB2" },
	{ 0x01E32, "\xE1\xB8\xB3" },
	{ 0x02165, "\xE2\x85\xB5" },
	{ 0x02164, "\xE2\x85\xB4" },
	{ 0x0040C, "\xD1\x9C" },
	{ 0x01E36, "\xE1\xB8\xB7" },
	{ 0x0040E, "\xD1\x9E" },
	{ 0x01E34, "\xE1\xB8\xB5" },
	{ 0x0A792, "\xEA\x9E\x93" },
	{ 0x00408, "\xD1\x98" },
	{ 0x0040A, "\xD1\x9A" },
	{ 0x0216C, "\xE2\x85\xBC" },
	{ 0x003CF, "\xCF\x97" },
	{ 0x0216E, "\xE2\x85\xBE" },
	{ 0x00404, "\xD1\x94" },
	{ 0x00406, "\xD1\x96" },
	{ 0x00400, "\xD1\x90" },
	{ 0x00401, "\xD1\x91" },
	{ 0x00402, "\xD1\x92" },
	{ 0x01E20, "\xE1\xB8\xA1" },
	{ 0x00122, "\xC4\xA3" },
	{ 0x00403, "\xD1\x93" },
	{ 0x0047C, "\xD1\xBD" },
	{ 0x01E24, "\xE1\xB8\xA5" },
	{ 0x02CED, "\xE2\xB3\xAE" },
	{ 0x0047E, "\xD1\xBF" },
	{ 0x00478, "\xD1\xB9" },
	{ 0x0047A, "\xD1\xBB" },
	{ 0x010A1, "\xE2\xB4\x81" },
	{ 0x00474, "\xD1\xB5" },
	{ 0x00476, "\xD1\xB7" },
	{ 0x01ECA, "\xE1\xBB\x8B" },
	{ 0x00470, "\xD1\xB1" },
	{ 0x00472, "\xD1\xB3" },
	{ 0x0046C, "\xD1\xAD" },
	{ 0x0A7A8, "\xEA\x9E\xA9" },
	{ 0x0046E, "\xD1\xAF" },
	{ 0x0A7AA, "\xC9\xA6" },
	{ 0x010A8, "\xE2\xB4\x88" },
	{ 0x010A9, "\xE2\xB4\x89" },
	{ 0x00468, "\xD1\xA9" },
	{ 0x010AF, "\xE2\xB4\x8F" },
	{ 0x0A7A4, "\xEA\x9E\xA5" },
	{ 0x0046A, "\xD1\xAB" },
	{ 0x0A7A6, "\xEA\x9E\xA7" },
	{ 0x003E8, "\xCF\xA9" },
	{ 0x004B8, "\xD2\xB9" },
	{ 0x0A748, "\xEA\x9D\x89" },
	{ 0x00464, "\xD1\xA5" },
	{ 0x010B7, "\xE2\xB4\x97" },
	{ 0x0A7A0, "\xEA\x9E\xA1" },
	{ 0x00466, "\xD1\xA7" },
	{ 0x0A7A2, "\xEA\x9E\xA3" },
	{ 0x010BB, "\xE2\xB4\x9B" },
	{ 0x00460, "\xD1\xA1" },
	{ 0x00462, "\xD1\xA3" },
	{ 0x0A66C, "\xEA\x99\xAD" },
	{ 0x010BF, "\xE2\xB4\x9F" },
	{ 0x010BC, "\xE2\xB4\x9C" },
	{ 0x003FE, "\xCD\xBC" },
	{ 0x010BD, "\xE2\xB4\x9D" },
	{ 0x010BA, "\xE2\xB4\x9A" },
	{ 0x010B4, "\xE2\xB4\x94" },
	{ 0x010B6, "\xE2\xB4\x96" },
	{ 0x010B0, "\xE2\xB4\x90" },
	{ 0x010AA, "\xE2\xB4\x8A" },
	{ 0x010A4, "\xE2\xB4\x84" },
	{ 0x010A6, "\xE2\xB4\x86" },
	{ 0x010A0, "\xE2\xB4\x80" },
	{ 0x010A2, "\xE2\xB4\x82" },
	{ 0x004AA, "\xD2\xAB" },
	{ 0x004A4, "\xD2\xA5" },
	{ 0x004A6, "\xD2\xA7" },
	{ 0x0A640, "\xEA\x99\x81" },
	{ 0x004A0, "\xD2\xA1" },
	{ 0x01E78, "\xE1\xB9\xB9" },
	{ 0x004A2, "\xD2\xA3" },
	{ 0x00427, "\xD1\x87" },
	{ 0x0049C, "\xD2\x9D" },
	{ 0x0A64A, "\xEA\x99\x8B" },
	{ 0x0049E, "\xD2\x9F" },
	{ 0x0015A, "\xC5\x9B" },
	{ 0x00376, "\xCD\xB7" },
	{ 0x0A762, "\xEA\x9D\xA3" },
	{ 0x0042E, "\xD1\x8E" },
	{ 0x01E66, "\xE1\xB9\xA7" },
	{ 0x00498, "\xD2\x99" },
	{ 0x01E64, "\xE1\xB9\xA5" },
	{ 0x00370, "\xCD\xB1" },
	{ 0x0049A, "\xD2\x9B" },
	{ 0x00372, "\xCD\xB3" },
	{ 0x00494, "\xD2\x95" },
	{ 0x0039F, "\xCE\xBF" },
	{ 0x00496, "\xD2\x97" },
	{ 0x00490, "\xD2\x91" },
	{ 0x00492, "\xD2\x93" },
	{ 0x0048C, "\xD2\x8D" },
	{ 0x01E52, "\xE1\xB9\x93" },
	{ 0x0048E, "\xD2\x8F" },
	{ 0x0A694, "\xEA\x9A\x95" },
	{ 0x0023D, "\xC6\x9A" },
	{ 0x0023E, "\xE2\xB1\xA6" },
	{ 0x02C2B, "\xE2\xB1\x9B" },
	{ 0x02C2A, "\xE2\xB1\x9A" },
	{ 0x0048A, "\xD2\x8B" },
	{ 0x0023A, "\xE2\xB1\xA5" },
	{ 0x0023B, "\xC8\xBC" },
	{ 0x00480, "\xD2\x81" },
	{ 0x0017D, "\xC5\xBE" },
	{ 0x010C4, "\xE2\xB4\xA4" },
	{ 0x010C0, "\xE2\xB4\xA0" },
	{ 0x010C2, "\xE2\xB4\xA2" },
	{ 0x003A8, "\xCF\x88" },
	{ 0x003AA, "\xCF\x8A" },
	{ 0x01F2A, "\xE1\xBC\xA2" },
	{ 0x003A5, "\xCF\x85" },
	{ 0x003A6, "\xCF\x86" },
	{ 0x003A7, "\xCF\x87" },
	{ 0x01F2E, "\xE1\xBC\xA6" },
	{ 0x003A1, "\xCF\x81" },
	{ 0x01F2C, "\xE1\xBC\xA4" },
	{ 0x00216, "\xC8\x97" },
	{ 0x004CB, "\xD3\x8C" },
	{ 0x003A3, "\xCF\x83" },
	{ 0x0039D, "\xCE\xBD" },
	{ 0x10422, "\xF0\x90\x91\x8A" },
	{ 0x00399, "\xCE\xB9" },
	{ 0x0039B, "\xCE\xBB" },
	{ 0x00394, "\xCE\xB4" },
	{ 0x00395, "\xCE\xB5" },
	{ 0x10427, "\xF0\x90\x91\x8F" },
	{ 0x00396, "\xCE\xB6" },
	{ 0x10425, "\xF0\x90\x91\x8D" },
	{ 0x00397, "\xCE\xB7" },
	{ 0x00391, "\xCE\xB1" },
	{ 0x00392, "\xCE\xB2" },
	{ 0x01F1C, "\xE1\xBC\x94" },
	{ 0x00393, "\xCE\xB3" },
	{ 0x0038C, "\xCF\x8C" },
	{ 0x0038E, "\xCF\x8D" },
	{ 0x02C28, "\xE2\xB1\x98" },
	{ 0x0011E, "\xC4\x9F" },
	{ 0x00051, "\x71" },
	{ 0x00388, "\xCE\xAD" },
	{ 0x00053, "\x73" },
	{ 0x0038A, "\xCE\xAF" },
	{ 0x01F0A, "\xE1\xBC\x82" },
	{ 0x00548, "\xD5\xB8" },
	{ 0x01F08, "\xE1\xBC\x80" },
	{ 0x00139, "\xC4\xBA" },
	{ 0x0013B, "\xC4\xBC" },
	{ 0x00136, "\xC4\xB7" },
	{ 0x0042B, "\xD1\x8B" },
	{ 0x01EAA, "\xE1\xBA\xAB" },
	{ 0x00429, "\xD1\x89" },
	{ 0x0012C, "\xC4\xAD" },
	{ 0x00130, "\x69\xCC\x87" },
	{ 0x00132, "\xC4\xB3" },
	{ 0x0042D, "\xD1\x8D" },
	{ 0x003FD, "\xCD\xBB" },
	{ 0x00413, "\xD0\xB3" },
	{ 0x003FF, "\xCD\xBD" },
	{ 0x00045, "\x65" },
	{ 0x01E7A, "\xE1\xB9\xBB" },
	{ 0x00047, "\x67" },
	{ 0x0012E, "\xC4\xAF" },
	{ 0x00049, "\x69" },
	{ 0x00048, "\x68" },
	{ 0x0004B, "\x6B" },
	{ 0x0041A, "\xD0\xBA" },
	{ 0x00419, "\xD0\xB9" },
	{ 0x003F9, "\xCF\xB2" },
	{ 0x0024C, "\xC9\x8D" },
	{ 0x10412, "\xF0\x90\x90\xBA" },
	{ 0x00124, "\xC4\xA5" },
	{ 0x0041C, "\xD0\xBC" },
	{ 0x00118, "\xC4\x99" },
	{ 0x00126, "\xC4\xA7" },
	{ 0x0011A, "\xC4\x9B" },
	{ 0x00248, "\xC9\x89" },
	{ 0x0011C, "\xC4\x9D" },
	{ 0x00120, "\xC4\xA1" },
	{ 0x1041B, "\xF0\x90\x91\x83" },
	{ 0x0024A, "\xC9\x8B" },
	{ 0x10419, "\xF0\x90\x91\x81" },
	{ 0x1041E, "\xF0\x90\x91\x86" },
	{ 0x1041F, "\xF0\x90\x91\x87" },
	{ 0x00244, "\xCA\x89" },
	{ 0x1041D, "\xF0\x90\x91\x85" },
	{ 0x0004D, "\x6D" },
	{ 0x02168, "\xE2\x85\xB8" },
	{ 0x00246, "\xC9\x87" },
	{ 0x00108, "\xC4\x89" },
	{ 0x01F5B, "\xE1\xBD\x93" },
	{ 0x0010A, "\xC4\x8B" },
	{ 0x00104, "\xC4\x85" },
	{ 0x00106, "\xC4\x87" },
	{ 0x01F5F, "\xE1\xBD\x97" },
	{ 0x00100, "\xC4\x81" },
	{ 0x01F5D, "\xE1\xBD\x95" },
	{ 0x00102, "\xC4\x83" },
	{ 0x00178, "\xC3\xBF" },
	{ 0x00179, "\xC5\xBA" },
	{ 0x0017B, "\xC5\xBC" },
	{ 0x00134, "\xC4\xB5" },
	{ 0x00174, "\xC5\xB5" },
	{ 0x00176, "\xC5\xB7" },
	{ 0x00170, "\xC5\xB1" },
	{ 0x00172, "\xC5\xB3" },
	{ 0x0016C, "\xC5\xAD" },
	{ 0x01F4A, "\xE1\xBD\x82" },
	{ 0x01F49, "\xE1\xBD\x81" },
	{ 0x0016E, "\xC5\xAF" },
	{ 0x02CB4, "\xE2\xB2\xB5" },
	{ 0x00168, "\xC5\xA9" },
	{ 0x01F4D, "\xE1\xBD\x85" },
	{ 0x0016A, "\xC5\xAB" },
	{ 0x02CB8, "\xE2\xB2\xB9" },
	{ 0x00164, "\xC5\xA5" },
	{ 0x02CBE, "\xE2\xB2\xBF" },
	{ 0x00166, "\xC5\xA7" },
	{ 0x00537, "\xD5\xA7" },
	{ 0x00160, "\xC5\xA1" },
	{ 0x0013D, "\xC4\xBE" },
	{ 0x00128, "\xC4\xA9" },
	{ 0x00162, "\xC5\xA3" },
	{ 0x0012A, "\xC4\xAB" },
	{ 0x0015C, "\xC5\x9D" },
	{ 0x0015E, "\xC5\x9F" },
	{ 0x00158, "\xC5\x99" },
	{ 0x0FF38, "\xEF\xBD\x98" },
	{ 0x01ED4, "\xE1\xBB\x95" },
	{ 0x0FF3A, "\xEF\xBD\x9A" },
	{ 0x00154, "\xC5\x95" },
	{ 0x0FF34, "\xEF\xBD\x94" },
	{ 0x02CAE, "\xE2\xB2\xAF" },
	{ 0x00520, "\xD4\xA1" },
	{ 0x01EDE, "\xE1\xBB\x9F" },
	{ 0x00526, "\xD4\xA7" },
	{ 0x001F6, "\xC6\x95" },
	{ 0x00112, "\xC4\x93" },
	{ 0x0FF36, "\xEF\xBD\x96" },
	{ 0x00110, "\xC4\x91" },
	{ 0x0FF30, "\xEF\xBD\x90" },
	{ 0x00116, "\xC4\x97" },
	{ 0x02C94, "\xE2\xB2\x95" },
	{ 0x00114, "\xC4\x95" },
	{ 0x02C9A, "\xE2\xB2\x9B" },
	{ 0x0FF32, "\xEF\xBD\x92" },
	{ 0x00143, "\xC5\x84" },
	{ 0x02CDA, "\xE2\xB3\x9B" },
	{ 0x00145, "\xC5\x86" },
	{ 0x0FF2C, "\xEF\xBD\x8C" },
	{ 0x00147, "\xC5\x88" },
	{ 0x0FF2E, "\xEF\xBD\x8E" },
	{ 0x0FF2F, "\xEF\xBD\x8F" },
	{ 0x0FF28, "\xEF\xBD\x88" },
	{ 0x00210, "\xC8\x91" },
	{ 0x0014A, "\xC5\x8B" },
	{ 0x00212, "\xC8\x93" },
	{ 0x0FF2A, "\xEF\xBD\x8A" },
	{ 0x00214, "\xC8\x95" },
	{ 0x0014E, "\xC5\x8F" },
	{ 0x004B4, "\xD2\xB5" },
	{ 0x0FF2B, "\xEF\xBD\x8B" },
	{ 0x0FF25, "\xEF\xBD\x85" },
	{ 0x0FF27, "\xEF\xBD\x87" },
	{ 0x0021A, "\xC8\x9B" },
	{ 0x003EC, "\xCF\xAD" },
	{ 0x0021C, "\xC8\x9D" },
	{ 0x00141, "\xC5\x82" },
	{ 0x0021E, "\xC8\x9F" },
	{ 0x0FF21, "\xEF\xBD\x81" },
	{ 0x00200, "\xC8\x81" },
	{ 0x001B8, "\xC6\xB9" },
	{ 0x00202, "\xC8\x83" },
	{ 0x00508, "\xD4\x89" },
	{ 0x01F8F, "\xE1\xBE\x87" },
	{ 0x001B5, "\xC6\xB6" },
	{ 0x01F8D, "\xE1\xBE\x85" },
	{ 0x001B7, "\xCA\x92" },
	{ 0x00208, "\xC8\x89" },
	{ 0x001B1, "\xCA\x8A" },
	{ 0x0020A, "\xC8\x8B" },
	{ 0x0A654, "\xEA\x99\x95" },
	{ 0x0020C, "\xC8\x8D" },
	{ 0x024BF, "\xE2\x93\x99" },
	{ 0x0020E, "\xC8\x8F" },
	{ 0x001A9, "\xCA\x83" },
	{ 0x01FFB, "\xE1\xBD\xBD" },
	{ 0x024BA, "\xE2\x93\x94" },
	{ 0x00232, "\xC8\xB3" },
	{ 0x024B7, "\xE2\x93\x91" },
	{ 0x001A6, "\xCA\x80" },
	{ 0x001A7, "\xC6\xA8" },
	{ 0x001A0, "\xC6\xA1" },
	{ 0x001A2, "\xC6\xA3" },
	{ 0x0019C, "\xC9\xAF" },
	{ 0x001B3, "\xC6\xB4" },
	{ 0x0019D, "\xC9\xB2" },
	{ 0x0019F, "\xC9\xB5" },
	{ 0x00198, "\xC6\x99" },
	{ 0x0014C, "\xC5\x8D" },
	{ 0x00194, "\xC9\xA3" },
	{ 0x00152, "\xC5\x93" },
	{ 0x00220, "\xC6\x9E" },
	{ 0x00196, "\xC9\xA9" },
	{ 0x00222, "\xC8\xA3" },
	{ 0x00197, "\xC9\xA8" },
	{ 0x02CD4, "\xE2\xB3\x95" },
	{ 0x00190, "\xC9\x9B" },
	{ 0x00226, "\xC8\xA7" },
	{ 0x00191, "\xC6\x92" },
	{ 0x00193, "\xC9\xA0" },
	{ 0x00552, "\xD6\x82" },
	{ 0x0018E, "\xC7\x9D" },
	{ 0x0018F, "\xC9\x99" },
	{ 0x0022C, "\xC8\xAD" },
	{ 0x00556, "\xD6\x86" },
	{ 0x00189, "\xC9\x96" },
	{ 0x00554, "\xD6\x84" },
	{ 0x0018A, "\xC9\x97" },
	{ 0x0018B, "\xC6\x8C" },
	{ 0x0FF39, "\xEF\xBD\x99" },
	{ 0x003A4, "\xCF\x84" },
	{ 0x0A790, "\xEA\x9E\x91" },
	{ 0x00184, "\xC6\x85" },
	{ 0x00186, "\xC9\x94" },
	{ 0x00187, "\xC6\x88" },
	{ 0x00543, "\xD5\xB3" },
	{ 0x00542, "\xD5\xB2" },
	{ 0x0005A, "\x7A" },
	{ 0x001FC, "\xC7\xBD" },
	{ 0x001AF, "\xC6\xB0" },
	{ 0x00054, "\x74" },
	{ 0x00545, "\xD5\xB5" },
	{ 0x00241, "\xC9\x82" },
	{ 0x02C22, "\xE2\xB1\x92" },
	{ 0x00243, "\xC6\x80" },
	{ 0x01E7E, "\xE1\xB9\xBF" },
	{ 0x00245, "\xCA\x8C" },
	{ 0x00056, "\x76" },
	{ 0x0A646, "\xEA\x99\x87" },
	{ 0x00050, "\x70" },
	{ 0x0054C, "\xD5\xBC" },
	{ 0x004EA, "\xD3\xAB" },
	{ 0x00052, "\x72" },
	{ 0x0004C, "\x6C" },
	{ 0x001A4, "\xC6\xA5" },
	{ 0x00218, "\xC8\x99" },
	{ 0x001BC, "\xC6\xBD" },
	{ 0x0024E, "\xC9\x8F" },
	{ 0x00182, "\xC6\x83" },
	{ 0x004E0, "\xD3\xA1" },
	{ 0x0004F, "\x6F" },
	{ 0x00181, "\xC9\x93" },
	{ 0x001AC, "\xC6\xAD" },
	{ 0x004D6, "\xD3\x97" },
	{ 0x001AE, "\xCA\x88" },
	{ 0x0004A, "\x6A" },
	{ 0x00044, "\x64" },
	{ 0x00204, "\xC8\x85" },
	{ 0x00046, "\x66" },
	{ 0x00042, "\x62" },
	{ 0x001E6, "\xC7\xA7" },
	{ 0x001E0, "\xC7\xA1" },
	{ 0x001E2, "\xC7\xA3" },
	{ 0x001DE, "\xC7\x9F" },
	{ 0x001D9, "\xC7\x9A" },
	{ 0x001DB, "\xC7\x9C" },
	{ 0x001D5, "\xC7\x96" },
	{ 0x001D7, "\xC7\x98" },
	{ 0x001D1, "\xC7\x92" },
	{ 0x001D3, "\xC7\x94" },
	{ 0x004C5, "\xD3\x86" },
	{ 0x001CD, "\xC7\x8E" },
	{ 0x001CF, "\xC7\x90" },
	{ 0x001C8, "\xC7\x89" },
	{ 0x00043, "\x63" },
	{ 0x001CA, "\xC7\x8C" },
	{ 0x00041, "\x61" },
	{ 0x001CB, "\xC7\x8C" },
	{ 0x001C4, "\xC7\x86" },
	{ 0x00405, "\xD1\x95" },
	{ 0x001C5, "\xC7\x86" },
	{ 0x00407, "\xD1\x97" },
	{ 0x001C7, "\xC7\x89" },
	{ 0x024CC, "\xE2\x93\xA6" },
	{ 0x004CD, "\xD3\x8E" },
	{ 0x0004E, "\x6E" },
	{ 0x001E4, "\xC7\xA5" },
	{ 0x001F1, "\xC7\xB3" },
	{ 0x001EA, "\xC7\xAB" },
	{ 0x0FF35, "\xEF\xBD\x95" },
	{ 0x001F2, "\xC7\xB3" },
	{ 0x024CD, "\xE2\x93\xA7" },
	{ 0x001F4, "\xC7\xB5" },
	{ 0x024CE, "\xE2\x93\xA8" },
	{ 0x024CF, "\xE2\x93\xA9" },
	{ 0x00415, "\xD0\xB5" },
	{ 0x024C8, "\xE2\x93\xA2" },
	{ 0x004B0, "\xD2\xB1" },
	{ 0x001FA, "\xC7\xBB" },
	{ 0x00058, "\x78" },
	{ 0x00059, "\x79" },
	{ 0x001F7, "\xC6\xBF" },
	{ 0x024C9, "\xE2\x93\xA3" },
	{ 0x024CA, "\xE2\x93\xA4" },
	{ 0x02166, "\xE2\x85\xB6" },
	{ 0x024CB, "\xE2\x93\xA5" },
	{ 0x0A73A, "\xEA\x9C\xBB" },
	{ 0x00230, "\xC8\xB1" },
	{ 0x0A738, "\xEA\x9C\xB9" },
	{ 0x0216D, "\xE2\x85\xBD" },
	{ 0x024C4, "\xE2\x93\x9E" },
	{ 0x024C5, "\xE2\x93\x9F" },
	{ 0x001E8, "\xC7\xA9" },
	{ 0x10418, "\xF0\x90\x91\x80" },
	{ 0x0A722, "\xEA\x9C\xA3" },
	{ 0x004AE, "\xD2\xAF" },
	{ 0x001EC, "\xC7\xAD" },
	{ 0x024C6, "\xE2\x93\xA0" },
	{ 0x001EE, "\xC7\xAF" },
	{ 0x024C7, "\xE2\x93\xA1" },
	{ 0x024C0, "\xE2\x93\x9A" },
	{ 0x024C1, "\xE2\x93\x9B" },
	{ 0x024C2, "\xE2\x93\x9C" },
	{ 0x024C3, "\xE2\x93\x9D" },
	{ 0x02132, "\xE2\x85\x8E" },
	{ 0x0212A, "\x6B" },
	{ 0x0212B, "\xC3\xA5" },
	{ 0x02126, "\xCF\x89" },
	{ 0x000DC, "\xC3\xBC" },
	{ 0x0A740, "\xEA\x9D\x81" },
	{ 0x000DD, "\xC3\xBD" },
	{ 0x0A742, "\xEA\x9D\x83" },
	{ 0x000DE, "\xC3\xBE" },
	{ 0x0A64E, "\xEA\x99\x8F" },
	{ 0x000D8, "\xC3\xB8" },
	{ 0x000D9, "\xC3\xB9" },
	{ 0x000DA, "\xC3\xBA" },
	{ 0x000DB, "\xC3\xBB" },
	{ 0x00549, "\xD5\xB9" },
	{ 0x000D4, "\xC3\xB4" },
	{ 0x00420, "\xD1\x80" },
	{ 0x000D5, "\xC3\xB5" },
	{ 0x000D6, "\xC3\xB6" },
	{ 0x000D0, "\xC3\xB0" },
	{ 0x000D1, "\xC3\xB1" },
	{ 0x0A750, "\xEA\x9D\x91" },
	{ 0x004C0, "\xD3\x8F" },
	{ 0x000D2, "\xC3\xB2" },
	{ 0x000D3, "\xC3\xB3" },
	{ 0x000CC, "\xC3\xAC" },
	{ 0x000CD, "\xC3\xAD" },
	{ 0x000CE, "\xC3\xAE" },
	{ 0x000CF, "\xC3\xAF" },
	{ 0x000C8, "\xC3\xA8" },
	{ 0x000C9, "\xC3\xA9" },
	{ 0x000CA, "\xC3\xAA" },
	{ 0x000CB, "\xC3\xAB" },
	{ 0x000C4, "\xC3\xA4" },
	{ 0x000C5, "\xC3\xA5" },
	{ 0x000C6, "\xC3\xA6" },
	{ 0x000C7, "\xC3\xA7" },
	{ 0x00224, "\xC8\xA5" },
	{ 0x000C0, "\xC3\xA0" },
	{ 0x0022A, "\xC8\xAB" },
	{ 0x000C1, "\xC3\xA1" },
	{ 0x00228, "\xC8\xA9" },
	{ 0x000C2, "\xC3\xA2" },
	{ 0x0022E, "\xC8\xAF" },
	{ 0x000C3, "\xC3\xA3" },
	{ 0x0A77B, "\xEA\x9D\xBC" },
	{ 0x0216F, "\xE2\x85\xBF" },
	{ 0x02C1C, "\xE2\xB1\x8C" },
	{ 0x02C1D, "\xE2\xB1\x8D" },
	{ 0x02C1E, "\xE2\xB1\x8E" },
	{ 0x010B8, "\xE2\xB4\x98" },
	{ 0x0A77D, "\xE1\xB5\xB9" },
	{ 0x02C1F, "\xE2\xB1\x8F" },
	{ 0x02C18, "\xE2\xB1\x88" },
	{ 0x00398, "\xCE\xB8" },
	{ 0x02C19, "\xE2\xB1\x89" },
	{ 0x0039A, "\xCE\xBA" },
	{ 0x02C1A, "\xE2\xB1\x8A" },
	{ 0x0A766, "\xEA\x9D\xA7" },
	{ 0x02C1B, "\xE2\xB1\x8B" },
	{ 0x0A764, "\xEA\x9D\xA5" },
	{ 0x02C14, "\xE2\xB1\x84" },
	{ 0x02C15, "\xE2\xB1\x85" },
	{ 0x02C16, "\xE2\xB1\x86" },
	{ 0x0A768, "\xEA\x9D\xA9" },
	{ 0x02C17, "\xE2\xB1\x87" },
	{ 0x0A76E, "\xEA\x9D\xAF" },
	{ 0x00206, "\xC8\x87" },
	{ 0x00386, "\xCE\xAC" },
	{ 0x02C10, "\xE2\xB1\x80" },
	{ 0x02C11, "\xE2\xB1\x81" },
	{ 0x02C12, "\xE2\xB1\x82" },
	{ 0x02C13, "\xE2\xB1\x83" },
	{ 0x02C0C, "\xE2\xB0\xBC" },
	{ 0x02C0D, "\xE2\xB0\xBD" },
	{ 0x02C0E, "\xE2\xB0\xBE" },
	{ 0x0A754, "\xEA\x9D\x95" },
	{ 0x00156, "\xC5\x97" },
	{ 0x02C0F, "\xE2\xB0\xBF" },
	{ 0x02C08, "\xE2\xB0\xB8" },
	{ 0x02C09, "\xE2\xB0\xB9" },
	{ 0x01E62, "\xE1\xB9\xA3" },
	{ 0x02C0A, "\xE2\xB0\xBA" },
	{ 0x024B9, "\xE2\x93\x93" },
	{ 0x02C0B, "\xE2\xB0\xBB" },
	{ 0x02C04, "\xE2\xB0\xB4" },
	{ 0x02C05, "\xE2\xB0\xB5" },
	{ 0x02C06, "\xE2\xB0\xB6" },
	{ 0x02C07, "\xE2\xB0\xB7" },
	{ 0x02C00, "\xE2\xB0\xB0" },
	{ 0x02C01, "\xE2\xB0\xB1" },
	{ 0x02C02, "\xE2\xB0\xB2" },
	{ 0x02C03, "\xE2\xB0\xB3" },
	{ 0x02C7E, "\xC8\xBF" },
	{ 0x003A0, "\xCF\x80" },
	{ 0x02C7F, "\xC9\x80" },
	{ 0x02C75, "\xE2\xB1\xB6" },
	{ 0x02C70, "\xC9\x92" },
	{ 0x0A74E, "\xEA\x9D\x8F" },
	{ 0x02C72, "\xE2\xB1\xB3" },
	{ 0x02C6D, "\xC9\x91" },
	{ 0x003A9, "\xCF\x89" },
	{ 0x02C6E, "\xC9\xB1" },
	{ 0x003AB, "\xCF\x8B" },
	{ 0x02C6F, "\xC9\x90" },
	{ 0x02C69, "\xE2\xB1\xAA" },
	{ 0x0A72A, "\xEA\x9C\xAB" },
	{ 0x02C6B, "\xE2\xB1\xAC" },
	{ 0x02C26, "\xE2\xB1\x96" },
	{ 0x02C64, "\xC9\xBD" },
	{ 0x02C67, "\xE2\xB1\xA8" },
	{ 0x02C60, "\xE2\xB1\xA1" },
	{ 0x02C62, "\xC9\xAB" },
	{ 0x02C2D, "\xE2\xB1\x9D" },
	{ 0x02C63, "\xE1\xB5\xBD" },
	{ 0x0038F, "\xCF\x8E" },
	{ 0x01F3C, "\xE1\xBC\xB4" },
	{ 0x01F3D, "\xE1\xBC\xB5" },
	{ 0x0A736, "\xEA\x9C\xB7" },
	{ 0x01F3E, "\xE1\xBC\xB6" },
	{ 0x003DA, "\xCF\x9B" },
	{ 0x01F3F, "\xE1\xBC\xB7" },
	{ 0x004AC, "\xD2\xAD" },
	{ 0x01F38, "\xE1\xBC\xB0" },
	{ 0x024BC, "\xE2\x93\x96" },
	{ 0x01F39, "\xE1\xBC\xB1" },
	{ 0x01F3A, "\xE1\xBC\xB2" },
	{ 0x01F3B, "\xE1\xBC\xB3" },
	{ 0x02183, "\xE2\x86\x84" },
	{ 0x02CBC, "\xE2\xB2\xBD" },
	{ 0x0039E, "\xCE\xBE" },
	{ 0x01F2D, "\xE1\xBC\xA5" },
	{ 0x01F2F, "\xE1\xBC\xA7" },
	{ 0x01F29, "\xE1\xBC\xA1" },
	{ 0x003E2, "\xCF\xA3" },
	{ 0x01F2B, "\xE1\xBC\xA3" },
	{ 0x003E0, "\xCF\xA1" },
	{ 0x00533, "\xD5\xA3" },
	{ 0x003E6, "\xCF\xA7" },
	{ 0x00531, "\xD5\xA1" },
	{ 0x0A784, "\xEA\x9E\x85" },
	{ 0x02CB6, "\xE2\xB2\xB7" },
	{ 0x0039C, "\xCE\xBC" },
	{ 0x010B2, "\xE2\xB4\x92" },
	{ 0x02CC2, "\xE2\xB3\x83" },
	{ 0x02CB0, "\xE2\xB2\xB1" },
	{ 0x003F4, "\xCE\xB8" },
	{ 0x003F7, "\xCF\xB8" },
	{ 0x0053E, "\xD5\xAE" },
	{ 0x02CB2, "\xE2\xB2\xB3" },
	{ 0x0053C, "\xD5\xAC" },
	{ 0x02CAC, "\xE2\xB2\xAD" },
	{ 0x003FA, "\xCF\xBB" },
	{ 0x00389, "\xCE\xAE" },
	{ 0x0A786, "\xEA\x9E\x87" },
	{ 0x01F1D, "\xE1\xBC\x95" },
	{ 0x00057, "\x77" },
	{ 0x0013F, "\xC5\x80" },
	{ 0x00055, "\x75" },
	{ 0x02CA8, "\xE2\xB2\xA9" },
	{ 0x01F19, "\xE1\xBC\x91" },
	{ 0x01F1B, "\xE1\xBC\x93" },
	{ 0x003E4, "\xCF\xA5" },
	{ 0x02CA6, "\xE2\xB2\xA7" },
	{ 0x0A760, "\xEA\x9D\xA1" },
	{ 0x02CA0, "\xE2\xB2\xA1" },
	{ 0x02CA2, "\xE2\xB2\xA3" },
	{ 0x02C9C, "\xE2\xB2\x9D" },
	{ 0x003EA, "\xCF\xAB" },
	{ 0x01F0D, "\xE1\xBC\x85" },
	{ 0x00510, "\xD4\x91" },
	{ 0x01F0F, "\xE1\xBC\x87" },
	{ 0x003EE, "\xCF\xAF" },
	{ 0x01F09, "\xE1\xBC\x81" },
	{ 0x01F0B, "\xE1\xBC\x83" },
	{ 0x02C96, "\xE2\xB2\x97" },
	{ 0x02C90, "\xE2\xB2\x91" },
	{ 0x02C92, "\xE2\xB2\x93" },
	{ 0x00417, "\xD0\xB7" },
	{ 0x02C8C, "\xE2\xB2\x8D" },
	{ 0x02C8E, "\xE2\xB2\x8F" },
	{ 0x02C88, "\xE2\xB2\x89" },
	{ 0x0051C, "\xD4\x9D" },
	{ 0x02C8A, "\xE2\xB2\x8B" },
	{ 0x01F18, "\xE1\xBC\x90" },
	{ 0x01E10, "\xE1\xB8\x91" },
	{ 0x01F1A, "\xE1\xBC\x92" },
	{ 0x01E12, "\xE1\xB8\x93" },
	{ 0x02C84, "\xE2\xB2\x85" },
	{ 0x0A779, "\xEA\x9D\xBA" },
	{ 0x02C86, "\xE2\xB2\x87" },
	{ 0x010B1, "\xE2\xB4\x91" },
	{ 0x02C80, "\xE2\xB2\x81" },
	{ 0x010B3, "\xE2\xB4\x93" },
	{ 0x02C82, "\xE2\xB2\x83" },
	{ 0x010B5, "\xE2\xB4\x95" },
	{ 0x003DC, "\xCF\x9D" },
	{ 0x0A780, "\xEA\x9E\x81" },
	{ 0x0A746, "\xEA\x9D\x87" },
	{ 0x010B9, "\xE2\xB4\x99" },
	{ 0x0A744, "\xEA\x9D\x85" },
	{ 0x01E00, "\xE1\xB8\x81" },
	{ 0x003D8, "\xCF\x99" },
	{ 0x01E02, "\xE1\xB8\x83" },
	{ 0x003DE, "\xCF\x9F" },
	{ 0x01E04, "\xE1\xB8\x85" },
	{ 0x0010E, "\xC4\x8F" },
	{ 0x01E06, "\xE1\xB8\x87" },
	{ 0x0010C, "\xC4\x8D" },
	{ 0x010A3, "\xE2\xB4\x83" },
	{ 0x01F6C, "\xE1\xBD\xA4" },
	{ 0x010A5, "\xE2\xB4\x85" },
	{ 0x01F6D, "\xE1\xBD\xA5" },
	{ 0x010A7, "\xE2\xB4\x87" },
	{ 0x01F6E, "\xE1\xBD\xA6" },
	{ 0x01F6F, "\xE1\xBD\xA7" },
	{ 0x00425, "\xD1\x85" },
	{ 0x0042A, "\xD1\x8A" },
	{ 0x0A650, "\xEA\x99\x91" },
	{ 0x010AD, "\xE2\xB4\x8D" },
	{ 0x01F68, "\xE1\xBD\xA0" },
	{ 0x00547, "\xD5\xB7" },
	{ 0x01F69, "\xE1\xBD\xA1" },
	{ 0x024B6, "\xE2\x93\x90" },
	{ 0x0A656, "\xEA\x99\x97" },
	{ 0x024B8, "\xE2\x93\x92" },
	{ 0x1040B, "\xF0\x90\x90\xB3" },
	{ 0x01E3A, "\xE1\xB8\xBB" },
	{ 0x0054E, "\xD5\xBE" },
	{ 0x01F6A, "\xE1\xBD\xA2" },
	{ 0x0A65C, "\xEA\x99\x9D" },
	{ 0x024BE, "\xE2\x93\x98" },
	{ 0x0A65E, "\xEA\x99\x9F" },
	{ 0x00553, "\xD6\x83" },
	{ 0x02CA4, "\xE2\xB2\xA5" },
	{ 0x01F6B, "\xE1\xBD\xA3" },
	{ 0x0A642, "\xEA\x99\x83" },
	{ 0x01E3C, "\xE1\xB8\xBD" },
	{ 0x0A644, "\xEA\x99\x85" },
	{ 0x010C1, "\xE2\xB4\xA1" },
	{ 0x01E3E, "\xE1\xB8\xBF" },
	{ 0x010C3, "\xE2\xB4\xA3" },
	{ 0x0A648, "\xEA\x99\x89" },
	{ 0x010C5, "\xE2\xB4\xA5" },
	{ 0x00150, "\xC5\x91" },
	{ 0x010C7, "\xE2\xB4\xA7" },
	{ 0x0A64C, "\xEA\x99\x8D" },
	{ 0x02CF2, "\xE2\xB3\xB3" },
	{ 0x02CAA, "\xE2\xB2\xAB" },
	{ 0x01E50, "\xE1\xB9\x91" },
	{ 0x0040B, "\xD1\x9B" },
	{ 0x010CD, "\xE2\xB4\xAD" },
	{ 0x00409, "\xD1\x99" },
	{ 0x0A660, "\xEA\x99\xA1" },
	{ 0x01E38, "\xE1\xB8\xB9" },
	{ 0x01E2C, "\xE1\xB8\xAD" },
	{ 0x02CE0, "\xE2\xB3\xA1" },
	{ 0x0A664, "\xEA\x99\xA5" },
	{ 0x0A782, "\xEA\x9E\x83" },
	{ 0x01E2E, "\xE1\xB8\xAF" },
	{ 0x02C23, "\xE2\xB1\x93" },
	{ 0x0A668, "\xEA\x99\xA9" },
	{ 0x02C21, "\xE2\xB1\x91" },
	{ 0x02CE2, "\xE2\xB3\xA3" },
	{ 0x02C27, "\xE2\xB1\x97" },
	{ 0x01E40, "\xE1\xB9\x81" },
	{ 0x010AB, "\xE2\xB4\x8B" },
	{ 0x01E42, "\xE1\xB9\x83" },
	{ 0x0A662, "\xEA\x99\xA3" },
	{ 0x0041E, "\xD0\xBE" },
	{ 0x02C29, "\xE2\xB1\x99" },
	{ 0x01E28, "\xE1\xB8\xA9" },
	{ 0x0A666, "\xEA\x99\xA7" },
	{ 0x0A78D, "\xC9\xA5" },
	{ 0x001B2, "\xCA\x8B" },
	{ 0x02CDC, "\xE2\xB3\x9D" },
	{ 0x0A66A, "\xEA\x99\xAB" },
	{ 0x0A732, "\xEA\x9C\xB3" },
	{ 0x01E2A, "\xE1\xB8\xAB" },
	{ 0x0A734, "\xEA\x9C\xB5" },
	{ 0x02CD8, "\xE2\xB3\x99" },
	{ 0x01E70, "\xE1\xB9\xB1" },
	{ 0x0A690, "\xEA\x9A\x91" },
	{ 0x01E72, "\xE1\xB9\xB3" },
	{ 0x01E26, "\xE1\xB8\xA7" },
	{ 0x01E74, "\xE1\xB9\xB5" },
	{ 0x02CD6, "\xE2\xB3\x97" },
	{ 0x01E76, "\xE1\xB9\xB7" },
	{ 0x0A696, "\xEA\x9A\x97" },
	{ 0x0A73E, "\xEA\x9C\xBF" },
	{ 0x02162, "\xE2\x85\xB2" },
	{ 0x01E1C, "\xE1\xB8\x9D" },
	{ 0x01F0E, "\xE1\xBC\x86" },
	{ 0x01E7C, "\xE1\xB9\xBD" },
	{ 0x01F0C, "\xE1\xBC\x84" },
	{ 0x0A724, "\xEA\x9C\xA5" },
	{ 0x02CD0, "\xE2\xB3\x91" },
	{ 0x0A726, "\xEA\x9C\xA7" },
	{ 0x0A680, "\xEA\x9A\x81" },
	{ 0x0A728, "\xEA\x9C\xA9" },
	{ 0x0A682, "\xEA\x9A\x83" },
	{ 0x01E1E, "\xE1\xB8\x9F" },
	{ 0x0A684, "\xEA\x9A\x85" },
	{ 0x0A72C, "\xEA\x9C\xAD" },
	{ 0x0A686, "\xEA\x9A\x87" },
	{ 0x0A72E, "\xEA\x9C\xAF" },
	{ 0x02CD2, "\xE2\xB3\x93" },
	{ 0x0A65A, "\xEA\x99\x9B" },
	{ 0x0A68A, "\xEA\x9A\x8B" },
	{ 0x0A658, "\xEA\x99\x99" },
	{ 0x01E18, "\xE1\xB8\x99" },
	{ 0x02CCC, "\xE2\xB3\x8D" },
	{ 0x01E1A, "\xE1\xB8\x9B" },
	{ 0x1041A, "\xF0\x90\x91\x82" },
	{ 0x1040C, "\xF0\x90\x90\xB4" },
	{ 0x0A758, "\xEA\x9D\x99" },
	{ 0x1040E, "\xF0\x90\x90\xB6" },
	{ 0x0A75A, "\xEA\x9D\x9B" },
	{ 0x10408, "\xF0\x90\x90\xB0" },
	{ 0x0A75C, "\xEA\x9D\x9D" },
	{ 0x1040A, "\xF0\x90\x90\xB2" },
	{ 0x0A75E, "\xEA\x9D\x9F" },
	{ 0x01E6C, "\xE1\xB9\xAD" },
	{ 0x01E6E, "\xE1\xB9\xAF" },
	{ 0x01E68, "\xE1\xB9\xA9" },
	{ 0x01E6A, "\xE1\xB9\xAB" },
	{ 0x01F8C, "\xE1\xBE\x84" },
	{ 0x01F8E, "\xE1\xBE\x86" },
	{ 0x0040D, "\xD1\x9D" },
	{ 0x01F88, "\xE1\xBE\x80" },
	{ 0x01F28, "\xE1\xBC\xA0" },
	{ 0x01F8A, "\xE1\xBE\x82" },
	{ 0x0A752, "\xEA\x9D\x93" },
	{ 0x0A74A, "\xEA\x9D\x8B" },
	{ 0x01E5C, "\xE1\xB9\x9D" },
	{ 0x01E5E, "\xE1\xB9\x9F" },
	{ 0x01E58, "\xE1\xB9\x99" },
	{ 0x01E22, "\xE1\xB8\xA3" },
	{ 0x01E5A, "\xE1\xB9\x9B" },
	{ 0x01F8B, "\xE1\xBE\x83" },
	{ 0x01FFC, "\xE1\xBF\xB3" },
	{ 0x01E54, "\xE1\xB9\x95" },
	{ 0x01E56, "\xE1\xB9\x97" },
	{ 0x01FF8, "\xE1\xBD\xB8" },
	{ 0x01FFA, "\xE1\xBD\xBC" },
	{ 0x01EB0, "\xE1\xBA\xB1" },
	{ 0x00418, "\xD0\xB8" },
	{ 0x01EB2, "\xE1\xBA\xB3" },
	{ 0x001F8, "\xC7\xB9" },
	{ 0x0041D, "\xD0\xBD" },
	{ 0x001FE, "\xC7\xBF" },
	{ 0x0041F, "\xD0\xBF" },
	{ 0x01E4C, "\xE1\xB9\x8D" },
	{ 0x01F4B, "\xE1\xBD\x83" },
	{ 0x01E4E, "\xE1\xB9\x8F" },
	{ 0x01E30, "\xE1\xB8\xB1" },
	{ 0x01E48, "\xE1\xB9\x89" },
	{ 0x0A688, "\xEA\x9A\x89" },
	{ 0x01E4A, "\xE1\xB9\x8B" },
	{ 0x0A68E, "\xEA\x9A\x8F" },
	{ 0x0A756, "\xEA\x9D\x97" },
	{ 0x0A68C, "\xEA\x9A\x8D" },
	{ 0x01FEC, "\xE1\xBF\xA5" },
	{ 0x0A692, "\xEA\x9A\x93" },
	{ 0x01FAC, "\xE1\xBE\xA4" },
	{ 0x0A76A, "\xEA\x9D\xAB" },
	{ 0x01F4C, "\xE1\xBD\x84" },
	{ 0x0040F, "\xD1\x9F" },
	{ 0x01E44, "\xE1\xB9\x85" },
	{ 0x01EA8, "\xE1\xBA\xA9" },
	{ 0x01E46, "\xE1\xB9\x87" },
	{ 0x01F59, "\xE1\xBD\x91" },
	{ 0x01FE8, "\xE1\xBF\xA0" },
	{ 0x01EAC, "\xE1\xBA\xAD" },
	{ 0x01FEA, "\xE1\xBD\xBA" },
	{ 0x01EAE, "\xE1\xBA\xAF" },
	{ 0x01EBC, "\xE1\xBA\xBD" },
	{ 0x01E0A, "\xE1\xB8\x8B" },
	{ 0x01EBE, "\xE1\xBA\xBF" },
	{ 0x01E08, "\xE1\xB8\x89" },
	{ 0x01EB8, "\xE1\xBA\xB9" },
	{ 0x01E0E, "\xE1\xB8\x8F" },
	{ 0x0A74C, "\xEA\x9D\x8D" },
	{ 0x01E0C, "\xE1\xB8\x8D" },
	{ 0x01FAA, "\xE1\xBE\xA2" },
	{ 0x00421, "\xD1\x81" },
	{ 0x01EBA, "\xE1\xBA\xBB" },
	{ 0x00423, "\xD1\x83" },
	{ 0x00422, "\xD1\x82" },
	{ 0x01E16, "\xE1\xB8\x97" },
	{ 0x00424, "\xD1\x84" },
	{ 0x01E14, "\xE1\xB8\x95" },
	{ 0x00426, "\xD1\x86" },
	{ 0x01EC0, "\xE1\xBB\x81" },
	{ 0x00428, "\xD1\x88" },
	{ 0x01EC2, "\xE1\xBB\x83" },
	{ 0x0A78B, "\xEA\x9E\x8C" },
	{ 0x01EC4, "\xE1\xBB\x85" },
	{ 0x0042C, "\xD1\x8C" },
	{ 0x0042F, "\xD1\x8F" },
	{ 0x01FBA, "\xE1\xBD\xB0" },
	{ 0x01EC8, "\xE1\xBB\x89" },
	{ 0x01EB4, "\xE1\xBA\xB5" },
	{ 0x01E60, "\xE1\xB9\xA1" },
	{ 0x01EB6, "\xE1\xBA\xB7" },
	{ 0x00538, "\xD5\xA8" },
	{ 0x1040F, "\xF0\x90\x90\xB7" },
	{ 0x0053A, "\xD5\xAA" },
	{ 0x00534, "\xD5\xA4" },
	{ 0x01F99, "\xE1\xBE\x91" },
	{ 0x01F98, "\xE1\xBE\x90" },
	{ 0x01F9B, "\xE1\xBE\x93" },
	{ 0x01F9A, "\xE1\xBE\x92" },
	{ 0x01F9D, "\xE1\xBE\x95" },
	{ 0x01F9C, "\xE1\xBE\x94" },
	{ 0x01F9F, "\xE1\xBE\x97" },
	{ 0x01F9E, "\xE1\xBE\x96" },
	{ 0x00536, "\xD5\xA6" },
	{ 0x01FCC, "\xE1\xBF\x83" },
	{ 0x01F89, "\xE1\xBE\x81" },
	{ 0x024BD, "\xE2\x93\x97" },
	{ 0x004F6, "\xD3\xB7" },
	{ 0x00532, "\xD5\xA2" },
	{ 0x004F4, "\xD3\xB5" },
	{ 0x01FC8, "\xE1\xBD\xB2" },
	{ 0x004FA, "\xD3\xBB" },
	{ 0x024BB, "\xE2\x93\x95" },
	{ 0x004F8, "\xD3\xB9" },
	{ 0x01FCA, "\xE1\xBD\xB4" },
	{ 0x00512, "\xD4\x93" },
	{ 0x010AE, "\xE2\xB4\x8E" },
	{ 0x00514, "\xD4\x95" },
	{ 0x0A73C, "\xEA\x9C\xBD" },
	{ 0x00516, "\xD4\x97" },
	{ 0x01E9E, "\xC3\x9F" },
	{ 0x00518, "\xD4\x99" },
	{ 0x02C20, "\xE2\xB1\x90" },
	{ 0x0051A, "\xD4\x9B" },
	{ 0x004C7, "\xD3\x88" },
	{ 0x02C25, "\xE2\xB1\x95" },
	{ 0x02C24, "\xE2\xB1\x94" },
	{ 0x01FB9, "\xE1\xBE\xB1" },
	{ 0x01FB8, "\xE1\xBE\xB0" },
	{ 0x01FBB, "\xE1\xBD\xB1" },
	{ 0x01E94, "\xE1\xBA\x95" },
	{ 0x02C98, "\xE2\xB2\x99" },
	{ 0x01FBC, "\xE1\xBE\xB3" },
	{ 0x02C9E, "\xE2\xB2\x9F" },
	{ 0x02C2C, "\xE2\xB1\x9C" },
	{ 0x01E90, "\xE1\xBA\x91" },
	{ 0x02C2E, "\xE2\xB1\x9E" },
	{ 0x004D0, "\xD3\x91" },
	{ 0x0051E, "\xD4\x9F" },
	{ 0x0A652, "\xEA\x99\x93" },
	{ 0x01E92, "\xE1\xBA\x93" },
	{ 0x0050C, "\xD4\x8D" },
	{ 0x01E8C, "\xE1\xBA\x8D" },
	{ 0x01FA9, "\xE1\xBE\xA1" },
	{ 0x01FA8, "\xE1\xBE\xA0" },
	{ 0x01FAB, "\xE1\xBE\xA3" },
	{ 0x02CEB, "\xE2\xB3\xAC" },
	{ 0x01FAD, "\xE1\xBE\xA5" },
	{ 0x00535, "\xD5\xA5" },
	{ 0x01FAF, "\xE1\xBE\xA7" },
	{ 0x01FAE, "\xE1\xBE\xA6" },
	{ 0x01EA2, "\xE1\xBA\xA3" },
	{ 0x00539, "\xD5\xA9" },
	{ 0x01EA0, "\xE1\xBA\xA1" },
	{ 0x0053B, "\xD5\xAB" },
	{ 0x01EA6, "\xE1\xBA\xA7" },
	{ 0x0053D, "\xD5\xAD" },
	{ 0x01EA4, "\xE1\xBA\xA5" },
	{ 0x0053F, "\xD5\xAF" },
	{ 0x01FD9, "\xE1\xBF\x91" },
	{ 0x01E8E, "\xE1\xBA\x8F" },
	{ 0x01FDB, "\xE1\xBD\xB7" },
	{ 0x01E88, "\xE1\xBA\x89" },
	{ 0x00522, "\xD4\xA3" },
	{ 0x01E8A, "\xE1\xBA\x8B" },
	{ 0x00524, "\xD4\xA5" },
	{ 0x01E84, "\xE1\xBA\x85" },
	{ 0x01FCB, "\xE1\xBD\xB5" },
	{ 0x10414, "\xF0\x90\x90\xBC" },
	{ 0x01FC9, "\xE1\xBD\xB3" },
	{ 0x01E86, "\xE1\xBA\x87" },
	{ 0x02CC0, "\xE2\xB3\x81" },
	{ 0x01E80, "\xE1\xBA\x81" },
	{ 0x0050E, "\xD4\x8F" },
	{ 0x01E82, "\xE1\xBA\x83" },
	{ 0x02CC4, "\xE2\xB3\x85" },
};

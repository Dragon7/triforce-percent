#include "ultra64.h"
#include "global.h"

s16 PatrickStarObjIdleAnimFrameData[373] = {
	0x0000, 0x03e2, -0x0fc, 0x4000, 0x8000, 0x7fff, 0xffff, 0x05b0, 0x059d, 0xdf01, 0x0885, 0xfc3d, 0x234d, 0xc01d, 0xc02c, 0xc044, 
	0xc062, 0xc087, 0xc0b1, 0xc0df, 0xc10f, 0xc140, 0xc171, 0xc1a1, 0xc1ce, 0xc1f8, 0xc21d, 0xc23c, 0xc253, 0xc262, 0xc267, 0xc265, 
	0xc25e, 0xc253, 0xc244, 0xc232, 0xc21d, 0xc205, 0xc1ea, 0xc1ce, 0xc1b0, 0xc191, 0xc171, 0xc150, 0xc12f, 0xc10f, 0xc0ee, 0xc0cf, 
	0xc0b1, 0xc095, 0xc07b, 0xc062, 0xc04d, 0xc03b, 0xc02c, 0xc021, 0xc01a, 0xc018, 0xffde, 0xffc7, 0xffa3, 0xff73, 0xff3a, 0xfefa, 
	0xfeb4, 0xfe6a, 0xfe1e, 0xfdd3, 0xfd89, 0xfd43, 0xfd02, 0xfcc9, 0xfc9a, 0xfc75, 0xfc5e, 0xfc56, 0xfc5a, 0xfc64, 0xfc75, 0xfc8c, 
	0xfca8, 0xfcc9, 0xfcee, 0xfd17, 0xfd43, 0xfd71, 0xfda1, 0xfdd3, 0xfe05, 0xfe38, 0xfe6a, 0xfe9c, 0xfecc, 0xfefa, 0xff26, 0xff4e, 
	0xff73, 0xff94, 0xffb0, 0xffc7, 0xffd8, 0xffe3, 0xffe6, 0x049c, 0x0491, 0x047f, 0x0469, 0x044e, 0x0430, 0x040f, 0x03ec, 0x03c8, 
	0x03a4, 0x0381, 0x0360, 0x0342, 0x0327, 0x0310, 0x02ff, 0x02f4, 0x02f0, 0x02f2, 0x02f7, 0x02ff, 0x030a, 0x0317, 0x0327, 0x0338, 
	0x034b, 0x0360, 0x0376, 0x038d, 0x03a4, 0x03bc, 0x03d4, 0x03ec, 0x0403, 0x041a, 0x0430, 0x0444, 0x0458, 0x0469, 0x0479, 0x0486, 
	0x0491, 0x0499, 0x049e, 0x049f, 0xffba, 0xffc6, 0xffd9, 0xfff2, 0x0011, 0x0033, 0x0058, 0x007e, 0x00a6, 0x00ce, 0x00f4, 0x0119, 
	0x013b, 0x0158, 0x0171, 0x0184, 0x0190, 0x0195, 0x0193, 0x018d, 0x0184, 0x0178, 0x016a, 0x0158, 0x0145, 0x0130, 0x0119, 0x0101, 
	0x00e7, 0x00ce, 0x00b3, 0x0099, 0x007e, 0x0064, 0x004b, 0x0033, 0x001c, 0x0007, 0xfff2, 0xffe1, 0xffd2, 0xffc6, 0xffbd, 0xffb8, 
	0xffb6, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa216, 0xa216, 0xa215, 0xa214, 0xa214, 0xa213, 0xa212, 0xa211, 
	0xa211, 0xa210, 0xa210, 0xa210, 0xa210, 0xa211, 0xa211, 0xa211, 0xa212, 0xa212, 0xa213, 0xa214, 0xa214, 0xa215, 0xa215, 0xa216, 
	0xa216, 0xa216, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0xa217, 0x0216, 0x020b, 
	0x01fa, 0x01e4, 0x01c9, 0x01ab, 0x018a, 0x0167, 0x0143, 0x0120, 0x00fd, 0x00dc, 0x00be, 0x00a3, 0x008d, 0x007c, 0x0071, 0x006d, 
	0x006f, 0x0074, 0x007c, 0x0087, 0x0094, 0x00a3, 0x00b5, 0x00c8, 0x00dc, 0x00f2, 0x0109, 0x0120, 0x0138, 0x014f, 0x0167, 0x017e, 
	0x0195, 0x01ab, 0x01bf, 0x01d2, 0x01e4, 0x01f3, 0x0200, 0x020b, 0x0213, 0x0218, 0x021a, 0x0183, 0x0177, 0x0163, 0x014a, 0x012c, 
	0x010b, 0x00e6, 0x00bf, 0x0097, 0x006f, 0x0048, 0x0023, 0x0001, 0xffe2, 0xffc9, 0xffb6, 0xffaa, 0xffa6, 0xffa8, 0xffad, 0xffb6, 
	0xffc2, 0xffd1, 0xffe2, 0xfff6, 0x000c, 0x0023, 0x003c, 0x0055, 0x006f, 0x008a, 0x00a4, 0x00bf, 0x00d9, 0x00f2, 0x010b, 0x0122, 
	0x0137, 0x014a, 0x015c, 0x016b, 0x0177, 0x017f, 0x0185, 0x0187, 0x5db1, 0x5db0, 0x5db0, 0x5daf, 0x5dae, 0x5dad, 0x5dad, 0x5dac, 
	0x5dab, 0x5dab, 0x5dab, 0x5daa, 0x5daa, 0x5daa, 0x5daa, 0x5dab, 0x5dab, 0x5dab, 0x5dab, 0x5dab, 0x5dab, 0x5daa, 0x5daa, 0x5daa, 
	0x5daa, 0x5daa, 0x5daa, 0x5daa, 0x5dab, 0x5dab, 0x5dab, 0x5dab, 0x5dac, 0x5dac, 0x5dad, 0x5dad, 0x5dae, 0x5dae, 0x5daf, 0x5daf, 
	0x5db0, 0x5db0, 0x5db1, 0x5db1, 0x5db1, };

JointIndex PatrickStarObjIdleAnimJointIndices[8] = {
	{ 0x0000, 0x0001, 0x0002, },
	{ 0x0003, 0x0000, 0x0004, },
	{ 0x000d, 0x0005, 0x0000, },
	{ 0x003a, 0x0006, 0x0000, },
	{ 0x0067, 0x0094, 0x00c1, },
	{ 0x0007, 0x0008, 0x0009, },
	{ 0x00ee, 0x011b, 0x0148, },
	{ 0x000a, 0x000b, 0x000c, },
};

AnimationHeader PatrickStarObjIdleAnim = { { 45 }, PatrickStarObjIdleAnimFrameData, PatrickStarObjIdleAnimJointIndices, 13 };


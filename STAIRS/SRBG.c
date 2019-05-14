
//{{BLOCK(SRBG)

//======================================================================
//
//	SRBG, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 9 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 288 + 4096 = 4896
//
//	Time-stamp: 2019-04-14, 21:13:04
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short SRBGTiles[144] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x4444,0x3333,0x4444,0x3333,0x4444,0x3333,0x4444,

	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x2222,0x2222,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x2222,0x2222,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,

	0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,0x3333,
	0x3333,0x3333,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
};

const unsigned short SRBGMap[2048] __attribute__((aligned(4)))=
{
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9003,0x9004,0x9403,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9005,0x9005,0x9005,0x9005,0x9006,0x9006,0x9005,0x9005,
	0x9005,0x9005,0x9006,0x9006,0x9005,0x9005,0x9005,0x9005,
	0x9006,0x9006,0x9005,0x9005,0x9005,0x9005,0x9006,0x9006,
	0x9005,0x9005,0x9005,0x9005,0x9006,0x9006,0x9005,0x9005,
	0x9002,0x9002,0x9002,0x9002,0x9007,0x9007,0x9002,0x9002,
	0x9002,0x9002,0x9007,0x9007,0x9002,0x9002,0x9002,0x9002,
	0x9007,0x9007,0x9002,0x9002,0x9002,0x9002,0x9007,0x9007,
	0x9002,0x9002,0x9002,0x9002,0x9007,0x9007,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9804,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9807,0x9807,0x9002,0x9002,
	0x9002,0x9002,0x9807,0x9807,0x9002,0x9002,0x9002,0x9002,
	0x9807,0x9807,0x9002,0x9002,0x9002,0x9002,0x9807,0x9807,
	0x9002,0x9002,0x9002,0x9002,0x9807,0x9807,0x9002,0x9002,
	0x9805,0x9805,0x9805,0x9805,0x9806,0x9806,0x9805,0x9805,
	0x9805,0x9805,0x9806,0x9806,0x9805,0x9805,0x9805,0x9805,
	0x9806,0x9806,0x9805,0x9805,0x9805,0x9805,0x9806,0x9806,
	0x9805,0x9805,0x9805,0x9805,0x9806,0x9806,0x9805,0x9805,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9804,0x9804,0x9804,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9008,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9008,0x9008,0x9008,0x9008,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9005,0x9005,0x9006,0x9006,0x9005,0x9005,0x9005,0x9005,
	0x9006,0x9006,0x9005,0x9005,0x9005,0x9005,0x9006,0x9006,
	0x9005,0x9005,0x9005,0x9005,0x9006,0x9006,0x9005,0x9005,
	0x9005,0x9005,0x9006,0x9006,0x9005,0x9005,0x9005,0x9005,
	0x9002,0x9002,0x9007,0x9007,0x9002,0x9002,0x9002,0x9002,
	0x9007,0x9007,0x9002,0x9002,0x9002,0x9002,0x9007,0x9007,
	0x9002,0x9002,0x9002,0x9002,0x9007,0x9007,0x9002,0x9002,
	0x9002,0x9002,0x9007,0x9007,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9003,0x9004,0x9403,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9807,0x9807,0x9002,0x9002,0x9002,0x9002,
	0x9807,0x9807,0x9002,0x9002,0x9002,0x9002,0x9807,0x9807,
	0x9002,0x9002,0x9002,0x9002,0x9807,0x9807,0x9002,0x9002,
	0x9002,0x9002,0x9807,0x9807,0x9002,0x9002,0x9002,0x9002,
	0x9805,0x9805,0x9806,0x9806,0x9805,0x9805,0x9805,0x9805,
	0x9806,0x9806,0x9805,0x9805,0x9805,0x9805,0x9806,0x9806,
	0x9805,0x9805,0x9805,0x9805,0x9806,0x9806,0x9805,0x9805,
	0x9805,0x9805,0x9806,0x9806,0x9805,0x9805,0x9805,0x9805,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9804,0x9804,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,

	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,0x9002,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,
	0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,0x9001,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short SRBGPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7C1F,0x03FF,0x7C00,0x7F60,0x7FFF,0x6739,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(SRBG)

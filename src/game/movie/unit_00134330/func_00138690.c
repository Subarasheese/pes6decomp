/* compiler: mwcc-3.0.1b210 */
/* The PAL movie callbacks correspond to videoDecCreate in kira-502/dotr-decomp,
   src/movie/videodec.c. PES6 keeps the MPEG decoder in separate global storage. */
#include "pes6/movie_input_buffer.h"
typedef struct {
    ViBuf input;
    s32 state;
} MovieDecoder;
typedef struct MovieMpeg MovieMpeg;
typedef struct {
    u8 reserved[8];
    s64 pts, dts;
} MovieCallbackData;
typedef s32 (*MovieCallback)(MovieMpeg *, MovieCallbackData *, void *);
extern MovieMpeg D_004FDC80;
extern s32 func_008FAF18(MovieMpeg *, void *, s32);
extern void func_008FBD30(MovieMpeg *, s32, MovieCallback, void *);
extern s32 func_001388A0(MovieMpeg *, MovieCallbackData *, void *),
    func_00138860(MovieMpeg *, MovieCallbackData *, void *),
    func_00138830(MovieMpeg *, MovieCallbackData *, void *),
    func_00138800(MovieMpeg *, MovieCallbackData *, void *),
    func_001387B0(MovieMpeg *, MovieCallbackData *, void *);
extern s32 func_00138120(ViBuf *, MovieQuadword *, MovieQuadword *, s32, TimeStamp *, s32);
s32 func_00138690(MovieDecoder *decoder, void *work, s32 workSize, MovieQuadword *data,
                  MovieQuadword *tags, s32 sectors, TimeStamp *times, s32 numTimes) {
    func_008FAF18(&D_004FDC80, work, workSize);
    func_008FBD30(&D_004FDC80, 0, func_001388A0, 0);
    func_008FBD30(&D_004FDC80, 1, func_00138860, 0);
    func_008FBD30(&D_004FDC80, 2, func_00138830, 0);
    func_008FBD30(&D_004FDC80, 3, func_00138800, 0);
    func_008FBD30(&D_004FDC80, 5, func_001387B0, 0);
    decoder->state = 0;
    func_00138120(&decoder->input, data, tags, sectors, times, numTimes);
    return 1;
}

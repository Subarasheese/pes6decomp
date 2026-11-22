/* compiler: ee-gcc-2.96-G0 */
/* ADXSTMF_CreateCvfsRt adapted from LucasPicoli/god-hand-decomp, src/cod/00327b58.c. See
 * THIRD_PARTY.md. */
typedef struct {
    signed char used, status, readFlag, retryCount;
    unsigned char remaining[0x5c];
} AdxStream;
typedef struct CvFsHandle CvFsHandle;
typedef struct SfdSj SfdSj;
extern int D_00383D04, D_00383D08;
extern AdxStream D_00383D20[];
extern void func_00162E20(AdxStream *stream, CvFsHandle *file, int offset, int size, SfdSj *joint);
AdxStream *func_00162F28(CvFsHandle *file, int offset, int size, SfdSj *joint) {
    int i;
    AdxStream *stream = 0;
    for (i = 0; i < D_00383D08; i++) {
        stream = &D_00383D20[D_00383D04 + i];
        if (!stream->used)
            break;
    }
    if (i == D_00383D08)
        return 0;
    func_00162E20(stream, file, offset, size, joint);
    stream->retryCount = 1;
    return stream;
}

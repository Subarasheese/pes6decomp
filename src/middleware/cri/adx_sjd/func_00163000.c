/* compiler: ee-gcc-2.96-G0 */
/* ADXSTMF_CreateCvfs adapted from LucasPicoli/god-hand-decomp, src/cod/00327c30.c. See
 * THIRD_PARTY.md. */
typedef struct {
    signed char used, status, readFlag, retryCount;
    unsigned char remaining[0x5c];
} AdxStream;
typedef struct CvFsHandle CvFsHandle;
typedef struct SfdSj SfdSj;
extern int D_00383D0C, D_00383D10;
extern AdxStream D_00383D20[];
extern void func_00162E20(AdxStream *stream, CvFsHandle *file, int offset, int size, SfdSj *joint);
AdxStream *func_00163000(CvFsHandle *file, int offset, int size, SfdSj *joint) {
    int i;
    AdxStream *stream = 0;
    for (i = 0; i < D_00383D10; i++) {
        stream = &D_00383D20[D_00383D0C + i];
        if (!stream->used)
            break;
    }
    if (i == D_00383D10)
        return 0;
    func_00162E20(stream, file, offset, size, joint);
    stream->retryCount = 0;
    return stream;
}

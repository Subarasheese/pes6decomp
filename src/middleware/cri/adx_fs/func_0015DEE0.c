/* compiler: ee-gcc-2.96 */
/* Adapted from recvx-decomp, src/cri/mwlib/ee/lib/libadxe/adx_fs.c (adxf_ChkPrmGfr).
 * licence: MIT (see THIRD_PARTY.md) */
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef struct _adxf_ptinfo {
    struct _adxf_ptinfo *next;
    Sint32 size;
    Sint32 nfile;
    Uint16 nentry;
    Sint8 type;
    Sint8 rev;
    Sint8 fname[256];
    void *curdir;
    Sint32 top;
} ADXF_PTINFO;
extern void func_0015B478(const Sint8 *msg);
extern ADXF_PTINFO *D_003785D8[256];

Sint32 func_0015DEE0(Sint32 ptid, Sint32 flid) {
    ADXF_PTINFO *info;
    if (((Uint32)ptid) >= 256) {
        func_0015B478((const Sint8 *)"E9040828:'ptid' is range outside.");
        return -3;
    }
    info = D_003785D8[ptid];
    if (info == 0) {
        func_0015B478((const Sint8 *)"E9040828:'ptid' is range outside.");
        return -3;
    }
    if ((flid < 0) || (flid >= info->nfile)) {
        func_0015B478((const Sint8 *)"E9040828:'flid' is range outside.");
        return -3;
    }
    return 0;
}

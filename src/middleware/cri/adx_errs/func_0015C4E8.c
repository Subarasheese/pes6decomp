/* compiler: ee-gcc-2.96-G0 */
/* Adapted from recvx-decomp, src/cri/mwlib/ee/lib/libadxe/adx_fs.c (ADXF_StopPtLd).
 * licence: MIT (see THIRD_PARTY.md) */
typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef struct _UUID {
    Uint32 Data1;
    Uint16 Data2;
    Uint16 Data3;
    Uint8 Data4[8];
} UUID;
typedef struct {
    Sint8 *data;
    Sint32 len;
} SJCK;
typedef struct {
    struct _sj_vtbl *vtbl;
} SJ_OBJ;
typedef SJ_OBJ *SJ;
typedef struct _sj_vtbl {
    void (*QueryInterface)();
    void (*AddRef)();
    void (*Release)();
    void (*Destroy)(SJ sj);
    UUID *(*GetUuid)(SJ sj);
    void (*Reset)(SJ sj);
    void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
    void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);
    void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);
    Sint32 (*GetNumData)(SJ sj, Sint32 id);
    Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
    void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Sint32 ecode), void *obj);
} SJ_IF;
typedef void *ADXSTM;
typedef struct _adx_fs {
    Sint8 used;
    Sint8 stat;
    Sint8 sjflag;
    Sint8 stopnw_flg;
    ADXSTM stm;
    SJ sj;
    Sint32 fnsct;
    Sint32 fsize;
    Sint32 skpos;
    Sint32 rdstpos;
    Sint32 rqsct;
    Sint32 rdsct;
    Sint8 *buf;
    Sint32 bsize;
    Sint32 rqrdsct;
    Sint32 ofst;
    Sint8 fname[256];
    void *dir;
} ADX_FS;
typedef ADX_FS *ADXF;
extern ADXF D_00378B08;
extern Sint32 D_00378B0C;
extern void func_0015C480(void);
extern Sint32 func_0015D738(ADXF adxf);
extern Sint32 adxf_GetStat(ADXF adxf);

void func_0015C4E8(void) {
    if ((D_00378B08 != 0) && (D_00378B0C >= 0)) {
        if (adxf_GetStat(D_00378B08) != 1) {
            func_0015D738(D_00378B08);
        }
        func_0015C480();
    }
}

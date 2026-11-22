/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_fs.c (adxf_CloseSjStm).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef char Char8;
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
typedef struct {
    Sint8 unk0;
    Sint8 stat;
    Sint8 read_flg;
    Sint8 unk3;
    SJ sj;
    void *cvfs;
    Sint32 unkC;
    Sint32 file_len;
    Sint32 file_sct;
    Sint32 unk18;
    Sint32 unk1C;
    Sint32 unk20;
    SJCK unk24;
    Sint32 req_rd_size;
    Sint32 eos;
    Uint32 unk34;
    void (*eos_callback)(void *);
    void *eos_callback_context;
    Sint32 unk40;
    Sint8 pause;
    Sint8 unk45;
    Sint8 unk46;
    Sint8 unk47;
    Sint8 unk48;
    Sint8 unk49;
    char pad4A[6];
    const Char8 *fname;
    void *dir;
    Sint32 cur_ofst;
    Uint32 unk5C;
} ADXSTM_OBJ;
typedef ADXSTM_OBJ *ADXSTM;
extern void func_0015B6D0(Sint8 *buf, Sint32 bsize);
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
    void *dir;
    const Char8 *unk38;
    Sint32 unk3C;
    Sint32 unk40;
} ADX_FS;
typedef ADX_FS *ADXF;
extern Sint32 D_003789D8;

void func_0015D048(ADXF adxf) {
    SJ sj;
    if ((adxf->sj == 0) || (adxf->sjflag != 0)) {
        return;
    }
    if (D_003789D8 == 1) {
        func_0015B6D0(adxf->buf, adxf->bsize);
    }
    sj = adxf->sj;
    adxf->sj = 0;
    (*sj->vtbl->Destroy)(sj);
}

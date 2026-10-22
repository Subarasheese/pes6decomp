/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/lsc.c). */
extern char D_003CAE58[];
extern char D_003CAE88[];
typedef unsigned char u_char;
typedef unsigned int u_int;
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
        void (*EntryErrFunc)(SJ sj,
                                        void (*func)(void *obj, Sint32 ecode), void *obj);
} SJ_IF;
void SJ_SplitChunk(SJCK *ck, Sint32 nbyte, SJCK *ck1, SJCK *ck2);
void SJ_MakeTag(SJCK *ck, char *tag);
void SJ_GetTagContent(Sint8 *tag, SJCK *cko);
SJ SJRBF_Create(Sint8 *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_Create(Sint8 *data, Sint32 bsize);
SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
typedef struct {
    u_char trycount;
    u_char spindlctrl;
    u_char datapattern;
    u_char pad;
} sceCdRMode;
typedef struct {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
} sceCdlLOCCD;
sceCdlLOCCD* sceCdIntToPos(int i, sceCdlLOCCD* p);
int sceCdRead(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int* sceCdCallback(void (*func)(int));
int* sceCdPOffCallback(void (*func)(void*), void* addr);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
typedef struct {
    Sint8 unk0;
    Sint8 stat;
    Sint8 read_flg;
    Sint8 unk3;
    SJ sj;
    void* cvfs;
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
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32 unk40;
    Sint8 pause;
    Sint8 unk45;
    Sint8 unk46;
    Sint8 unk47;
    Sint8 unk48;
    Sint8 unk49;
    char pad4A[6];
    const Char8* fname;
    void* dir;
    Sint32 cur_ofst;
    Uint32 unk5C;
} ADXSTM_OBJ;
typedef ADXSTM_OBJ* ADXSTM;
typedef struct {
    Sint32 id;
    const Char8* fname;
    Sint32 unk8;
    void* dir;
    Sint32 unk10;
    Sint32 unk14;
    Sint32 stat;
    Sint32 rd_sct;
} LSC_STM;
typedef struct {
    Sint8 used;
    Sint8 stat;
    Sint8 unk2;
    Sint8 lp_flg;
    Sint8 unk4;
    SJ sj;
    Sint32 unkC;
    Sint32 unk10;
    Sint32 flow_limit;
    Sint32 unk18;
    Sint32 last_stm_index;
    Sint32 unk20;
    Sint32 num_stm;
    ADXSTM stm_hndl;
    Sint32 unk2C;
    char pad30[4];
    Sint32 unk34;
    LSC_STM stm[16];
} LSC_OBJ;
typedef LSC_OBJ* LSC;
ADXSTM ADXSTM_Create(SJ, Sint32);
void ADXSTM_BindFile(ADXSTM stm, const Char8* fname, void* dir, Sint32 arg3, Sint32 arg4);
void ADXSTM_SetSj(ADXSTM stm, SJ sj);
void ADXSTM_SetEos(ADXSTM stm, Sint32 eos);
Sint32 ADXSTM_SetReqRdSize(ADXSTM stm, Sint32 size);
void ADXSTM_SetPause(ADXSTM stm, Sint8 sw);
Sint32 ADXSTM_Seek(ADXSTM stm, Sint32 offset);
Sint32 ADXSTM_Start2(ADXSTM stm, Sint32 arg1);
void ADXSTM_EntryEosFunc(ADXSTM stm, void (*func)(void*), void* context);
Sint32 ADXSTM_SetBufSize(ADXSTM stm, Sint32 arg1, Sint32 arg2);
void ADXSTM_BindFileNw(ADXSTM stm, const Char8* fname, void* dir, Sint32 arg3, Sint32 file_sct);
LSC func_00171ED8(SJ sj);
Sint32 func_00172038(LSC lsc, const Char8* fname, void* dir, Sint32 ofst, Sint32 fnsct);
void func_00172030(LSC lsc, ADXSTM);
void func_001727C0(Sint32*);
void func_001727E0(Sint32*);
void LSC_CallErrFunc(const Char8* format, ...);
LSC func_00171E78();
LSC func_00171ED8(SJ sj) {
    LSC lsc;
    Sint32 lock;
    Sint32 i;
    if (sj == 0) {
        LSC_CallErrFunc(D_003CAE58);
        return 0;
    }
    func_001727C0(&lock);
    lsc = func_00171E78();
    if (lsc == 0) {
        LSC_CallErrFunc(D_003CAE88);
    } else {
        lsc->stat = 0;
        lsc->sj = sj;
        lsc->unk18 = (*(sj)->vtbl->GetNumData)(sj, 0) + (*(sj)->vtbl->GetNumData)(sj, 1);
        lsc->flow_limit = (lsc->unk18 * 8) / 10;
        for (i = 0; i < 16; i++) {
            lsc->stm[i].stat = 0;
        }
        lsc->used = 1;
    }
    func_001727E0(&lock);
    return lsc;
}
void func_00172030(LSC lsc, ADXSTM stm);
Sint32 func_00172038(LSC lsc, const Char8* fname, void* dir, Sint32 ofst, Sint32 fnsct);
void D_00172300(LSC lsc, Sint32 sw);
Sint32 D_00172400(LSC lsc, Sint32 no);
const Char8* D_00172490(LSC lsc, Sint32 stm_id);
Sint32 D_00172528(LSC lsc, Sint32 stm_id);
Sint32 D_001725C0(LSC lsc, Sint32 stm_id);
void D_00172658(LSC lsc, Sint32 min);
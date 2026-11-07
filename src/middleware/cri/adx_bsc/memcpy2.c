/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
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
int sceCdRead(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
typedef struct {
               Sint16 unk0;
               Sint16 unk2;
               Sint16 unk4;
               Sint16 unk6;
} ADXPD_OBJ_SUB;
typedef struct {
               Sint32 used;
               Sint32 unk4;
               Sint32 mode;
               Sint32 stat;
               Sint32 num_blk;
               Sint32 unk14;
               Sint32 unk18;
               Sint32 unk1C;
               Sint32 unk20;
               Sint32 unk24;
               ADXPD_OBJ_SUB unk28;
               Sint16 unk30;
               Sint16 unk32;
               Sint16 unk34;
               Sint16 unk36;
               Sint16 unk38;
               Sint16 unk3A;
} ADXPD_OBJ;
typedef ADXPD_OBJ* ADXPD;
Sint32 ADX_DecodeFooter(Uint8*, Sint32, Sint16*);
void ADXERR_ItoA2(Sint32, Sint32, Sint8*, Sint32);
void ADXPD_SetCoef(ADXPD, Sint32, Sint16*);
void ADXPD_SetDly(ADXPD, Sint16*, Sint16*);
void ADXPD_SetExtPrm(ADXPD, Sint16, Sint16, Sint16);
Sint32 ADXPD_EntrySte(ADXPD, Sint32, Sint32, Sint32, Sint32);
extern int vsprintf(char* buf, const char* fmt, ...);
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
extern void (*ahxsetextfunc)(Sint32, Sint16*);
void SKG_GenerateKey(void*, Sint32, Sint16*, Sint16*, Sint16*);
void memcpy2(void* dest, const void* src, Sint32 count) {
    Uint16* _dest = dest;
    const Uint16* _src = src;
    while (count > 0) {
        *_dest++ = *_src++;
        count -= 1;
    }
}
/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef int s32;
typedef s32 ptrdiff_t;
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
typedef struct {
    char pad0[0x10];
} ADX_UNK;
typedef struct {
               Sint32 unk0;
               Sint32 unk4;
               Sint32 unk8;
               Sint32 unkC;
               Sint32 unk10;
               void* unk14;
               Sint32 unk18;
               Sint32 unk1C;
               Sint32 unk20;
               Sint32 unk24;
               Sint32 unk28;
} ADXB_UNK;
typedef struct {
               Sint16 unk0;
               Sint16 unk2;
               Sint32 stat;
               ADXPD adxpd;
               Sint8 encoding_type;
               Sint8 sample_bitdepth;
               Sint8 channel_count;
               Sint8 block_size;
               Sint32 samples_per_block;
               Sint32 sample_rate;
               Sint32 total_samples;
               Sint16 unk1C;
               char pad1E[2];
               Sint32 unk20;
               Sint16 unk24;
               Sint16 unk26;
               Sint32 unk28;
               Sint32 unk2C;
               Sint32 unk30;
               Sint32 unk34;
               Sint32 unk38;
               void* unk3C;
               Sint32 unk40;
               Sint32 unk44;
               ADXB_UNK unk48;
               Sint32 unk74;
               void* (*get_wr)(void*, ptrdiff_t*, Sint32*, Sint32*);
               void* object;
               void (*add_wr)(void*, Sint32, Sint32);
               Sint32 unk84;
               Sint32 unk88;
               Sint32 unk8C;
               Sint32 dec_num_sample;
               Sint32 dec_data_len;
               Sint16 format;
               Sint16 unk9A;
               Sint16 unk9C;
               Sint16 unk9E;
               Sint16 unkA0;
               char padA2[0xE];
               Sint32 unkB0;
               Sint32 ahx_dec_samples;
               Sint32 ahx_dec_frames;
               Sint32 unkBC;
               Sint32 ac3_dec_samples;
               Sint32 ac3_dec_frames;
               Sint32 unkC8;
               ADX_UNK unkCC;
               Sint16 unkDC;
               Sint16 unkDE[2];
               char padE2[2];
               Sint32 unkE4;
               char padE8[8];
} ADXB_OBJ;
typedef ADXB_OBJ* ADXB;
void ADXB_SetAc3InSj(ADXB adxb, SJ sj);
void ADXB_SetAhxInSj(ADXB adxb, SJ sj);
Sint32 ADXB_DecodeHeaderAc3(ADXB, void*, Sint32);
void ADXB_SetAc3DecSmpl(ADXB adxb, Sint32 samples);
void ADXB_SetAhxDecSmpl(ADXB adxb, Sint32 samples);
Sint32 ADXB_DecodeHeaderAiff(ADXB, void*, Sint32);
Sint32 ADXB_DecodeHeaderAu(ADXB, void*, Sint32);
ADXB D_00158238(Sint32 arg0, void* arg1, Sint32 arg2, Sint32 arg3);
void D_00158808(ADXB adxb, void* (*get_wr)(void*, ptrdiff_t*, Sint32*, Sint32*), void* object);
Sint32 func_001586A0(ADXB adxb, void* header, Sint32 len);
Sint16 D_001588E8(ADXB adxb, Sint32 arg1);
void D_001589F8(ADXB adxb, Sint32 arg1, Sint32 arg2);
Sint32 ADXB_DecodeHeaderSpsd(ADXB, void*, Sint32);
Sint32 ADXB_DecodeHeaderWav(ADXB, void*, Sint32);
typedef struct {
    union {
        Uint16 magic;
        struct {
            Uint8 magic_0;
            Uint8 magic_1;
        };
    };
    union {
        Sint16 copyright_offset;
        struct {
            Uint8 copyright_offset_0;
            Uint8 copyright_offset_1;
        };
    };
    Uint8 encoding_type;
    Uint8 block_size;
    Uint8 sample_bitdepth;
    Uint8 channel_count;
    Uint8 sample_rate_0;
    Uint8 sample_rate_1;
    Uint8 sample_rate_2;
    Uint8 sample_rate_3;
    Uint8 total_samples_0;
    Uint8 total_samples_1;
    Uint8 total_samples_2;
    Uint8 total_samples_3;
    union {
        Uint16 high_pass_frequency;
        struct {
            Uint8 high_pass_frequency_0;
            Uint8 high_pass_frequency_1;
        };
    };
    Uint8 version;
    Uint8 flags;
    char pad14[4];
    Uint16 unk18;
    Uint16 unk1A;
    Uint16 unk1C;
    Uint16 unk1E;
} ADXHeader;
Sint32 ADX_DecodeInfo(ADXHeader* hdr, Sint32 arg1, Sint16* audio_offset, Sint8* encoding_type, Sint8* sample_bitdepth,
                      Sint8* block_size, Sint8* channel_count, Sint32* sample_rate, Sint32* total_samples,
                      Sint32* samples_per_block);
Sint32 ADX_DecodeInfoExADPCM2(ADXHeader* hdr, Sint32 arg1, Sint16* high_pass_frequency);
Sint32 ADX_DecodeInfoExVer(ADXHeader* hdr, Sint32 arg1, Sint8* version, Sint8* flags);
Sint32 ADX_DecodeInfoExIdly(ADXHeader* hdr, Sint32 arg1, Sint16* arg2, Sint16* arg3);
Sint32 ADX_DecodeInfoExLoop(Uint8* hdr, Sint32 arg1, Sint32* arg2, Sint16* arg3, Sint16* arg4, Sint32* arg5,
                            Sint32* arg6, Sint32* arg7, Sint32* arg8);
Sint32 ADX_DecodeInfoAinf(Uint8* hdr, Sint32 arg1, Sint32* arg2, ADX_UNK* arg3, Sint16* arg4, Sint16* arg5);
void ADX_GetCoefficient(Sint32 highpass_frequency, Sint32 sample_rate, Sint16* coef1_ptr, Sint16* coef2_ptr);
Sint32 ADX_DecodeFooter(Uint8*, Sint32, Sint16*);
void ADXERR_ItoA2(Sint32, Sint32, Sint8*, Sint32);
void ADXPD_SetCoef(ADXPD, Sint32, Sint16*);
void ADXPD_SetDly(ADXPD, Sint16*, Sint16*);
void ADXPD_SetExtPrm(ADXPD, Sint16, Sint16, Sint16);
Sint32 ADXPD_EntrySte(ADXPD, Sint32, Sint32, Sint32, Sint32);
extern int printf(const char* format, ...);
extern int vsprintf(char* buf, const char* fmt, ...);
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
extern void (*ahxsetextfunc)(Sint32, Sint16*);
Sint32 D_001588F8(ADXB adxb, Uint8 arg1, Uint8 arg2, Sint32 arg3, Sint16* arg4, Sint16* arg5, Sint16* arg6);
void SKG_GenerateKey(void*, Sint32, Sint16*, Sint16*, Sint16*);
void* D_001581E8(void* object, Sint32* arg1, Sint32* arg2, Sint32* arg3);
void D_00158218(void* object, Sint32 arg1, Sint32 arg2);
ADXB D_00158238(Sint32 arg0, void* arg1, Sint32 arg2, Sint32 arg3);
Sint32 D_001583B8(ADXB adxb, void* header, Sint32 len);
Sint32 func_001586A0(ADXB adxb, void* header, Sint32 len);
void D_00158808(ADXB adxb, void* (*get_wr)(void*, ptrdiff_t*, Sint32*, Sint32*), void* object);
Sint16 D_001588E8(ADXB adxb, Sint32 arg1);
void D_001589F8(ADXB adxb, Sint32 arg1, Sint32 arg2);
void func_00158B28(ADXB adxb, Sint32 arg1);
void memcpy2(void* dest, const void* src, Sint32 count);
void ADXB_CopyExtraBufSte(void* arg0, Sint32 arg1, Sint32 arg2, Sint32 arg3) {
    memcpy2(arg0, arg0 + (arg1 * 2), arg3);
    memcpy2(arg0 + (arg2 * 2), arg0 + ((arg2 + arg1) * 2), arg3);
}
/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_dcd5.c). */
typedef int int32_t;
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
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
int sceCdRead(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
typedef struct {
    char pad0[0x10];
} ADX_UNK;
typedef struct {
               void (*ExecServer)();
               void (*EntryErrFunc)();
               Sint32 (*GetFileSize)();
               void (*unkC)();
               void* (*Open)(Char8* device_name, void*, Sint32);
               void (*Close)(void* fd);
               Sint32 (*Seek)(void* fd, Sint32 offset, Sint32 whence);
               Sint32 (*Tell)(void* fd);
               Sint32 (*ReqRd)(void* fd, Sint32 len, void* buf);
               void (*unk24)();
               void (*StopTr)();
               Sint32 (*GetStat)(void* fd);
               void (*GetSctLen)();
               void (*unk34)();
               void (*GetNumTr)();
               void (*unk3C)();
               void (*IsExistFile)();
               void (*unk44)();
               void (*unk48)();
               void (*unk4C)();
               void (*unk50)();
               void (*unk54)();
               void (*unk58)();
               void (*unk5C)();
               Sint32 (*OptFn1)();
               void (*unk64)();
} CVFSDevice;
typedef struct {
    CVFSDevice* device;
    void* fd;
} CVFSHandle;
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
extern Sint32 D_00378080;
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
void* cvFsOpen(const Char8* fname, void* arg1, Sint32 arg2);
void cvFsSeek(CVFSHandle*, Sint32, Sint32);
Sint32 cvFsReqRd(CVFSHandle*, Sint32, void*);
void cvFsAddDev(const Char8* device_name, CVFSDevice* (*device_provider)(), Sint32 arg2);
void ADX_DecodeSte4(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int arg4, int arg5, short arg6, short arg7,
                    int arg8, short arg9, short arg10) {
    if (D_00378080 == 0) {
        func_0015B028(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    } else {
        func_0015AC60(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
}
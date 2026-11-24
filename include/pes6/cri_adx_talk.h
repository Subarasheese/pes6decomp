#ifndef PES6_CRI_ADX_TALK_H
#define PES6_CRI_ADX_TALK_H

/* CRI ADX stream-joint and talk handle layouts adapted from 3s-decomp. See THIRD_PARTY.md. */

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
    void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Sint32 ecode), void *obj);
} SJ_IF;
typedef void *ADXSTM;
typedef void *ADXSJD;
typedef void *ADXRNA;
typedef struct _adx_talk {
    Sint8 used;
    Sint8 stat;
    Sint8 pmode;
    Sint8 maxnch;
    ADXSJD sjd;
    ADXSTM stm;
    ADXRNA rna;
    SJ sjf;
    SJ sji;
    SJ sjo[2];
    Sint8 *ibuf;
    Sint32 ibuflen;
    Sint32 ibufxlen;
    Sint16 *obuf;
    Sint32 obufsize;
    Sint32 obufdist;
    Sint32 svrfreq;
    Sint16 maxsct;
    Sint16 minsct;
    Sint16 outvol;
    Sint16 outpan[2];
    Sint16 unk46;
    Sint32 maxdecsmpl;
    Sint32 lpcnt;
    Sint32 lp_skiplen;
    Sint32 trp;
    Sint32 wpos;
    Sint32 mofst;
    Sint16 ercode;
    Sint32 edecpos;
    Sint16 edeccnt;
    Sint16 eshrtcnt;
    Sint8 lpflg;
    Sint8 autorcvr;
    Sint8 fltmode;
    Sint8 execflag;
    Sint8 pstwait_flag;
    Sint8 pstready_flag;
    Sint8 pause_flag;
    void *amp;
    SJ ampsji[2];
    SJ ampsjo[2];
    Sint32 time_ofst;
    Sint32 lesct;
    Sint32 trpnsmpl;
    void *lsc;
    Sint8 lnkflg;
    Sint8 rsv;
    Sint16 rsv2;
    Uint32 tvofst;
    Uint32 svcnt;
    Uint32 decofst;
    Sint32 flush_nsmpl;
    Sint8 restartPending;
    Sint8 reservedAD[3];
    Char8 *filenameBuffer;
    Char8 *streamName;
    void *streamDirectory;
    Sint32 firstSector;
    Sint32 sectorCount;
    Sint32 fieldC4;
} ADX_TALK;
typedef ADX_TALK *ADXT;

#endif

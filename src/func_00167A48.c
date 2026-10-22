/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/adx_tlk_6388.c). */
/* Retail ADXT error callback and paused-sample discard at 0x004D6388–0x004D64CC. */
/* CRI ADXT (ADX talk: stream playback handle) internals shared by the adx_*.c units.
 * ADXT_OBJ is 0xC0 bytes (adxt_obj[16] = 0xC00); only the fields seen so far are named. */
#ifndef CRI_ADX_T_H
#define CRI_ADX_T_H

/* CRI Middleware common types (cri_xpt.h) as used by the ADX / Sofdec / GCCI libraries in the DOL
 * (ADX Oct 8 2004, Sofdec Sep 22 2004 builds, compiled with CodeWarrior 2.4.7). */
#ifndef CRI_XPT_H
#define CRI_XPT_H

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef unsigned long long Uint64;
typedef signed long long Sint64;
typedef float Float32;
typedef double Float64;
typedef char Char8;
typedef Sint32 Bool;

#ifndef NULL
#define NULL 0
#endif
#define TRUE 1
#define FALSE 0
#define OK 1
#define NG 0
#define ON 1
#define OFF 0

#endif
/* CRI Stream Joint (SJ) interface: a handle is a pointer to an object whose first word is its
 * interface table (layout from sj_mem's sjmem_vtbl). */
#ifndef CRI_SJ_H
#define CRI_SJ_H


typedef struct SJ_OBJ *SJ;

typedef struct {
	Uint8 *data;
	Sint32 len;
} SJCK;

typedef struct {
	Uint8 data[16];
} SJUUID;

/* chunk ids */
#define SJ_CK_FREE 0
#define SJ_CK_DATA 1

/* error codes passed to the error callback in place of the message */
#define SJ_ERR_PRM ((Char8 *)-3)

typedef struct {
	void *QueryInterface;                             /* 0x00 (unused) */
	void *AddRef;                                     /* 0x04 (unused) */
	void *Release;                                    /* 0x08 (unused) */
	void (*Destroy)(SJ sj);                           /* 0x0C */
	const SJUUID *(*GetUuid)(SJ sj);                  /* 0x10 */
	void (*Reset)(SJ sj);                             /* 0x14 */
	void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck); /* 0x18 */
	void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);   /* 0x1C */
	void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);     /* 0x20 */
	Sint32 (*GetNumData)(SJ sj, Sint32 id);           /* 0x24 */
	Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte); /* 0x28 */
	void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Char8 *msg), void *obj); /* 0x2C */
} SJ_IF;

struct SJ_OBJ {
	SJ_IF *vtbl;
};

#define SJ_Destroy(sj) (*(sj)->vtbl->Destroy)(sj)
#define SJ_GetUuid(sj) (*(sj)->vtbl->GetUuid)(sj)
#define SJ_Reset(sj) (*(sj)->vtbl->Reset)(sj)
#define SJ_GetChunk(sj, id, nbyte, ck) (*(sj)->vtbl->GetChunk)(sj, id, nbyte, ck)
#define SJ_UngetChunk(sj, id, ck) (*(sj)->vtbl->UngetChunk)(sj, id, ck)
#define SJ_PutChunk(sj, id, ck) (*(sj)->vtbl->PutChunk)(sj, id, ck)
#define SJ_GetNumData(sj, id) (*(sj)->vtbl->GetNumData)(sj, id)
#define SJ_IsGetChunk(sj, id, nbyte, rbyte) (*(sj)->vtbl->IsGetChunk)(sj, id, nbyte, rbyte)
#define SJ_EntryErrFunc(sj, func, obj) (*(sj)->vtbl->EntryErrFunc)(sj, func, obj)

SJ SJRBF_Create(void *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_Create(void *buf, Sint32 bsize);
void SJCRS_Lock(void);
void SJCRS_Unlock(void);
void SJERR_CallErr(Char8 *msg);
void *SJ_SearchTag(SJCK *inf, const Char8 *tag, const Char8 *name, SJCK *out);
void SJ_SplitChunk(SJCK *src, Sint32 n, SJCK *a, SJCK *b);

#endif

#define ADXT_MAX_OBJ 16
#define ADXT_MAX_NCH 8

/* ADXT_OBJ.stat (internal) */
#define ADXT_ISTAT_STOP 0
#define ADXT_ISTAT_DECINFO 1
#define ADXT_ISTAT_PREP 2
#define ADXT_ISTAT_PLAYING 3
#define ADXT_ISTAT_PLAYEND_WAIT 4
#define ADXT_ISTAT_PLAYEND 5
#define ADXT_ISTAT_ERROR 6

typedef struct {
	Sint8 used;           /* 0x00 */
	Sint8 stat;           /* 0x01 ADXT_ISTAT_* */
	Sint8 mode;           /* 0x02 input kind (0/1: file stream, 2: memory, 3: stream joint) */
	Sint8 maxnch;         /* 0x03 */
	void *sjd;            /* 0x04 ADXSJD decoder */
	void *stm;            /* 0x08 ADXSTM stream controller */
	void *rna;            /* 0x0C ADXRNA renderer (SFADXT_Create copies it into SFAOAP.x00) */
	SJ sjf;               /* 0x10 file stream joint */
	SJ sji;               /* 0x14 decoder input stream joint */
	SJ sjo[2];            /* 0x18 decoder output stream joints (one per channel) */
	Uint8 *ibuf;          /* 0x20 file stream ring buffer (ADXT_Create work layout) */
	Sint32 ibufsize;      /* 0x24 */
	Sint32 ibufxsize;     /* 0x28 */
	Uint8 *obuf;          /* 0x2C decoder output ring buffers */
	Sint32 obufsize;      /* 0x30 (samples) */
	Sint32 obufstride;    /* 0x34 (samples, including the extra area) */
	Sint32 svrfreq;       /* 0x38 server calls per second */
	Sint16 ibuf_nsct;     /* 0x3C input (file stream) buffer size in sectors */
	Sint16 reload_nsct;   /* 0x3E reload threshold in sectors (85% of the buffer) */
	Sint16 outvol;        /* 0x40 */
	Sint16 outpan[2];     /* 0x42 */
	Sint16 outbal;        /* 0x46 output balance (-15..15) */
	Sint32 maxdecsmpl;    /* 0x48 samples decoded per server call */
	Sint32 lpcnt;         /* 0x4C loops done */
	Sint32 lpendmod;      /* 0x50 loop end offset within its sector */
	Sint32 x54;
	Sint32 x58;
	Sint32 x5c;
	Sint16 errcode;       /* 0x60 */
	Sint16 x62;
	Sint32 x64;
	Sint16 x68;
	Sint16 x6a;
	Sint8 lpsw;           /* 0x6C loop switch */
	Sint8 autorcvr;       /* 0x6D automatic recovery switch */
	Sint8 x6e;
	Sint8 x6f;
	Sint8 pausesw;        /* 0x70 */
	Sint8 x71;
	Sint8 x72;            /* pause state (ADXT_Pause) */
	Sint8 x73;
	void *amp;            /* 0x74 ADXAMP */
	SJ sjx[2];            /* 0x78 extra stream joints destroyed with the handle */
	SJ sjy[2];            /* 0x80 */
	Sint32 timeofst;      /* 0x88 ADXT_SetTimeOfst */
	Sint32 lpendsct;      /* 0x8C loop end in sectors */
	Sint32 trapnsmpl;     /* 0x90 */
	void *lsc;            /* 0x94 load scheduler handle */
	Sint8 lnksw;          /* 0x98 link (concatenated file) switch */
	Uint8 pad99[0x9C - 0x99];
	Uint32 x9c;           /* 0x9C time position at the last (re)start in D_00384CA8 units */
	Sint32 startvsync;    /* 0xA0 D_0037ACA0 at start */
	Sint32 decsmpl;       /* 0xA4 samples decoded before the current (linked) file */
	/* P4: from 0xA8 this header was a field short. CRI's own layout, read
	 * out of the STABS `_adx_talk` record in the Resident Evil 4 PS2
	 * prototype (build/cri_stabs.py), is
	 *   0xA8 flush_nsmpl  0xAC stm_start_flg  0xAD ainf_sw  0xAE rsv4
	 *   0xB0 fname_wk     0xB4 fname  0xB8 dir  0xBC ofst  0xC0 nsct
	 * ending the handle at 0xC4. The local names are kept where the .c
	 * files already use them; CRI's own name follows in brackets. */
	Sint32 flush_nsmpl;   /* 0xA8 */
	Sint8 stmstart;       /* 0xAC start the stream when the decoder is ready [stm_start_flg] */
	Sint8 ainf_sw;        /* 0xAD */
	Sint16 rsv4;          /* 0xAE */
	Uint8 *wkend;         /* 0xB0 end of the file stream ring buffer [fname_wk] */
	void *stm_fname;      /* 0xB4 pending adxt_start_stm arguments [fname] */
	void *stm_dir;        /* 0xB8 [dir] */
	Sint32 stm_ofst;      /* 0xBC [ofst] */
	Sint32 stm_nsct;      /* 0xC0 [nsct] */
	/* The prototype's handle ends at 0xC4; Persona 4 strides adxt_obj by
	 * 0xC8 (`addiu $s1, $s1, 0xc8` in ADXT_SetOutputMono at 0x004D6B10),
	 * so 9.44 carries one more word here. */
	Uint8 padC4[0xC8 - 0xC4];
} ADXT_OBJ;

typedef ADXT_OBJ *ADXT;

extern ADXT_OBJ adxt_obj[ADXT_MAX_OBJ];
extern const Char8 adxt_build[];
extern Sint32 adxt_init_cnt;
extern Sint32 adxt_svr_main_id;
extern Sint32 adxt_output_mono_flag;
extern Sint32 adxt_svr_fs_id;
extern Sint32 adxt_vsync_svr_flag;
extern Sint32 D_0037ACA0;

void ADXT_Init(void);
void ADXT_Finish(void);
void ADXT_ExecServer(void);
void ADXT_ExecFsSvr(void);
void ADXT_DestroyAll(void);
void ADXT_SetDefSvrFreq(Sint32 freq);

#endif

extern void func_004c54d8(void);
extern void func_004c54e0(void);
extern void func_004c6a70(void (*func)(), void *obj);
extern Sint32 func_001615B0(void *rna, Sint32 nsmpl);
extern void func_00167190(void);
extern void func_00165E28(ADXT adxt, Sint32 *ncount, Sint32 *tscale);
extern Sint32 D_00384C5C;
extern Sint32 D_00384CA8;

Sint32 func_00167A48(ADXT adxt, Sint32 nsmpl);// FUN_004D6388
void func_004d6388(void (*func)(), void *obj);
// FUN_004D63A0
Sint32 func_004d63a0(ADXT adxt, Sint32 nsmpl);


// FUN_004D63E8
Sint32 func_00167A48(ADXT adxt, Sint32 nsmpl)
{
	Sint32 n;
	Sint32 mode;
	Sint32 ncount;
	Sint32 tscale;

	if (adxt->x72 == 0) {
		return 0;
	}

	n = func_001615B0(adxt->rna, nsmpl);
	func_00167190();
	mode = D_00384C5C;
	D_00384C5C = 0;
	func_00165E28(adxt, &ncount, &tscale);
	D_00384C5C = mode;
	adxt->x9c = (Uint32)(((Float32)ncount / (Float32)tscale) * (Float32)D_00384CA8);
	adxt->startvsync = D_0037ACA0;
	return n;
}

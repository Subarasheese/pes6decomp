/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/svm.c). */
extern char D_003CC6C8[]; /* "2103102:SVM:svm_unlock:lock type miss match.(type org=%d, type now=%d)" */
#define TARGET_PS2 1
#define DEBUG 1
#define XPT_TGT_EE 1
/* Copy of 3s-decomp include/common.h for scanning: assembly placeholders removed. */
#ifndef COMMON_H
#define COMMON_H

#ifndef TYPES_H
#define TYPES_H

#if defined(TARGET_PS2)

typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned int size_t;

typedef char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef float f32;
typedef double f64;

typedef s32 intptr_t;
typedef u32 uintptr_t;
typedef s32 ptrdiff_t;

// Old code insists on treating strlen's return type as a signed integer
typedef s32 strlen_t;

typedef s32 ssize_t;

#else

#ifndef _STDDEF_H
#define _STDDEF_H

#endif
#include <stdint.h>
#include <sys/types.h>

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

typedef size_t strlen_t;

// SCE types

typedef uint8_t u_char;
typedef uint16_t u_short;
typedef uint32_t u_int;
typedef uint64_t u_long;

#endif

#endif

#define NULL 0
#define REINTERPRET_AS_U32(_num) (*(u32*)&(_num))
#define BOOL(_expr) ((_expr) ? 1 : 0)
#define SPR 0x70000000

#define S32_MAX 0x7FFFFFFF
#define S32_INCREMENT_WRAPAROUND(val) (((val) != S32_MAX) ? ((val) + 1) : 0)

#define ALIGN_UP(x, a) (((x) + ((a) - 1)) & ~((a) - 1))

// Compilation with GNU C Compilier means we are compiling CRI
#if defined(__GNUC__) && !defined(M2CTX)





#else


#endif

#if defined(M2CTX)

#define ATTR_ALIGNED(value)

#else

#define ATTR_ALIGNED(value) __attribute__((aligned(value)))

#endif

#if !defined(TARGET_PS2)

#ifndef __dead2
#define __dead2 __attribute__((__noreturn__))
#endif

void fatal_error(const s8* fmt, ...) __dead2;
void not_implemented(const s8* func) __dead2;
void debug_print(const char* fmt, ...);

#endif

#define LO_16_BITS(val) (val & 0xFFFF)
#define HI_16_BITS(val) ((val & 0xFFFF0000) >> 16)

#endif

/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2001 CRI-MW
 *
 * Library : CRI Middleware Library
 * Module  : Library User's Header for PlayStation2(PS2)
 * File    : cri_mw.h
 * Date    : 2002-02-28
 *
 ****************************************************************************/
#ifndef _CRI_MW_H_
#define _CRI_MW_H_

/***************************************************************************
 *      Include file
 ***************************************************************************/
/*****************************************************************************
 *
 *  �V�X�e�����́F�b�q�h �\�t�g�E�F�A���C�u����
 *
 *	Copyright(c) 1998, 2001  CRI
 *
 * �t�@�C�����F	cri_xpt.h
 *
 * ���W���[�����́F	�b�q�h���ʊ�{�w�b�_�t�@�C��
 *
 * �ړI�F�@
 *		�@CRI �S�̂ŋ��ʂɎg�p���ׂ��錾�A��`�t�@�C���Ƃ��ċL�q����B
 *		����ɂ��\�t�g�E�F�A�̐��Y��(�ė��p�A�ێ琫�A�ڐA���A�ǐ�)��
 *		���コ����B
 *
 * �K�p�͈́F�@
 *		�@�v���O���~���O�S�ʁi���C�u�����J���ҁA���C�u�����g�p�҂̗������g
 *		�p�ł���j
 *
 * �O������F
 *		�@�����Ő錾�A��`���Ă��鎯�ʎq�Ɠ����Ӗ��̐錾�A��`�𑼃t�@�C��
 *		�ł��Ă͂����Ȃ��B
 *
 * ���@�t	 �F 2001-09-18
 * �o�[�W�����F Ver. 1.06
 * �����	 �F Hosaka Shun, Ryutaro Hayakawa
 *
 *****************************************************************************/
/*****************************************************************************
 * ���@��: 
 *	1998-06-18   Ver. 1.00  Hayakawa Ryutaro
 *	�@�EDreamcast PC �p�ɍ쐬
 *	1999-10-14	Ver. 1.03  Hayakawa Ryutaro	
 *�@�@�E�W���ψ���ɂ��ӌ��𔽉f
 *�@2000-10-30  Ver. 1.04  Hosaka Shun
 *�@�@�EPS2�p�ɏC��
 *�@2001-03-28  Ver. 1.05  Hosaka Shun
 *�@�@�E�}���`�v���b�g�t�H�[���Ή�(���̂�cri_xpts.h)
 *�@2001-05-18  Ver. 1.05a  Hosaka Shun
 *�@�@�E�G���f�B�A���̃}�N����ǉ�(EE�ł́A���g���G���f�B�A��)
 *�@2001-09-18  Ver. 1.06  Ryutaro Hayakawa
 *�@�@�E__EE__ ���A�Q�d��`���Ȃ��悤�ɑ΍􂵂��B
 *****************************************************************************/
#ifndef CRI_XPT_H
#define CRI_XPT_H

#ifndef	__EE__
#define	__EE__
#endif

#define	XPT_TGT_EE			//	�^�[�Q�b�g�@�FEmotionEngine
#define XPT_CCS_LEND		//	�G���f�B�A���F���g���G���f�B�A��

/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 1998-2002 CRI-MW
 *
 * Library  : CRI Middleware Library
 * Module   : CRI Common Header
 * File     : cri_xpts.h
 * Date     : 2002-09-18
 * Version  : 1.10
 *
 ****************************************************************************/
#ifndef CRI_XPTS_H
#define CRI_XPTS_H

#ifndef SEGA_XPT_H

/*****************************************************************************
 * 定数マクロ
 *****************************************************************************/

/* NULL ポインタ型 */
#ifndef NULL
#ifdef __cplusplus
#define NULL	(0)
#else
#define NULL	((void *)0)
#endif
#endif

/* 論理定数１（偽、真） */
#ifndef FALSE
#define FALSE	(0)
#endif
#ifndef TRUE
#define TRUE	(1)
#endif

/* 論理定数２（スイッチ） */
#ifndef OFF
#define OFF		(0)
#endif
#ifndef ON
#define ON		(1)
#endif
                                                                                                        
/* 結果判定の定数（成功、失敗） */
#ifndef OK
#define OK		(0)			/* 成功 */
#endif
#ifndef NG
#define NG		(-1)		/* 失敗 */
#endif

/*****************************************************************************
 * 基本データ型宣言
 *****************************************************************************/

/*****************************************************************************
 * Uint8 Sint8 Uint16 Sint16 に関しては共通
 *****************************************************************************/

#ifndef _TYPEDEF_Uint8
#define _TYPEDEF_Uint8
typedef unsigned char			Uint8;		/* 符号なし１バイト整数 */
#endif

#ifndef _TYPEDEF_Sint8
#define _TYPEDEF_Sint8
typedef /* signed */ char				Sint8;		/* 符号つき１バイト整数 */
#endif

#ifndef _TYPEDEF_Uint16
#define _TYPEDEF_Uint16
typedef unsigned short			Uint16;		/* 符号なし２バイト整数 */
#endif

#ifndef _TYPEDEF_Sint16
#define _TYPEDEF_Sint16
typedef signed short			Sint16;		/* 符号つき２バイト整数 */
#endif

/*****************************************************************************
 * Uint32 Sint32 Uint64 Sint64 Uint128 Sint128 に関しては個々に設定
 *****************************************************************************/

#ifdef XPT_TGT_EE

#ifndef _TYPEDEF_Uint32
#define _TYPEDEF_Uint32
typedef unsigned int			Uint32;		/* 符号なし４バイト整数 */
#endif

#ifndef _TYPEDEF_Sint32
#define _TYPEDEF_Sint32
typedef signed int				Sint32;		/* 符号つき４バイト整数 */
#endif

#ifndef _TYPEDEF_Uint64
#define _TYPEDEF_Uint64
typedef unsigned long			Uint64;		/* 符号なし８バイト整数 */
#endif

#ifndef _TYPEDEF_Sint64
#define _TYPEDEF_Sint64
typedef signed long				Sint64;		/* 符号つき８バイト整数 */
#endif

// #ifndef _TYPEDEF_Uint128
// #define _TYPEDEF_Uint128					/* 符号なし16バイト整数 */
// typedef unsigned int			Uint128 __attribute__ ((mode (TI)));
// #endif

// #ifndef _TYPEDEF_Sint128
// #define _TYPEDEF_Sint128					/* 符号つき16バイト整数 */
// typedef int						Sint128 __attribute__ ((mode (TI)));
// #endif

#endif	/* endif XPT_TGT_EE */

#ifdef XPT_TGT_GC

#ifndef _TYPEDEF_Uint64
#define _TYPEDEF_Uint64
typedef unsigned long long		Uint64;		/* 符号なし８バイト整数 */
#endif

#ifndef _TYPEDEF_Sint64
#define _TYPEDEF_Sint64
typedef signed long long		Sint64;		/* 符号つき８バイト整数 */
#endif

#ifndef _TYPEDEF_Uint128
#define _TYPEDEF_Uint128
typedef struct {							/* 符号なし16バイト整数 */
	Uint64	h;								/* 上位64ビット */
	Uint64	l;								/* 下位64ビット */
} Uint128;
#endif

#ifndef _TYPEDEF_Sint128
#define _TYPEDEF_Sint128
typedef struct {							/* 符号つき16バイト整数 */
	Uint64	h;								/* 上位64ビット */
	Uint64	l;								/* 下位64ビット */
} Sint128;
#endif

#endif	/* endif XPT_TGT_GC */

#if defined(XPT_TGT_XB) || defined(XPT_TGT_PC)

#ifndef _TYPEDEF_Uint64
#define _TYPEDEF_Uint64
typedef unsigned __int64		Uint64;		/* 符号なし８バイト整数 */
#endif

#ifndef _TYPEDEF_Sint64
#define _TYPEDEF_Sint64
typedef signed __int64			Sint64;		/* 符号つき８バイト整数 */
#endif

#ifndef _TYPEDEF_Uint128
#define _TYPEDEF_Uint128
typedef struct {							/* 符号なし16バイト整数 */
	Uint64	h;								/* 上位64ビット */
	Uint64	l;								/* 下位64ビット */
} Uint128;
#endif

#ifndef _TYPEDEF_Sint128
#define _TYPEDEF_Sint128
typedef struct {							/* 符号つき16バイト整数 */
	Sint64	h;								/* 上位64ビット */
	Uint64	l;								/* 下位64ビット */
} Sint128;
#endif

#endif	/* endif XPT_TGT_XB, XPT_TGT_PC */

#ifdef XPT_TGT_IOP

#ifndef _TYPEDEF_Uint32
#define _TYPEDEF_Uint32
typedef unsigned int			Uint32;		/* 符号なし４バイト整数 */
#endif

#ifndef _TYPEDEF_Sint32
#define _TYPEDEF_Sint32
typedef signed int				Sint32;		/* 符号つき４バイト整数 */
#endif

#endif	/* endif XPT_TGT_IOP */

#if	1	/* 他すべてのターゲット */

#ifndef _TYPEDEF_Uint32
#define _TYPEDEF_Uint32
typedef unsigned int			Uint32;		/* 符号なし４バイト整数 */
#endif

#ifndef _TYPEDEF_Sint32
#define _TYPEDEF_Sint32
typedef signed int				Sint32;		/* 符号つき４バイト整数 */
#endif

#endif /* endif 他すべてのターゲット */

/*****************************************************************************
 * Float16 Float32 に関してはほぼ共通（PowerPlant使用時のみ例外）
 *****************************************************************************/

#ifndef _TYPEDEF_Float16
#define _TYPEDEF_Float16
typedef signed short			Float16;	/* ２バイト実数 */
#endif

/* Mac環境でPowerPlant使用時はFloat32とFloat64がMacTypes.hで定義済み */
#ifndef __MACTYPES__

#ifndef _TYPEDEF_Float32
#define _TYPEDEF_Float32
typedef float					Float32;	/* ４バイト実数 */
#endif

#ifndef _TYPEDEF_Float64
#define _TYPEDEF_Float64
typedef double					Float64;	/* ８バイト実数 */
#endif

#endif	/* endif __MACTYPES__ */

/*****************************************************************************
 * Fixed32 Bool Char8 に関しては共通
 *****************************************************************************/

#ifndef _TYPEDEF_Fixed32
#define _TYPEDEF_Fixed32
typedef signed long				Fixed32;	/* 固定小数点32ビット */
#endif

#ifndef _TYPEDEF_Bool
#define _TYPEDEF_Bool
typedef Sint32					Bool;		/* 論理型（論理定数を値にとる） */
#endif

#ifndef _TYPEDEF_Char8
#define _TYPEDEF_Char8
typedef char					Char8;		/* 文字型 */
#endif


#endif
#endif	/* CRI_XPTS_H */

/* end of file */

#endif  /* CRI_XPT_H */
/* End Of File */
#ifndef _SJ_H_INCLUDED
#define _SJ_H_INCLUDED
/****************************************************************************/
/*																			*/
/*					ストリームジョイントライブラリヘッダ					*/
/*						 SJ (Stream Joint) Library							*/
/*																			*/
/*				 1998.4.14			written by M.Oshimi						*/
/*																			*/
/****************************************************************************/

#define	SJ_VER	"6.10"		/* Version number */


/***********************************************************************
 *		処理マクロ
 *		Process MACRO
 ***********************************************************************/

/* 整数アドレスのポインタ型への変換 */
#define SJ_VOID_PTR(adr)	((void *)(adr))

/* 下位nビットをゼロにする
 * 　1,2,8,16ビットの場合、SHは、目的のレジスタだけ使用して2命令で処理
 * できるので、シフト処理にする。
 * 　3～7ビットの場合、SHは、-128までは命令コードにイミディエイトデータ
 * を格納できるので、マスク処理にする。1命令または2命令。
 * 　その他の場合、状況に応じて最適とは限らないが、シフト処理にしておく。
 */
#define SJ_OFF_LSB(val, n)	((((Uint32)(val)) >> (n)) << (n))
#define SJ_OFF_LSB1(val)	((((Uint32)(val)) >> (1)) << (1))
#define SJ_OFF_LSB2(val)	((((Uint32)(val)) >> (2)) << (2))
#define SJ_OFF_LSB3(val)	(((Uint32)(val)) & (0xfffffff8))
#define SJ_OFF_LSB4(val)	(((Uint32)(val)) & (0xfffffff0))
#define SJ_OFF_LSB5(val)	(((Uint32)(val)) & (0xffffffe0))
#define SJ_OFF_LSB6(val)	(((Uint32)(val)) & (0xffffffc0))
#define SJ_OFF_LSB7(val)	(((Uint32)(val)) & (0xffffff80))
#define SJ_OFF_LSB8(val)	((((Uint32)(val)) >> (8)) << (8))
#define SJ_OFF_LSB16(val)	((((Uint32)(val)) >> (16)) << (16))

/* ポインタを2,4,8,16,32byte境界まで戻す（注意：結果は(void*)型） */
#define SJ_BACK_BND2(ptr)	SJ_VOID_PTR(SJ_OFF_LSB1(ptr))
#define SJ_BACK_BND4(ptr)	SJ_VOID_PTR(SJ_OFF_LSB2(ptr))
#define SJ_BACK_BND8(ptr)	SJ_VOID_PTR(SJ_OFF_LSB3(ptr))
#define SJ_BACK_BND16(ptr)	SJ_VOID_PTR(SJ_OFF_LSB4(ptr))
#define SJ_BACK_BND32(ptr)	SJ_VOID_PTR(SJ_OFF_LSB5(ptr))

/* ポインタを2,4,8,16,32byte境界まで進める（注意：結果は(void*)型） */
#define SJ_FORE_BND2(ptr)	SJ_BACK_BND2( ((Uint32)(ptr)) +  1)
#define SJ_FORE_BND4(ptr)	SJ_BACK_BND4( ((Uint32)(ptr)) +  3)
#define SJ_FORE_BND8(ptr)	SJ_BACK_BND8( ((Uint32)(ptr)) +  7)
#define SJ_FORE_BND16(ptr)	SJ_BACK_BND16(((Uint32)(ptr)) + 15)
#define SJ_FORE_BND32(ptr)	SJ_BACK_BND32(((Uint32)(ptr)) + 31)

/* 32byte境界の領域確保のために、領域サイズを水増しする */
#define SJ_SIZ_BND32(siz)	((siz) + 32)

/* SJバッファアドレスの32バイト境界の取得 */
#define	SJ_ADR_BND32(adr)	SJ_FORE_BND32(adr)

/* 境界内の先端と個数から終端を求める */
#define SJ_GET_ENDPOS(bgn, num)		((bgn) + (num) - 1)

/* 境界内の個数（境界値：bgn <= end） */
#define SJ_INNER_NUM(bgn, end)		((end) - (bgn) + 1)

/* 境界内の判定（境界値：bgn <= x <= end） */
#define SJ_IS_INNER(x, bgn, end) ( ((x) >= (bgn)) && ((x) <= (end)) )

/***********************************************************************
 *		データ型
 *		Data type declaration
 ***********************************************************************/

/*	データラインの定義		*/
/*	Data line definition	*/
#define	SJ_LIN_FREE	(0)			/*	フリーチャンクライン				*/
								/*	Free chunk line						*/
#define	SJ_LIN_DATA	(1)			/*	データチャンクライン				*/
								/*	Data chunk line						*/

#define SJ_ERR_FATAL		(-1)
#define SJ_ERR_INTERNAL		(-2)
#define SJ_ERR_PRM			(-3)

/*	チャンクの上限サイズ	*/
/*	Maximum size of chunk	*/
#define	SJCK_LEN_MAX		(0x7fffffff)

#ifndef UUID_DEFINED
#define UUID_DEFINED
typedef struct _UUID {
    Uint32 Data1;
    Uint16 Data2;
    Uint16 Data3;
    Uint8 Data4[8];
} UUID;
#define uuid_t UUID
#endif

/*	データチャンク	*/
/*	Data chunk		*/
#ifndef SJCK_DEFINED
#define SJCK_DEFINED
typedef struct {
	Sint8 *data;				/*	開始アドレス						*/
								/*	Begin address						*/
	Sint32 len;					/*	バイト数							*/
								/*	Size of chunk length				*/
} SJCK;
#endif

/*	ライブラリハンドル	*/
/*	SJ handle			*/
typedef struct {
	struct _sj_vtbl *vtbl;		/*	インタフェース						*/
								/*	Interfaces							*/
} SJ_OBJ;
#ifndef SJ_DEFINED
#define SJ_DEFINED
typedef SJ_OBJ *SJ;
#endif

/*	インタフェース関数  				*/
/*	Interface functions					*/
typedef struct _sj_vtbl {
	void (*QueryInterface)();		/*		for COM compatibility			*/
	void (*AddRef)();				/*		for COM compatibility			*/
	void (*Release)();				/*		for COM compatibility			*/
	void (*Destroy)(SJ sj);			/*		ハンドルの消去					*/
									/*		Destroys specified SJ handle	*/
	UUID *(*GetUuid)(SJ sj);		/*		UUIDの取得						*/
									/*		Get a UUID						*/
	void (*Reset)(SJ sj);			/*		リセット						*/
									/*		Resets SJ						*/
	/*	チャンクの取得	(FIFOの先頭から取得)								*/
	/*	Get a chunk	(Get chunk from top of FIFO)							*/
	void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
	/*	チャンクを戻す　(FIFOの先頭に挿入)									*/
	/*	Unget a chunk	(Insert chunk in top of FIFO)						*/
	void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);
	/*	チャンクを挿入	(FIFOの最後に挿入)									*/
	/*	Put a chunk	(Insert chunk in last of FIFO)							*/
	void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);
	/*	取得できるデータのバイト数の取得									*/
	/*	Get the data number which can be got								*/
	Sint32 (*GetNumData)(SJ sj, Sint32 id);
	/*	チャンクの取得可能の判定											*/
	/*	Check whether can get chunk											*/
	Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
	/*	エラー発生時に起動する関数の登録									*/
	/*	Entry error callback function										*/
	void (*EntryErrFunc)(SJ sj,
					void (*func)(void *obj, Sint32 ecode), void *obj);
} SJ_IF;
typedef SJ_IF *SJIF;

/*	ストリームジョイントの消去												*/
/*	Destroys specified SJ handle											*/
#define SJ_Destroy(sj) \
		(*(sj)->vtbl->Destroy)(sj)
/*	ストリームジョイントのリセット											*/
/*	Resets SJ																*/
#define SJ_Reset(sj) \
		(*(sj)->vtbl->Reset)(sj)
/*	チャンクの取得															*/
/*	Get a chunk																*/
#define SJ_GetChunk(sj, id, nbyte, ck) \
		(*(sj)->vtbl->GetChunk)(sj, id, nbyte, ck)
/*	チャンクを戻す															*/
/*	Unget a chunk 															*/
#define SJ_UngetChunk(sj, id, ck) \
		(*(sj)->vtbl->UngetChunk)(sj, id, ck)
/*	チャンクを挿入															*/
/*	Put a chunk																*/
#define SJ_PutChunk(sj, id, ck) \
		(*(sj)->vtbl->PutChunk)(sj, id, ck)
/*	取得可能なデータのバイト数を求める										*/
/*	Get the data number which can be got									*/
#define SJ_GetNumData(sj, id) \
		(*(sj)->vtbl->GetNumData)(sj, id)
/*	ストリームジョイントUUIDの取得 (UUIDへのアドレス)						*/
/*	Get a UUID																*/
#define SJ_GetUuid(sj) \
		(*(sj)->vtbl->GetUuid)(sj)
/*	エラー発生時に起動するコールバック関数の登録							*/
/*	Entry error callback function											*/
#define SJ_EntryErrFunc(sj, f, o) \
		(*(sj)->vtbl->EntryErrFunc)(sj, f, o)
/*	チャンクの取得可能の判定 												*/
/*	Check whether can get chunk												*/
#define SJ_IsGetChunk(sj, id, nbyte, rbyte) \
			(*(sj)->vtbl->IsGetChunk)(sj, id, nbyte, rbyte)

/****************************************************************************
 *		関数の宣言
 *		Function Declaration
 ****************************************************************************/

#ifdef		__cplusplus
extern	"C" {
#endif

/*	$func$ チャンクの分解
 * [書　式] void SJ_SplitChunk(SJCK *ck, Sint32 nbyte,
 *													SJCK *ck1, SJCK *ck2);
 * [入　力] ck		: 分解対象となるチャンク
 *			nbyte	: ck1 のバイト数
 * [出　力] ck1		: 分解された前半のチャンク
 *			ck2		: 分解された後半のチャンク
 * [関数値] ck2	チャンクのバイト数
 * [機　能] ckチャンクをck1チャンクとck2チャンクに分解する。
 *			ck1チャンクは、nbyte の長さになる。
 *			ck1チャンクの大きさが、nbyte に満たない場合は、分解されず、
 *			ck2チャンクの長さは、0となる。
 *			ck1とckは、同じものを指定しても良い。
 *			単に分解する場合は、以下のように記述する。
 *				SJ_SplitChunk(&ck, 100, &ck, &ck2);
 *  
 * [Inputs  ] ck	: Target chunk
 *			  nbyte	: Size of ck1(byte)
 * [Outputs ] ck1	: Split chunk of the first half
 *			  ck2	: Split chunk of the latter half
 * [Return  ] None
 * [Function] Split a chunk.
 */
void SJ_SplitChunk(SJCK *ck, Sint32 nbyte, SJCK *ck1, SJCK *ck2);

/***
*		タグ操作関数
*			タグフォーマット
*				0-6		タグ文字列
*				7		0(=\0)
*				8-14	データ長 (１６進文字列)
*				15		0(=\0)
***/

/*	$func$ タグの生成
 * [書　式] void SJ_MakeTag(SJCK *ck, char *tag);
 * [入　力] ck		: タグを生成するチャンク
 *			tag		: タグ文字列
 * [出　力] なし
 * [関数値] なし
 * [機　能] ckチャンク内にタグを生成する。タグの持つ長さはck.len-16バイトとなる。
 * [Inputs  ] ck	: Target chunk
 *			  tag	: TAG strings
 * [Outputs ] none
 * [Return  ] None
 * [Function] Creating tag.
 */
void SJ_MakeTag(SJCK *ck, char *tag);

/*	$func$ タグの内容の取得
 * [書　式] void SJ_GetTagContent(Sint8 *tag, SJCK *cko);
 * [入　力] tag		: タグ文字列
 * [出　力] ck		: タグの内容となるチャンク
 * [関数値] なし
 * [機　能] タグからその内容を示すチャンクを取得する。
 * [Inputs  ] tag	: TAG strings
 * [Outputs ] ck	: chunk
 * [Return  ] None
 * [Function] Creating chunk from TAG.
 */
void SJ_GetTagContent(Sint8 *tag, SJCK *cko);

/*	$func$ タグの検索
 * [書　式] Sint8 *SJ_SearchTag(SJCK *cki, Char8 *kw, Char8 *endkw, SJCK *cko);
 * [入　力] cki		: 検索対象となるチャンク
 *			kw		: 目的とするタグのキーワード
 *			endkw	: このキーワードを持つタグを見つけたときは検索を中断する。
 *					  NULLが指定されたときは、検索を中断しない。
 * [出　力] ck		: タグの内容となるチャンク。
 *					  見つからなかったときは、cko->data=NULL, cko->len=0となる。
 * [関数値] 見つかったタグのアドレス。見つからなかったときはNULLが返る。
 * [機　能] タグからその内容を示すチャンクを取得する。
 * [Inputs  ] cki	: chunk for searching
 *			　kw	: Keyword of tag
 *			  endkw : Serach end keyword
 * [Outputs ] cko	: target chunk
 * [Return  ] tag
 * [Function] Searching chunk.
 */
Sint8 *SJ_SearchTag(SJCK *cki, Char8 *kw, Char8 *endkw, SJCK *cko);


/***
*		リングバッファタイプのストリームジョイント
*		Stream joint of Ring buffer types
***/

/*	初期化																	*/
/*	Initialize																*/
void SJRBF_Init(void);
/*	終了処理																*/
/*	Finish																	*/
void SJRBF_Finish(void);
/*	リングバッファの生成													*/
/*	Create a Ring buffer													*/
SJ SJRBF_Create(Sint8 *buf, Sint32 bsize, Sint32 xsize);

/***
*		メモリタイプのストリームジョイント
*		Stream joint of Memory buffer types
***/

/*	初期化																	*/
/*	Initialize																*/
void SJMEM_Init(void);
/*	終了処理																*/
/*	Finish																	*/
void SJMEM_Finish(void);
/*	メモリストリームの生成													*/
/*	Create a Memory buffer													*/
SJ SJMEM_Create(Sint8 *data, Sint32 bsize);

/***
*		汎用ストリームジョイント
*		General Stream joint		
***/

/*	チャンクの結合モード		*/
/*	Combination mode of chunk	*/
#define	SJUNI_MODE_SEPA			(0)
#define	SJUNI_MODE_JOIN			(1)

#define	SJUNI_CALC_WORK(nck)	((nck)*16)

/*	初期化																	*/
/*	Initialize																*/
void SJUNI_Init(void);
/*	終了処理																*/
/*	Finish																	*/
void SJUNI_Finish(void);
/*	汎用ストリームジョイントの生成											*/
/*	Create a Stream joint													*/
SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);
/*	チャンク数の取得														*/
/*	Get chunk number														*/
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
/*	チェインプール数の取得													*/
/*	Get Chain pool	number													*/
Sint32 SJUNI_GetNumChainPool(SJ sj);

#if 0
/*	GetChunk関数が呼ばれたときのコールバック関数の登録						*/
void SJUNI_EntryGetFunc(SJ sj, Sint32 id, void (*f)(void *o, SJCK *ck), void *o);
/*	PutChunk関数が呼ばれたときのコールバック関数の登録						*/
void SJUNI_EntryPutFunc(SJ sj, Sint32 id, void (*f)(void *o, SJCK *ck), void *o);
/*	UngetChunk関数が呼ばれたときのコールバック関数の登録					*/
void SJUNI_EntryUngetFunc(SJ sj, Sint32 id, void (*f)(void *o, SJCK *ck), void *o);
#endif

/***
*		共通関数
***/

/*	クリティカルセクションへの進入	*/
void SJCRS_Lock(void);
/*	クリティカルセクションからの脱出	*/
void SJCRS_Unlock(void);

#ifdef		__cplusplus
}
#endif

#endif     /*  #ifndef _SJ_H_INCLUDED	*/


#ifndef	_ADXT_H_INCLUDED
#define	_ADXT_H_INCLUDED
/****************************************************************************/
/*																			*/
/*			$title$ ＡＤＸデータ再生 ライブラリ								*/
/*					ADXT (ADX TALK) Library									*/
/*																			*/
/*				1997.2.25		written M.Oshimi							*/
/*																			*/
/****************************************************************************/

/*	Version number of ADXT library 		*/
#define	ADXT_VER	"8.34"


/*	ストリームコントローラ				*/
/*	Stream Controller					*/
#ifndef ADXSTM_DEFINED
#define ADXSTM_DEFINED
typedef	void	*ADXSTM;
#endif

/*	ストリームジョイントデコーダ		*/
/*	Stream Joint decoder				*/
#ifndef ADXSJD_DEFINED
#define ADXSJD_DEFINED
typedef void	*ADXSJD;
#endif

/*	オーディオレンダラ					*/
/*	Audio Renderer						*/
#ifndef ADXRNA_DEFINED
#define ADXRNA_DEFINED
typedef void	*ADXRNA;
#endif

#ifndef TRUE
#define TRUE	1
#endif
#ifndef FALSE
#define FALSE	0
#endif

/****************************************************************************/
/*		定数マクロ															*/
/*		MACRO CONSTANT														*/
/****************************************************************************/

/*	最大同時発音数						*/
/*	Maximum number of ADXT handle		*/
//	2001.09.14	S.Hosaka
//	バンドル数を8->16
//#define	ADXT_MAX_OBJ		(8)
#define	ADXT_MAX_OBJ		(16)

/*	最大データサイズ					*/
/*	Maximum data size					*/
#define	ADXT_MAX_DATASIZE	(0x40000000)

/*	入力バッファのエキストラ領域の大きさ	*/
/*	Size of Extra area in input buffer		*/
#define ADXT_IBUF_XLEN (36)

/*	ADX Talk の出力バッファの大きさ　（サンプル単位）	*/
/*	Output buffer size of ADX Talk (unit:sample)		*/
#define	ADXT_OBUF_SIZE	(0x2000)
#define DECODE_AHX
#ifdef DECODE_AHX
#define	ADXT_OBUF_DIST	(0x2060)
#else
#define	ADXT_OBUF_DIST	(0x2020)
#endif

/*	最大サンプリング周波数				*/
/*	Maximum sampling frequency			*/
#define	ADXT_MAX_SFREQ	(48000)

/*	ADX Talkの再生方式	(ADXT_CALC_WORKマクロで使用)		*/
/*	Play method of ADX Talk (used 'ADXT_CALC_WORK' macro)	*/
#define ADXT_PLY_MEM	(0)			/*	メモリからの再生					*/
									/*	Play memory data					*/
#define ADXT_PLY_STM	(1)			/*	CDからのストリーム再生				*/
									/*	Stream play from CD-ROM				*/

#define ADXT_CALC_IBUFSIZE0(nch, sfreq)	(25000*(nch)*((sfreq)/1000)/44)

#define ADXT_CALC_IBUFSIZE(nch, nstm, sfreq)	\
	((ADXT_CALC_IBUFSIZE0(nch, sfreq)*((nstm)+1)+2048)/2048*2048+ADXT_IBUF_XLEN)

#ifdef XPT_TGT_GC
#define	ADXT_RNABUF_SIZE	(0x1000)
#define ADXT_CALC_OBUFSIZE(nch)	\
	( (ADXT_OBUF_DIST+ADXT_RNABUF_SIZE)*(nch)*sizeof(Sint16))
#else
#define ADXT_CALC_OBUFSIZE(nch)	\
	( ADXT_OBUF_DIST*(nch)*sizeof(Sint16))
#endif

#define ADXT_CALC_WORK(nch, stmflg, nstm, sfreq)	\
	(ADXT_CALC_IBUFSIZE(nch, nstm, sfreq)*(stmflg) + ADXT_CALC_OBUFSIZE(nch) + 64)

/*	データ容量の計算		*/
/*	Calc ADX Data size		*/
#define	ADXT_CalcDataLen(sec, nch, sfreq)	((sec)*(nch)*(sfreq)*18/32 + 256)

/* AHXワーク領域サイズ		*/
/* Work size of AHX 		*/
#define ADXT_WORKSIZE_AHX	(12288)		/* 12KB */

/*	入力バッファへの読み込み量						*/
/*	Number of sectors to read into the input buffer	*/
#define ADXT_MAX_CDBSCT		(75)
#define ADXT_MIN_CDBSCT		(65)
#define ADXT_PREP_RDSCT		(25)

/*	$define$ ADX Talkの動作状態(ADXT_STAT_～)	*/
/*	Status of ADX Talk							*/
#define	ADXT_STAT_STOP		(0)		/*	停止中 								*/
									/*	During standstill					*/
#define ADXT_STAT_DECINFO	(1)		/*	ＡＤＸ のヘッダ情報取得中			*/
									/*	Getting header information			*/
#define ADXT_STAT_PREP		(2)		/*	再生準備中 							*/
									/*	During play preparation				*/
#define ADXT_STAT_PLAYING	(3)		/*	デコード＆再生中 					*/
									/*	During decode and play				*/
#define ADXT_STAT_DECEND	(4)		/*	デコード終了 						*/
									/*	Decode end							*/
#define ADXT_STAT_PLAYEND	(5)		/*	再生終了 							*/
									/*	Play end							*/
#define ADXT_STAT_ERROR		(6)		/*	読み込みエラー発生					*/
									/*	Read-in error outbreak state		*/

/*	$define$ ADX Talkのエラーコード　(ADXT_ERR_～)	*/
/*	Error code of ADX Talk							*/
#define	ADXT_ERR_OK			(0)		/*	正常 								*/
									/*	Normality							*/
#define ADXT_ERR_SHRTBUF	(-1)	/*	入力バッファエンプティ				*/
									/*	The input buffer is empty			*/
#define ADXT_ERR_SNDBLK		(-2)	/*	サウンドブロックエラー				*/
									/*	Error of sound block				*/

/*	$define$ フィルタモード	(ADXT_FLTMODE_～)		*/
/*	Filter mode										*/
#define	ADXT_FLTMODE_CPU	(0)		/*	ＣＰＵによる展開モード				*/
									/*	by CPU								*/
#define	ADXT_FLTMODE_SCSP	(1)		/*	AICA-DSPによる展開モード			*/
									/*	by AICA-DSP							*/

/*	$define$ 再生モード	(ADXT_PMODE_～)				*/
/*	Play mode										*/
#define	ADXT_PMODE_FNAME	(0)		/*	ファイル名または FID による指定		*/
									/*	Play specified file name or file ID	*/
#define	ADXT_PMODE_AFS		(1)		/*	AFS による指定						*/
									/*	Play specified AFS file				*/
#define	ADXT_PMODE_MEM		(2)		/*	メモリ再生							*/
									/*	Play data from memory				*/
#define	ADXT_PMODE_SJ		(3)		/*	ストリームジョイント再生			*/
									/*	Play data from StreamJoint			*/
#define	ADXT_PMODE_SLFILE	(4)		/*	シームレス連続再生（ファイル）		*/
									/*	Seamless continuous play from file	*/

/*	$define$ エラーリカバーモード	(ADXT_RMODE_～)	*/
/*	Mode of error recovery							*/
#define	ADXT_RMODE_NOACT	(0)		/*	リカバー処理しない					*/
									/*	Do not recover						*/
#define	ADXT_RMODE_STOP		(1)		/*	自動停止							*/
									/*	Automatic stop						*/
#define	ADXT_RMODE_REPLAY	(2)		/*	自動再プレイ						*/
									/*	Automatic replay					*/

/*	パンポットの設定値		*/
/*	Panpot parameter		*/
#define	ADXT_PAN_LEFT		(-15)
#define	ADXT_PAN_CENTER		(0)
#define	ADXT_PAN_RIGHT		(15)
#define	ADXT_PAN_AUTO		(-128)	/*	MONO/STE によって自動的に切り替える	*/
									/*	Changes automatically by data		*/

/*	ステレオ再生時のチャンネル番号		*/
/*	Channel number playing stereo data	*/
/*	ADXT_CH_L:left, ADXT_CH_R:right		*/
#define	ADXT_CH_L			(0)
#define	ADXT_CH_R			(1)

/*	最大再生チャンネル数				*/
/*	Maximum number of play channel		*/
#define	ADXT_MAX_NCH		(2)

/*	サーバ関数の呼び出される頻度の規定値　60（回/秒）				*/
/*	Default value of frequency called server function(times/sec)	*/
#define ADXT_DEF_SVRFREQ	(60)

/*	Default value of output volume(dB)	*/
#define	ADXT_DEF_OUTVOL		(0)

/*	入力バッファの下限値 (エラー処理用、単位バイト）				*/
/*	Minimum data in the input buffer(byte) (for coping with error)	*/
#define	ADXT_MIN_BUFDATA	(64)

/*	エラー判別時間　（単位:秒)			*/
/*	Error distinction time(sec)			*/
#define	ADXT_EWAIT_PLY		(5)
#define	ADXT_EWAIT_NOTPLY	(20)

/*	インデックスの最大数				*/
/*	Maximum number of index				*/
#define	ADXT_MAX_IDX		(0xFFFF)

/*	ADXフォーマットタイプ				*/
/*	Format type of ADX					*/
#define ADXT_FMT_ADX		(1)
#define ADXT_FMT_AHX		(2)

/****************************************************************************/
/*		データ型															*/
/*      Data type declaration												*/
/****************************************************************************/

/*	ADX Talk オブジェクト構造体		*/
/*	Structure of ADX Talk object	*/
typedef struct _adx_talk {
	/* 0x00 */ Sint8	used;						/*	使用中か否か					*/
	/* 0x01 */ Sint8	stat;						/*	動作状態						*/
	/* 0x02 */ Sint8	pmode;						/*	再生モード						*/
	/* 0x03 */ Sint8	maxnch;						/*	最大再生チャンネル数			*/
	/* 0x04 */ ADXSJD	sjd;						/*	ADXストリームジョイントデコーダ	*/
	/* 0x08 */ ADXSTM	stm;						/*	入力ストリームコントローラ		*/
	/* 0x0C */ ADXRNA	rna;						/*	オーディオレンダラ				*/
	/* 0x10 */ SJ		sjf;						/*	ファイル入力ストリームジョイント*/
	/* 0x14 */ SJ		sji;						/*	入力ストリームジョイント		*/
	/* 0x18 */ SJ		sjo[ADXT_MAX_NCH];			/*	出力ストリームジョイント		*/
	/* 0x20 */ Sint8	*ibuf;						/*	入力バッファ					*/
	/* 0x24 */ Sint32	ibuflen;					/*	入力バッファサイズ（バイト単位)	*/
	/* 0x28 */ Sint32	ibufxlen;					/*	入力バッファエクストラサイズ	*/
	/* 0x2C */ Sint16	*obuf;						/*	出力バッファ					*/
	/* 0x30 */ Sint32	obufsize;					/*	出力バッファサイズ（サンプル）	*/
	/* 0x34 */ Sint32	obufdist;					/*	出力バッファ間隔（サンプル）	*/
	/* 0x00 */ Sint32	svrfreq;					/*	サーバ関数呼び出し頻度			*/
	/* 0x3C */ Sint16	maxsct;						/*	入力バッファ内の最高セクタ数	*/
	/* 0x3E */ Sint16	minsct;						/*	入力バッファ内の最低セクタ数	*/
	/* 0x40 */ Sint16	outvol;						/*	出力ボリューム					*/
	/* 0x42 */ Sint16	outpan[ADXT_MAX_NCH];		/*	出力パンポットの設定値			*/
	/* 0x46 */ Sint16   unk46;
	/* 0x00 */ Sint32	maxdecsmpl;					/*	最大デコードサンプル数			*/
	/* 0x00 */ Sint32	lpcnt;						/*	ループカウンタ					*/
	/* 0x00 */ Sint32	lp_skiplen;					/*	ループスキップバイト数			*/
	/* 0x00 */ Sint32	trp;						/*	トランスポーズ量 (セント)		*/
	/* 0x00 */ Sint32	wpos;						/*	メディア上の書き込み位置		*/
	/* 0x00 */ Sint32	mofst;						/*	メディア上のオフセット			*/
	/* 0x00 */ Sint16	ercode;						/*	エラーコード					*/
	/* 0x00 */ Sint32	edecpos;					/*	エラー検出用デコード位置		*/
	/* 0x00 */ Sint16	edeccnt;					/*	デコード位置カウンタ			*/
	/* 0x00 */ Sint16	eshrtcnt;					/*	入力ﾊﾞｯﾌｧｴﾝﾌﾟﾃｨｰｶｳﾝﾀ			*/
	/* 0x00 */ Sint8	lpflg;						/*	ループするか否か				*/
	/* 0x00 */ Sint8	autorcvr;					/*	自動的にエラー復帰するか否か	*/
	/* 0x00 */ Sint8	fltmode;					/*	フィルタモード					*/
	/* 0x00 */ Sint8	execflag;					/*	サーバを実行するか否か			*/
	/* 0x00 */ Sint8	pstwait_flag;				/*	音声出力開始待ちフラグ			*/
	/* 0x00 */ Sint8	pstready_flag;				/*	音声出力準備完了フラグ			*/
	/* 0x00 */ Sint8	pause_flag;					/*	一時停止フラグ					*/
	/* 0x00 */ void	*amp;						/*	振幅抽出器						*/
	/* 0x00 */ SJ		ampsji[ADXT_MAX_NCH];		/*	振幅抽出用入力SJ				*/
	/* 0x00 */ SJ		ampsjo[ADXT_MAX_NCH];		/*	振幅抽出用出力SJ				*/
	/* 0x00 */ Sint32	time_ofst;					/*	時刻のオフセット				*/
	/* 0x00 */ Sint32	lesct;						/*	ループ再生時の最終セクタ番号	*/
	/* 0x00 */ Sint32	trpnsmpl;					/*			トラップサンプル番号	*/
	/* 0x00 */ void	*lsc;						/*	連結ストリームコントローラ		*/
	/* 0x00 */ Sint8	lnkflg;						/*	連結再生フラグ					*/
	/* 0x00 */ Sint8	rsv;						/*	予約							*/
	/* 0x00 */ Sint16	rsv2;						/*	予約２							*/
	/* 0x00 */ Uint32 tvofst;						/*	スタート時間オフセット			*/
	/* 0x00 */ Uint32 svcnt;						/*	スタートV-Syncカウント			*/
    										// 2001.11.14 oshimi
	/* 0x00 */ Uint32 decofst;						/*	トータルデコードオフセット		*/
	/* 0x00 */ #ifdef __EE__
	/* 0x00 */ Sint32	flush_nsmpl;				/*	フラッシュ時に挿入したサンプル数	*/
	/* 0x00 */ #endif
	/* 0x00 */ Sint8  unkAC;
	/* 0x00 */ Sint8  padAD[1];
    /* 0x00 */ Char8* unkB0;
    /* 0x00 */ Sint32 padB4;
    /* 0x00 */ Sint32 padB8;
    /* 0x00 */ Sint32 padBC;
    /* 0x00 */ Sint32 padC0;
} ADX_TALK;
typedef	ADX_TALK	*ADXT;

/*	インデックスデータ	*/
/*	Index data			*/
typedef struct _adxt_idx {
	Uint16 nidx;
	Uint16 top;
} ADXT_IDX;

/*	スレッドパラメータ構造体		*/
/*	Parameter structure of Thread Param	*/
typedef struct {
	int	prio_lock;		// Lock Thread priority
	int	prio_safe;		// Safe Thread priority
	int	prio_vsync;		// Vsync Thread priority
	int	prio_main;		// Main Thread Normary priority
	int	prio_mwidle;	// Middleware Idle Thread priority
} ADXM_TPRM;

/*	スレッドパラメータ構造体(拡張版)				*/
/*	Parameter structure of Extended Thread Param	*/
typedef struct {
	int	prio_lock;		// Lock Thread priority
	int	prio_safe;		// Safe Thread priority
	int	prio_usrvsync;	// User Vsync Thread priority
	int	prio_vsync;		// Vsync Thread priority
	int	prio_main;		// Main Thread Normary priority
	int	prio_mwidle;	// Middleware Idle Thread priority
	int	prio_usridle;	// User Idle Thread priority
} ADXM_TPRM_EX;

/*	ADXヘッダ情報構造体					*/
/*	Parameter structure of ADX header	*/
typedef struct {
	Sint32 fmt;			// Format type (ADX/AHX)
	Sint32 sfreq;		// Sampling rate
	Sint32 nch;			// Number of channel
	Sint32 bps;			// Number of bit per sample
	Sint32 nsmpl;		// Total number of sample
	Sint32 lptype;		// Loop type
	Sint32 lpstart;		// Loop start position
	Sint32 lpend;		// Loop end position
} ADXHINFO;

/****************************************************************************/
/*		関数の宣言															*/
/*      Function Declaration												*/
/****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/* $func$ ADX Talk の初期化
 * [書　式] void ADXT_Init(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ADX Talk を初期化する。
 *			変数領域の初期化を行う。
 *  Initialization of ADX Talk
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Initializes ADX Talk. Initializes variable.
 */
void ADXT_Init(void);

/* $func$ ADX Talkの終了
 * [書　式] void ADXT_Finish(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ADX Talk の終了処理をする。
 *  Termination of ADX Talk
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Finalizes ADX Talk.
 */
void ADXT_Finish(void);

/*	$func$ すべてのADXTハンドルの消去
 * [書　式] void ADXT_DestroyAll(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] すべてのADXTハンドルを消去する。
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] You can destroy all ADXT handles.
 */
void ADXT_DestroyAll(void);

/*	$func$ すべてのADXTとADXFハンドルの消去
 * [書　式] void ADXT_CloseAllHandles(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] すべてのADXTハンドルとADXFハンドルを消去する。
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] You can destroy all ADXT handles and close all ADXF handles.
 */
void ADXT_CloseAllHandles(void);

/*	$func$ ADXTハンドル の生成
 * [書　式] ADXT ADXT_Create(Sint32 maxnch, void *work, Sint32 worksize);
 * [入　力] maxnch	: 最大再生チャンネル数（モノラルのみ１：ステレオ２）
 *			work	: ワーク領域
 *			worksize: ワーク領域のサイズ
 * [出　力] なし
 * [関数値] ADXTハンドル
 * [機　能] ADXTハンドルを生成する。
 *			work領域のサイズは、ADXT_CALC_WORKマクロによって求める。
 *  Creation of ADXT handle
 * [Inputs  ] maxnch  : Number of maximum channels(monoral:1, stereo:2)
 *			  work    : Working area
 *			  worksize: Size of working area(byte)
 * [Outputs ] None
 * [Return  ] ADXT handle
 * [Function] Creates ADXT handle.
 * [Remarks ] You calculate size of working area used 'ADXT_CALC_WORK' macro. 
 */
ADXT ADXT_Create(Sint32 maxnch, void *work, Sint32 worksize);

/* $func$ ADXTハンドル の消去
 * [書　式] void ADXT_Destroy(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] 指定された ADXTハンドルを消去する。
 *  Destroy of ADXT handle
 * [Inputs  ] adxt   : ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Destroys specified ADXT handle.
 */
void ADXT_Destroy(ADXT adxt);

/* $func$ FID 指定による再生の開始
 * [書　式] void ADXT_StartAfs(ADXT adxt, Sint32 patid, Sint32 fid);
 * [入　力] adxt	: ADXTハンドル
 *			patid	: パーティション識別子
 *			fid		: ファイル識別子
 * [出　力] なし
 * [関数値] なし
 * [機　能] パーティション識別子とファイル識別子で指定されたＡＤＸファイルの
 *			再生を開始する。
 *  Play start of ADX data by specified file ID
 * [Inputs  ] adxt	: ADXT handl
 *			  patid	: Partition ID
 *			  fid	: File ID
 * [Outputs ] None
 * [Return  ] None
 * [Function] Starts to play ADX file when you specify partition ID and file ID.
 */
void ADXT_StartAfs(ADXT adxt, Sint32 patid, Sint32 fid);

/* $func$ ファイル名指定による再生の開始
 * [書　式] void ADXT_StartFname(ADXT adxt, Sint8 *fname);
 * [入　力] adxt	: ADXTハンドル
 *			fname	: ファイル名
 * [出　力] なし
 * [関数値] なし
 * [機　能] fname で指定されたＡＤＸファイルの再生を開始する。
 *  Play start of ADX data specified file name
 * [Inputs  ] adxt	: ADXT handle
 *			  fname	: File name
 * [Outputs ] None
 * [Return  ] None
 * [Function] Starts to play ADX file when you specify file name.
 */
void ADXT_StartFname(ADXT adxt, Char8 *fname);

/* $func$ ストリームジョイントによる再生の開始
 * [書　式] void ADXT_StartSj(ADXT adxt, SJ sj);
 * [入　力] adxt	: ADXTハンドル
 *			sj		: ストリームジョイント
 * [出　力] なし
 * [関数値] なし
 * [機　能] ストリームジョイントから得られるデータを再生する。
 *  Play start of ADX data from Stream Joint
 * [Inputs  ] adxt	: ADXT handle
 *			  sj	: Stream Joint
 * [Outputs ] None
 * [Return  ] None
 * [Function] Starts to play ADX file when you specify Stream Joint.
 */
void ADXT_StartSj(ADXT adxt, SJ sj);

/* $func$ メモリ指定による再生の開始
 * [書　式] void ADXT_StartMem(ADXT adxt, void *adxdat);
 * [入　力] adxt	: ADXTハンドル
 *			adxdat	: ＡＤＸデータのアドレス
 * [出　力] なし
 * [関数値] なし
 * [機　能] adxdatで指定されたＡＤＸデータを再生する。
 *  Play start of ADX data on memory
 * [Inputs  ] adxt	: ADXT handle
 *			  adxdat: Address of ADX data
 * [Outputs ] None
 * [Return  ] None
 * [Function] Starts to play ADX data on memory when you specify address.
 */
void ADXT_StartMem(ADXT adxt, void *adxdat);

/* $func$ メモリ指定による再生の開始
 * [書　式] void ADXT_StartMem2(ADXT adxt, void *adxdat, Sint32 datlen);
 * [入　力] adxt	: ADXTハンドル
 *			adxdat	: ＡＤＸデータのアドレス
 *			datlen	: ＡＤＸデータの大きさ
 * [出　力] なし
 * [関数値] なし
 * [機　能] adxdata で指定されたＡＤＸデータを再生する。
 *  Play start of ADX data on memory (TYPE 2)
 * [Inputs  ] adxt	: ADXT handle
 *			  adxdat: Address of ADX data
 *			  datlen: Length of playing ADX data
 * [Outputs ] None
 * [Return  ] None
 * [Function] Starts to play ADX data on memory. Plays to specified length.
 */
void ADXT_StartMem2(ADXT adxt, void *adxdat, Sint32 datlen);

/* $func$ メモリ指定による再生の開始
 * [書　式] void ADXT_StartMemIdx(ADXT adxt, void *acx, Sint32 no);
 * [入　力] adxt	: ADXTハンドル
 *			acx		: ＡＣＸデータのアドレス
 *			no		: インデックス番号
 * [出　力] なし
 * [関数値] なし
 * [機　能] acx で指定されたＡＣＸデータのno番目のデータを再生する。
 *  Play start of ACX data
 * [Inputs  ] adxt	: ADXT handle
 *			  acx	: Address of ACX data
 *			  no	: Index number
 * [Outputs ] None
 * [Return  ] None
 * [Function] Starts to play a part of ACX data when you specify index number.
 */
void ADXT_StartMemIdx(ADXT adxt, void *acx, Sint32 no);

/* $func$ 再生の停止
 * [書　式] void ADXT_Stop(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] ＡＤＸの再生を停止する。
 *  Play stop
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Stops to play ADX data.
 */
void ADXT_Stop(ADXT adxt);

/* $func$ 状態の取得
 * [書　式] Sint32 ADXT_GetStat( ADXT adxt );
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 現在の ADXTハンドルの状態を表す定数
 * 				ADXT_STAT_STOP	 :	停止中
 *				ADXT_STAT_DECINFO:	ＡＤＸ のヘッダ情報取得中
 *				ADXT_STAT_PREP	 :	再生準備中
 *				ADXT_STAT_PLAYING:	デコード＆再生中
 *				ADXT_STAT_DECEND :	デコード終了
 *				ADXT_STAT_PLAYEND:	再生終了
 * [機　能] 現在のADXTハンドルの状態を取得する。
 *  Get status
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Status of ADXT handle
 * [Function] Obtains status of ADXT handle.
 */
Sint32 ADXT_GetStat(ADXT adxt);

/* $func$ サンプル単位での再生時刻の取得
 * [書　式] void ADXT_GetTime( ADXT adxt, Sint32 *ncount, Sint32 *tscale );
 * [入　力] adxt	: ADXTハンドル
 * [出　力] ncount	: 再生サンプル数
 *			tscale	: サンプリング周波数 [ Hz ]
 * [関数値] なし
 * [機　能] サンプル単位で再生時刻を取得する。
 *  Get play time by sample unit
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] ncount: Number of play sample
 *			  tscale: Sampling frequency(Hz)
 * [Return  ] None
 * [Function] Obtains play time by sample unit.
 */
void ADXT_GetTime(ADXT adxt, Sint32 *ncount, Sint32 *tscale);

/* $func$ 実時間での再生時刻の取得
 * [書　式] Sint32 ADXT_GetTimeReal(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 再生時刻 [ 1/100sec ]
 * [機　能] 実時間で再生時刻を取得する。
 *  Get play time in real time
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Play time(1/100sec)
 * [Function] Obtains play time in real time.
 */
Sint32 ADXT_GetTimeReal(ADXT adxt);

/* $func$ 音声データの総サンプル数の取得
 * [書　式] Sint32 ADXT_GetNumSmpl( ADXT adxt );
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 音声データの総サンプル数
 * [機　能] 再生中の ＡＤＸ データの総サンプル数を取得する。
 * [備　考] 状態が、再生準備中(ADXT_STAT_PREP)から再生終了(ADXT_STAT_PLAYEND)
 *			までの時に取得可能。
 *  Get a general sample number of sound data
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] General sample number of sound data
 * [Function] Obtains a general sample number of sound data.
 * [Remarks ] You can obtain a time between status of preparation
 *			  (ADXT_STAT_PREP) and status of play end(ADXT_STAT_PLAYEND).
 */
Sint32 ADXT_GetNumSmpl(ADXT adxt);

/* $func$ 音声データのサンプリング周波数の取得
 * [書　式] Sint32 ADXT_GetSfreq(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 音声データのサンプリング周波数
 * [機　能] 再生中の サンプリング周波数を求める。
 * [備　考] 状態が、再生準備中(ADXT_STAT_PREP)から再生終了(ADXT_STAT_PLAYEND)
 *			までの時に取得可能。
 *  Get sampling frequecy
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Sampling frequency
 * [Function] Obtains sampling frequency.
 * [Remarks ] You can obtain a sampling frequency between status of preparation
 *			 (ADXT_STAT_PREP) and status of play end(ADXT_STAT_PLAYEND).
 */
Sint32 ADXT_GetSfreq(ADXT adxt);

/* $func$ 音声データのチャンネル数の取得
 * [書　式] Sint32 ADXT_GetNumChan(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 音声データのチャンネル数の取得
 * [機　能] 再生中の音声のチャンネル数を求める。
 * [備　考] 状態が、再生準備中(ADXT_STAT_PREP)から再生終了(ADXT_STAT_PLAYEND)
 *			までの時に取得可能。
 */
Sint32 ADXT_GetNumChan(ADXT adxt);

/* $func$ ヘッダ長の取得
 * [書　式] Sint32 Sint32 ADXT_GetHdrLen(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 音声データのヘッダ長
 * [機　能] 再生中の音声のヘッダ長を求める。
 * [備　考] 状態が、再生準備中(ADXT_STAT_PREP)から再生終了(ADXT_STAT_PLAYEND)
 *			までの時に取得可能。
 */
Sint32 ADXT_GetHdrLen(ADXT adxt);

/* $func$ 音声データの量子化の取得
 * [書　式] Sint32 ADXT_GetFmtBps(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 音声データの量子化ビット数
 * [機　能] 再生中の音声の量子化ビット数を求める。
 * [備　考] 状態が、再生準備中(ADXT_STAT_PREP)から再生終了(ADXT_STAT_PLAYEND)
 *			までの時に取得可能。
 */
Sint32 ADXT_GetFmtBps(ADXT adxt);

/*	$func$ パンポットの設定
 * [書　式] void ADXT_SetOutPan(ADXT adxt, Sint32 ch, Sint32 pan);
 * [入　力] adxt	: ADXTハンドル
 *			ch		: チャネル番号 (0, 1)
 *						ADXT_CH_L=0, ADXT_CH_R=1
 *			pan		: パン設定値 (-15～+15, -128)
 *						ADXT_PAN_LEFT=-15, ADXT_PAN_CENTER=0
 *						ADXT_PAN_RIGHT=15, ADXT_PAN_AUTO=-128
 * [出　力] なし
 * [関数値] なし
 * [機　能] 出力パンポットを設定する。
 *			AUTO の場合は、ADX データがモノラルかステレオかによって自動的に
 *			パンが設定される。
 *  Set panpot
 * [Inputs  ] adxt	: ADXT handle
 *			  ch	: Channel number(ADXT_CH_L:0, ADXT_CH_R:1)
 *			  pan	: Panpot(from -15 to +15, -128)
 *						ADXT_PAN_LEFT=-15, ADXT_PAN_CENTER=0
 *						ADXT_PAN_RIGHT=15, ADXT_PAN_AUTO=-128
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets panpot of specified channel number.
 *			 Sets automatically panpot by data, monoral or stereo, when you 
 *			 specified 'ADXT_PAN_AUTO'.
 */
void ADXT_SetOutPan(ADXT adxt, Sint32 ch, Sint32 pan);

/*	$func$ パンポットの取得
 * [書　式] Sint32 ADXT_GetOutPan(ADXT adxt, Sint32 ch);
 * [入　力] adxt	: ADXTハンドル
 *			ch		: チャネル番号 (0, 1)
 *						ADXT_CH_L=0, ADXT_CH_R=1
 * [出　力] なし
 * [関数値] パンポットの設定値
 * [機　能] 出力パンポットを取得する。
 *  Get panpot
 * [Inputs  ] adxt	: ADXT handle
 *			  ch	: Channel number(ADXT_CH_L:0, ADXT_CH_R:1)
 * [Outputs ] None
 * [Return  ] Panpot
 * [Function] Obtains panpot of specified channel number.
 */
Sint32 ADXT_GetOutPan(ADXT adxt, Sint32 ch);

/*	$func$ 出力ボリュームの設定
 * [書　式] void ADXT_SetOutVol(ADXT adxt, Sint32 vol);
 * [入　力] adxt	: ADXTハンドル
 *			vol		: 減衰レベル　(0:-0dB, -960:-96dB)
 * [出　力] なし
 * [関数値] なし
 * [機　能] 出力ボリュームを設定する。
 *			volの設定値	0    :  -0dB  減衰なし
 *						-30  :  -3dB  約70%
 *						-60  :  -6dB  約50%
 *						-960 : -96dB  最大の減衰量
 *  Set volume
 * [Inputs  ] adxt	: ADXT handle
 *			  vol	: Volume (0:-dB, -960:-96dB)
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets the volume of a ADXT handle.
 *			 'vol'value	0    :  -0dB  No attenuation
 *						-30  :  -3dB  about 70%
 *						-60  :  -6dB  about 50%
 *						-960 : -96dB  Maximum attenuation
 */
void ADXT_SetOutVol(ADXT adxt, Sint32 vol);

/*	$func$ 出力ボリュームの取得
 * [書　式] Sint32 ADXT_GetOutVol(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 出力ボリュームの設定値　(0:-0dB ～ -960:-96dB)
 * [機　能] 出力ボリュームを取得する。
 *  Get volume
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Volume (0:-0dB, -960:-96dB)
 * [Function] Obtains the volume for a ADXT handle.
 */
Sint32 ADXT_GetOutVol(ADXT adxt);

/*	$func$ サーバ関数の呼び出し頻度の設定	(１秒当たりの呼び出し回数)
 * [書　式] void ADXT_SetSvrFreq(ADXT adxt, Sint32 freq);
 * [入　力] adxt	: ADXTハンドル
 *			freq	: サーバ関数の呼び出し頻度 (１秒当たりの呼び出し回数)
 * [出　力] なし
 * [関数値] なし
 * [機　能] サーバ関数(ADXT_ExecServer関数)の呼び出し頻度の設定する。
 *			デフォルトでは、60が設定されている。
 *			通常、設定する必要はない。
 *  Set the frequency called server function(times/sec)
 * [Inputs  ] adxt	: ADXT handle
 *			  freq	: Frequency called server function(times/sec)
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets the frequency called server function(ADXT_ExecServer).
 *			 You do not need to set it usually. Default value is 60.
 */
void ADXT_SetSvrFreq(ADXT adxt, Sint32 freq);

/*	$func$ 再読み込み開始時間の設定
 * [書　式] void ADXT_SetReloadTime(ADXT adxt,float time,Sint32 nch,Sint32 sfreq);
 * [入　力] adxt	: ADXTハンドル
 *			time	: 再読み込み開始時間
 *			nch		: チャンネル数
 *			sfreq	: サンプリング周波数
 * [出　力] なし
 * [関数値] なし
 * [機　能] 入力バッファへの再読み込み開始時間を設定する。
 *			入力バッファ内のデータ量が time 秒より少なくなるとディスクから
 *			データを読み込む。
 *  Set the time of start sector to reload
 * [Inputs  ] adxt	: ADXT handle
 *			  time  : start remain time
 *			  nch   : number of channel
 *			  sfreq : sampling frequency
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets of the time of start sector to reload into input buffer.
 *			 Reads data from disc when a quantity of data in the input 
 *			 buffer becomes less than 'time' [second].
 */
void ADXT_SetReloadTime(ADXT adxt, float time, Sint32 nch, Sint32 sfreq);

/*	$func$ 再読み込み開始セクタ数の設定
 * [書　式] void ADXT_SetReloadSct(ADXT adxt, Sint32 minsct);
 * [入　力] adxt	: ADXTハンドル
 *			minsct	: 再読み込み開始セクタ数
 * [出　力] なし
 * [関数値] なし
 * [機　能] 入力バッファへの再読み込み開始セクタ数を設定する。
 *			入力バッファ内のデータ量が minsct セクタより少なくなるとディスク
 *			からデータを読み込む。
 *  Set the number of start sector to reload
 * [Inputs  ] adxt	: ADXT handle
 *			  minsct: start sector number
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets of the number of start sector to reload into input buffer.
 *			 Reads data from disc when a quantity of data in the input 
 *			 buffer becomes less than 'minsct' [sector].
 */
void ADXT_SetReloadSct(ADXT adxt, Sint32 minsct);

/*	$func$ 入力バッファ内のセクタ数の取得
 * [書　式] Sint32 ADXT_GetNumSctIbuf(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] セクタ数
 * [機　能] 入力バッファに読み込まれているセクタ数を取得する。
 *  Get the amount of data stored in input buffer(sector)
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Number of sector
 * [Function] Obtains the amount of data that is stored in input buffer.
 */
Sint32 ADXT_GetNumSctIbuf(ADXT adxt);

/*	$func$ 出力バッファ内のサンプル数の取得
 * [書　式] Sint32 ADXT_GetNumSmplObuf(ADXT adxt, Sint32 chno);
 * [入　力] adxt	: ADXTハンドル
 *			chno	: チャンネル番号
 * [出　力] なし
 * [関数値] サンプル数
 * [機　能] 出力バッファ内のサンプル数を取得する。
 */
Sint32 ADXT_GetNumSmplObuf(ADXT adxt, Sint32 chno);

/*	$func$ 入力バッファ内再生時間
 * [書　式] float ADXT_GetIbufRemainTime(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 再生可能時間　(単位：秒)
 * [機　能] 入力バッファにあるデータで再生可能な時間を取得する。
 *			ADXデータのみ対応。
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Playable time (sec)
 * [Function] Obtains playable time using only data in input buffer.
 *			  You can use this function only playing ADX data.
 */
float ADXT_GetIbufRemainTime(ADXT adxt);

/*	$func$ 入力バッファに十分なデータがあるか否かの検査
 * [書　式] Sint32 ADXT_IsIbufSafety(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] TRUE(1):十分なデータがある、FALSE(0):データ不足
 * [機　能] 入力バッファに十分なデータがあるか否かを検査する。
 *			ADXT_SetReloadSct関数によって指定された再読み込み開始セクタ数以上の
 *			データが入力バッファ内に存在する場合、TRUEが返される。
 *  Check whether the input buffer is having enough data or not
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] TRUE(1):Has enough data, FALSE(0):Data are insufficient
 * [Function] Checks whether the input buffer is having enough data or not.
 *			  Returns 'TRUE' when data more than the number of sector appointed
 *			  exist in the input buffer.
 */
Sint32 ADXT_IsIbufSafety(ADXT adxt);

/*	$func$ エラーリカバリーモードの指定
 * [書　式] void ADXT_SetAutoRcvr(ADXT adxt, Sint32 rmode);
 * [入　力] adxt	: ADXTハンドル
 *			rmode	: エラーリカバリーの方法
 *					  ADXT_RMODE_NOACT, ADXT_RMODE_STOP, ADXT_RMODE_REPLAY
 * [出　力] なし
 * [関数値] なし
 * [機　能] エラーリカバリーの方法を設定する。
 *			ADXT_RMODE_NOACT : エラーリカバリーしない
 *			ADXT_RMODE_STOP  : 自動的に停止し、動作状態がADXT_STAT_STOPになる。
 *			ADXT_RMODE_REPLAY: CDからのデータの供給が途切れたときに、自動的に
 *							   ファイルの先頭から再生する。
 *							   その他の場合は、自動的に停止しする。
 *  Set a mode of error recovery
 * [Inputs  ] adxt	: ADXT handle
 *			  rmode	: Method of error recovery
 *					  ADXT_RMODE_NOACT, ADXT_RMODE_STOP, ADXT_RMODE_REPLAY
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets the method that recover from error.
 *			 ADXT_RMODE_NOACT : Does not recover
 *			 ADXT_RMODE_STOP  : Stops automatically
 *			 ADXT_RMODE_REPLAY: Replay from the top of a file automatically 
 *							    when data supply from CD-ROM broke off.
 *							    Other cases stop automatically.
 */
void ADXT_SetAutoRcvr(ADXT adxt, Sint32 rmode);

/*	$func$ 再生が終了したか否かの検査
 * [書　式] Sint32 ADXT_IsCompleted(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] TRUE(1):再生終了、FALSE(0):再生中
 * [機　能] 再生が終了したか否かを調べる。
 *  Check whether the play finished or not
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] TRUE(1):Finished, FALSE(0):Playing
 * [Function] Checks whether the play finished or not.
 */
Sint32 ADXT_IsCompleted(ADXT adxt);

/*	$func$ 各ハンドルのサーバ関数　（内部状態の更新)
 * [書　式] void ADXT_ExecHndl(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] 各ハンドルの内部状態を更新する。
 *			ADXT_ExecServer内から呼び出される。
 *  Server function of each handle
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Update the inside status.
 *			  This function is called from 'ADXT_ExecServer' function.
 */
void ADXT_ExecHndl(ADXT adxt);

/*	$func$ サーバ関数　（内部状態の更新)
 * [書　式] void ADXT_ExecServer(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ライブラリの内部状態を更新する。
 *			V-Sync 毎に呼び出さなければならない。
 *  Server function
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Update the inside status of library.
 */
void ADXT_ExecServer(void);

/*	$func$ ファイルシステムサーバ関数　（内部状態の更新)
 * [書　式] void ADXT_ExecFsSvr(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ライブラリの内部状態を更新する。
 *			V-Sync 毎に呼び出さなければならない。
 *			優先度をADXT_ExecServerよりも低くする。
 *  File System Server function
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Update the inside status of library.
 */
void ADXT_ExecFsSvr(void);

/*	$func$ ファイルシステムサーバが処理中か否か
 * [書　式] Sint32 ADXT_IsActiveFsSvr(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] TRUE:処理中／FALSE:処理していない
 * [機　能] ファイルシステムサーバが処理中か否かをチェックする。
 *  Check active File System Server function
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] TRUE:active/FALSE:no active
 * [Function] Checks that File System server function is active.
 */
Sint32 ADXT_IsActiveFsSvr(void);

/*	$func$ エラーコードの取得
 * [書　式] Sint32 ADXT_GetErrCode(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] エラーコードを取得する。
 *  Get error code
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Obtains the error code.
 */
Sint32 ADXT_GetErrCode(ADXT adxt);

/*	$func$ エラーコードのクリア
 * [書　式] void ADXT_ClearErrCode(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] エラーコードをクリアする。
 *  Clear error code
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Clears the error code.
 */
void ADXT_ClearErrCode(ADXT adxt);

/*	$func$ ループした回数の取得
 * [書　式] Sint32 ADXT_GetLpCnt(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] ループした回数
 * [機　能] ループした回数を取得する。
 *  Get the number of times played a loop
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Number of times played a loop
 * [Function] Obtains the number of times that played a loop.
 */
Sint32 ADXT_GetLpCnt(ADXT adxt);

/*	$func$ ループフラグの設定
 * [書　式] void ADXT_SetLpFlg(ADXT adxt, Sint32 flg);
 * [入　力] adxt	: ADXTハンドル
 *			flg		: 1=ループする、0=ループしない
 * [出　力] なし
 * [関数値] なし
 * [機　能] ループするか否かを設定する。
 *			再生中は、ループを解除することのみ可能。
 *			再度、ループを設定する時は、再生開始直前に設定すること。
 *  Set the loop flag
 * [Inputs  ] adxt	: ADXT handle
 *			  flg	: 1=loop, 0=not loop
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets whether play a loop or not.
 *			  You can only release looping play while playing.
 *			  If you set this flag again,
 *			  you have to set just before start playing.
 */
void ADXT_SetLpFlg(ADXT adxt, Sint32 flg);

/*	$func$ 入力ストリームジョイントの取得
 * [書　式] SJ ADXT_GetInputSj(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] ストリームジョイントハンドル
 * [機　能] 入力用ストリームジョイントを取得する。
 *  Get input Stream Joint
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Stream Joint
 * [Function] Obtains Stream Joint for the input.
 */
SJ ADXT_GetInputSj(ADXT adxt);

/*	$func$ 音声出力開始待ちの設定
 * [書　式] void ADXT_SetWaitPlayStart(ADXT adxt, Sint32 flg);
 * [入　力] adxt	: ADXTハンドル
 *			flg		: 1=ウェイトする、0=音声出力を即座に開始する
 * [出　力] なし
 * [関数値] なし
 * [機　能] 音声の出力の開始待ちを設定する。
 *  Set waiting for starting to output the sound
 * [Inputs  ] adxt	: ADXT handle
 *			  flg	: 1=waits, 0=starts to output sound
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets waiting for starting to output the sound.
 */
void ADXT_SetWaitPlayStart(ADXT adxt, Sint32 flg);

/*	$func$ 音声出力開始準備完了か否かの判定
 * [書　式] Sint32 ADXT_IsReadyPlayStart(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 1:準備完了／0:準備中
 * [機　能] 音声出力開始の準備が完了か否かを判定する。
 *  Check whether preparations completion
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Checks whether ADXT handle was preparations completion.
 */
Sint32 ADXT_IsReadyPlayStart(ADXT adxt);

/*	$func$ 一時停止の設定
 * [書　式] void ADXT_Pause(ADXT adxt, Sint32 sw);
 * [入　力] adxt	: ADXTハンドル
 *			sw		: 1=一時停止、0=再開
 * [出　力] なし
 * [関数値] なし
 * [機　能] 一時停止するか否かを設定する。
 *  Pause/Continue
 * [Inputs  ] adxt	: ADXT handle
 *			  sw	: 1=pause, 0=continue
 * [Outputs ] None
 * [Return  ] None
 * [Function] Stops temporarily by a specified switch and release temporary 
 *			  standstill.
 */
void ADXT_Pause(ADXT adxt, Sint32 sw);

/*	$func$ 一時停止状態の取得
 * [書　式] Sint32 ADXT_GetStatPause(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] 一時停止状態 1=一時停止、0=非一時停止
 * [関数値] なし
 * [機　能] 一時停止状態を取得する。
 *  Pause/Continue
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] 1=pause, 0=not pause
 * [Return  ] None
 * [Function] Obtains the status of pause.
 */
Sint32 ADXT_GetStatPause(ADXT adxt);

/*	$func$ ダイレクトセンドレベルの設定
 * [書　式] void ADXT_SetDrctLvl(ADXT adxt, Sint32 drctlvl)
 * [入　力] adxt	: ADXTハンドル
 *			drctlvl	: ダイレクトセンドレベル　(0dB ～ -45dB)
 * [出　力] なし
 * [関数値] なし
 * [機　能] ダイレクトセンドレベルを設定する。
 */
void ADXT_SetDrctLvl(ADXT adxt, Sint32 drctlvl);

/*	$func$ ダイレクトセンドレベルの取得
 * [書　式] Sint32 ADXT_GetDrctLvl(ADXT adxt)
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] ダイレクトセンドレベル　(0dB ～ -45dB)
 * [機　能] ダイレクトセンドレベルを取得する。
 */
Sint32 ADXT_GetDrctLvl(ADXT adxt);

/*	$func$ エフェクタの設定
 * [書　式] void ADXT_SetFx(ADXT adxt, Sint32 fxch, Sint32 fxlvl);
 * [入　力] adxt	: ADXTハンドル
 *			fxch	: エフェクタの入力チャンネル番号 (0～15)
 *			fxlvl	: エフェクタの入力レベル　(0dB ～ -45dB)
 * [出　力] なし
 * [関数値] なし
 * [機　能] エフェクタへの出力を設定する。
 *  Set the effect
 * [Inputs  ] adxt	: ADXT handle
 *			  fxch	: Input channel number to Effector (0-15)
 *			  fxlvl	: Input level to Effector(from 0 to -45[dB])
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets output to the effect.
 */
void ADXT_SetFx(ADXT adxt, Sint32 fxch, Sint32 fxlvl);

/*	$func$ エフェクタ設定値の取得
 * [書　式] void ADXT_GetFx(ADXT adxt, Sint32 *fxch, Sint32 *fxlvl);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] fxch	: エフェクタへの入力チャンネル番号 (0～15)
 *			fxlvl	: エフェクタの入力レベル　(0dB ～ -45dB)
 * [関数値] なし
 * [機　能] エフェクタの設定値を取得する。
 *  Get the effect value
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] fxch	: Input channel number to Effector(0-15)
 *			  fxlvl	: Input level to Effector(from 0 to -45[dB])
 * [Return  ] None
 * [Function] Obtains the effect value.
 */
void ADXT_GetFx(ADXT adxt, Sint32 *fxch, Sint32 *fxlvl);

/*	$func$ フィルタの設定
 * [書　式] void ADXT_SetFilter(ADXT adxt, Sint32 coff, Sint32 q);
 * [入　力] adxt	: ADXTハンドル
 *			coff	: カットオフ周波数
 *			q		: 尖鋭度
 * [出　力] なし
 * [関数値] なし
 * [機　能] フィルタへの出力を設定する。
 *  Set the filter
 * [Inputs  ] adxt	: ADXT handle
 *			  coff	: Cut off frequency
 *			  q		: 
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets the filter.
 */
void ADXT_SetFilter(ADXT adxt, Sint32 coff, Sint32 q);

/*	$func$ フィルタ設定値の取得
 * [書　式] void ADXT_GetFilter(ADXT adxt, Sint32 *coff, Sint32 *q);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] coff	: カットオフ周波数
 *			q		: 尖鋭度
 * [関数値] なし
 * [機　能] フィルタへの出力値を取得する。
 *  Get the filter value
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] coff	: Cut off frequency
 *			  q		: 
 * [Return  ] None
 * [Function] Obtains the filter value.
 */
void ADXT_GetFilter(ADXT adxt, Sint32 *coff, Sint32 *q);

/*	$func$ トランスポーズの設定
 * [書　式] void ADXT_SetTranspose(ADXT adxt, Sint32 transps, Sint32 detune);
 * [入　力] adxt	: ADXTハンドル
 *			transps	: トランスポーズ量
 *			detune	: デチューン量
 * [出　力] なし
 * [関数値] なし
 * [機　能] トランスポーズを設定する。
 *  Set transpose
 * [Inputs  ] adxt		: ADXT handle
 *			  transps	: Amount of transpose
 *			  detune	: Amount of detune
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets the transpose.
 */
void ADXT_SetTranspose(ADXT adxt, Sint32 transps, Sint32 detune);

/*	$func$ トランスポーズの取得
 * [書　式] void ADXT_GetTranspose(ADXT adxt, Sint32 *transps, Sint32 *detune);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] transps	: トランスポーズ量
 *			detune	: デチューン量
 * [関数値] なし
 * [機　能] トランスポーズ量を取得する。
 *  Get tanspose
 * [Inputs  ] adxt		: ADXT handle
 * [Outputs ] transps	: Amount of transpose
 *			  detune	: Amount of detune
 * [Return  ] None
 * [Function] Obtains the amount of transpose.
 */
void ADXT_GetTranspose(ADXT adxt, Sint32 *transps, Sint32 *detune);

/*	$func$ エラー関数の登録
 * [書　式] void ADXT_EntryErrFunc(void (*func)(void *obj, Sint8 *msg),
 *																void *obj);
 * [入　力] func	: エラー処理関数
 *			obj		: エラー処理関数の第1引数
 * [出　力] なし
 * [関数値] なし
 * [機　能] エラー処理関数を登録する。
 *  Entry error callback function
 * [Inputs  ] func	: Error handling function
 *			  obj	: First argument of error handling function
 * [Outputs ] None
 * [Return  ] None
 * [Function] Entry error callback function.
 */
void ADXT_EntryErrFunc(void (*func)(void *obj, Sint8 *msg), void *obj);

/*	$func$ 音声データの放棄
 * [書　式] Sint32 ADXT_DiscardSmpl(ADXT adxt, Sint32 nsmpl)
 * [入　力] adxt	: ADXTハンドル
 *			nsmpl	: サンプル数
 * [出　力] なし
 * [関数値] 捨てたサンプル数
 * [機　能] デコードした音声データを捨てる。
 *  Discard sound data
 * [Inputs  ] adxt	: ADXT handle
 *			  nsmpl	: Number of sample
 * [Outputs ] None
 * [Return  ] sample number discarded
 * [Function] Discards sound data decoded.
 */
Sint32 ADXT_DiscardSmpl(ADXT adxt, Sint32 nsmpl);

/*	リトライ回数の設定	*/
void ADXT_SetNumRetry(Sint32 num);

/* ヘッダ情報の取得 */
void ADXT_GetHdrInfo(Sint8 *buf, Sint32 bsize, ADXHINFO *hinfo);

/*	$func$ ファイル読み込みステータスの取得
 * [書　式] Sint32 ADXT_GetStatRead(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 1=読み込み中/読み込み準備中、0=非読み込み中/非読み込み準備中
 * [機　能] 読み込み状態を取得する
 */
Sint32 ADXT_GetStatRead(ADXT adxt);

/***
*			フィルタ作成用コールバック
*
*			デコードする毎に登録された関数が呼び出される。
*			(*user_flt_cbf)(void *obj, Sint32 ch, void *data, Sint32 dtlen);
*			obj:	ADXT_EntryFltFunc関数の第３引数
*			ch:		チャンネル番号　(0:左, 1:右)
*			data:	展開されたデータ (ADXの場合は、16bitPCM)
*			dtlen:	展開されたデータのバイト数
*			※　振幅抽出機能とは共用できない。
**/

/*	フィルタコールバック関数の登録	*/
void ADXT_EntryFltFunc(ADXT adxt,
		void (*f)(void *obj, Sint32 ch, void *data, Sint32 dtlen), void *obj);

/* $func$ デコードサンプル数の取得
 * [書　式] Sint32 ADXT_GetDecNumSmpl(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] デコードした音声データの総サンプル数
 * [機　能] デコードした音声データの総サンプル数を取得する。
 * [備　考] 状態が、再生準備中(ADXT_STAT_PREP)から再生終了(ADXT_STAT_PLAYEND)
 *			までの時に取得可能。
 *  Get a decoded sample number of sound data
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] decoded sample number of sound data
 * [Function] Obtains a decoded sample number of sound data.
 * [Remarks ] You can obtain a time between status of preparation
 *			  (ADXT_STAT_PREP) and status of play end(ADXT_STAT_PLAYEND).
 */
Sint32 ADXT_GetDecNumSmpl(ADXT adxt);

/***
*		シームレス連続再生機能
*
*		・ループ設定の無い単純なADX データのみ連続再生可能
*		・最大16ファイルまで登録可能
*
***/

/*	最大登録ファイル数									*/
/*	Number of maximum files to entry 					*/
#define	ADXT_MAX_ENTRY_FILES		(16)

/*	$func$ シームレス連続再生ファイルの登録
 * [書　式] void ADXT_EntryFname(ADXT adxt, Sint8 *fname)
 * [入　力] adxt	: ADXTハンドル
 *			fname	: ファイル名
 * [出　力] なし
 * [関数値] なし
 * [機　能] シームレス連続再生用のファイルを登録する。
 *			ループ設定のない単純なADXデータのみ登録できる。
 *  Entry file for seamless continuous play
 * [Inputs  ] adxt	: ADXT handle
 *			  fname	: ADX File name
 * [Outputs ] None
 * [Return  ] None
 * [Function] Entry file for seamless continuous play.
 *			  You can only simple ADX data file without looping.
 */
void ADXT_EntryFname(ADXT adxt, Char8 *fname);

/*	$func$ シームレス連続再生サブファイルの登録
 * [書　式] void ADXT_EntryAfs(ADXT adxt, Sint32 patid, Sint32 fid)
 * [入　力] adxt	: ADXTハンドル
 *			patid	: パーティションID
 *			fid		: ファイルID
 * [出　力] なし
 * [関数値] なし
 * [機　能] シームレス連続再生用のサブファイルを登録する。
 *			ループ設定のない単純なADXデータのみ登録できる。
 *  Entry file for seamless continuous play
 * [Inputs  ] adxt	: ADXT handle
 *			  patid	: Partition ID
 *			  fid	: File ID
 * [Outputs ] None
 * [Return  ] None
 * [Function] Entry subfile for seamless continuous play.
 *			  You can only simple ADX data subfile without looping.
 */
void ADXT_EntryAfs(ADXT adxt, Sint32 patid, Sint32 fid);

/*	$func$ シームレス連続再生の開始
 * [書　式] void ADXT_StartSeamless(ADXT adxt)
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] シームレス連続再生を開始する。
 *  Start seamless continuous play
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Start seamless continuous play.
 */
void ADXT_StartSeamless(ADXT adxt);

/*	$func$ シームレスループ再生の設定
 * [書　式] void ADXT_SetSeamlessLp(ADXT adxt, Sint32 flg)
 * [入　力] adxt	: ADXTハンドル
 *			flg		: 0-ループ再生しない,1-ループ再生する
 * [出　力] なし
 * [関数値] なし
 * [機　能] 現在、登録されているファイルを繰り返し再生する。
 *			ファイルのすべてのデータを読み終わると自動的に再度登録される。
 *  Set seamless loop play
 * [Inputs  ] adxt	: ADXT handle
 *			  flg	: 0-Off, 1-On
 * [Outputs ] None
 * [Return  ] None
 * [Function] You can play all entried files with looping.
 */
void ADXT_SetSeamlessLp(ADXT adxt, Sint32 flg);

/*	$func$ シームレスループ再生の開始
 * [書　式] void ADXT_StartFnameLp(ADXT adxt, Sint8 *fname)
 * [入　力] adxt	: ADXTハンドル
 *			fname	: ファイル名
 * [出　力] なし
 * [関数値] なし
 * [機　能] 指定されたファイルを繰り返し再生する。
 *  Start seamless loop play
 * [Inputs  ] adxt	: ADXT handle
 *			  fname	: ADX File Name
 * [Outputs ] None
 * [Return  ] None
 * [Function] Start seamless loop plaing your specified file (fname).
 */
void ADXT_StartFnameLp(ADXT adxt, Char8 *fname);

/*	$func$ シームレス連続再生の解除
 * [書　式] void ADXT_ReleaseSeamless(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] シームレス連続再生の解除する。
 *  Release seamless continuous play
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Release seamless continuous play.
 */
void ADXT_ReleaseSeamless(ADXT adxt);

/*	$func$ 登録ファイル数の取得
 * [書　式] Sint32 ADXT_GetNumFiles(ADXT adxt)
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 登録されているファイル数
 * [機　能] 登録されているファイル数を取得する。
 *  Get number of entried files
 * [Inputs  ] adxt	: ADXT handle
 * [Outputs ] None
 * [Return  ] Number of Entried Files
 * [Function] Get number of entried files
 */
Sint32 ADXT_GetNumFiles(ADXT adxt);

/*	連結再生の設定　(1:する、0:しない)	*/
void ADXT_SetLnkSw(ADXT adxt, Sint32 sw);

/*	連結再生の取得　(1:する、0:しない)	*/
Sint32 ADXT_GetLnkSw(ADXT adxt);

/*	ファイルの登録をリセット(STOP状態でのみ有効)	*/
void ADXT_ResetEntry(ADXT adxt);

/***
*			振幅抽出機能
***/

/*	振幅取得用作業領域の大きさの計算	*/
Sint32 ADXT_CalcAmpWork(Sint32 maxnch);
/*	振幅取得用作業領域の設定	*/
void ADXT_SetAmpWork(ADXT adxt, void *work, Sint32 wksize);
/*	振幅の取得	*/
Sint32 ADXT_GetAmplitude(ADXT adxt, Sint32 ch);
/*	振幅の取得 (時刻オフセット指定付き)	*/
Sint32 ADXT_GetAmplitude2(ADXT adxt, Sint32 ch, Sint32 msec, Sint32 *msec2);

/*	ヘッダ情報の強制挿入	*/
void ADXT_InsertHdrSfa(ADXT adxt, Sint32 nch, Sint32 sfreq, Sint32 nsmpl);
/*	タイムオフセットの設定	*/
void ADXT_SetTimeOfst(ADXT adxt, Sint32 ofst);

/***
*			Sofdec用拡張関数
***/

/*	V-Sync割り込み用関数			*/
/*	Shinobi環境では、初期化時に割り込みに自動的に登録されるので、		*/
/*	使用しません。Naomi環境でSofdec Movieを再生する場合には、			*/
/*	この関数をV-Sync割り込みから実行してください。						*/
void ADXT_VsyncProc(void);

/*	時刻の単位の設定　(0:Sfreq(Audio), 1:V-Sync(NTSC), 2:V-sync(PAL)	*/
void ADXT_SetTimeMode(Sint32 mode);

/* ADXヘッダの判定 */
Sint32 ADXT_IsHeader(Sint8 *adr, Sint32 siz, Sint32 *hdrsiz);

/* ADX終了コードの判定 */
Sint32 ADXT_IsEndcode(Sint8 *adr, Sint32 siz, Sint32 *endsiz);
/*
	adr   ：終了判定ポインタ(ADXデータの36バイト境界)
	siz   ：終了判定サイズ (判定に必要なサイズは高々数バイト
			かもしれませんが、ファイルリードして、バッファに
			蓄積されているサイズを入力します)
	ndsiz：終了コードサイズ（フッタサイズ）
*/

/* 無音データの強制挿入 */
Sint32 ADXT_InsertSilence(ADXT adxt, Sint32 nch, Sint32 nsmpl);
/*
	nsmpl 　：挿入要求サンプル数 [sample/1ch]
	関数値  ：挿入実行サンプル数 (0 ～ nsmpl)
			  ADXT入力用SJに十分な空きがあれば nsmpl の端数を
			  切り捨てた値が返る。
*/

/*			強制モノラル出力スイッチの設定	
[書  式]	void ADXT_SetOutputMono(Sint32 flag);
[引  数]	Sint32 flag		強制モノラル出力フラグ(OFF:0, ON:1)
[戻り値]	なし					
[機  能]	ステレオデータを強制的にモノラルデータとして出力する。
[備　考]	
*/
void ADXT_SetOutputMono(Sint32 flag);

/***
*		AHX 用関数
*		Functions for AHX
***/

/*	$func$ AHXの組み込み
 * [書　式] void ADXT_AttachAhx(ADXT adxt, void *work, Sint32 worksize);
 * [入　力] adxt	: ADXTハンドル
 *			work	: AHXワーク領域
 *			worksize: AHXワーク領域のサイズ
 * [出　力] なし
 * [関数値] なし
 * [機　能] AHXの組み込みを行い、AHXの利用を可能にする。
 *  Attach AHX
 * [Inputs  ] adxt    : ADXT handle
 *			  work    : Working area for AHX
 *			  worksize: Size of AHX working area(byte)
 * [Outputs ] None
 * [Return  ] None
 * [Function] Attach AHX, Use of AHX is attained.
 */
void ADXT_AttachAhx(ADXT adxt, void *work, Sint32 worksize);

/*	$func$ AHXの分離
 * [書　式] void ADXT_DetachAhx(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] AHXを分離し、AHXの利用をやめる。
 *  Detach AHX
 * [Inputs  ] adxt    : ADXT handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Detach AHX, Unuse of AHX is attained.
 */
void ADXT_DetachAhx(ADXT adxt);

void ADXT_SetKeyString(ADXT adxt, Char8 *str);
void ADXT_SetDefKeyString(Char8 *str);

void ADXT_SetKeyString(ADXT adxt, Char8 *str);
void ADXT_SetDefKeyString(Char8 *str);

/***
*		ADXマネージャ関数
*		ADX Manager Functions
***/

/*	ADXスレッドの初期化					*/
/*	Initialization of ADX Thread 		*/
void ADXM_SetupThrd(ADXM_TPRM *tprm);
/*	ADXスレッドの終了処理				*/
/*	Termination of ADX Thread Extended 	*/
void ADXM_ShutdownThrd(void);

/*	ADXスレッドの初期化(拡張版)				*/
/*	Initialization of ADX Thread Extended 	*/
void ADXM_SetupThrdEx(ADXM_TPRM_EX *tprm);
/*	ADXスレッドの終了処理(拡張版)			*/
/*	Termination of ADX Thread Extended 		*/
void ADXM_ShutdownThrdEx(void);

/*	ユーザVSYNCスレッドへの関数登録				*/
/*	Set callback function on UsrVsync Thread	*/
void ADXM_SetCbUsrVsync(Bool (*func)(void *obj), void *obj);
/*	ユーザアイドルスレッドへの関数登録			*/
/*	Set callback function on UsrIdle Thread		*/
void ADXM_SetCbUsrIdle(Bool (*func)(void *obj), void *obj);
/*	ユーザアイドルサーバの区切り処理						*/
/*	Execution UsrIdle Thread for termination of function	*/
void ADXM_GotoUsrIdleBdr(void);
/*	UsrVsyncサーバ関数の実行	*/
/*	Execution UsrVsync Server	*/
Sint32 ADXM_ExecSvrUsrVsync(void);
/*	UsrIdleサーバ関数の実行		*/
/*	Execution UsrIdle Server	*/
Sint32 ADXM_ExecSvrUsrIdle(void);

/*	エラー関数の登録								*/
void ADXM_SetCbErr(void (*fn)(void *obj, Char8 *emsg), void *obj);
/*	負荷測定用関数	*/
void ADXM_SetCbSleepMwIdle(void (*fn)(void *), void *obj);
/*	スレッド初期化が行われたか否かの判定	*/
Bool ADXM_IsSetupThrd(void);

/*	スレッドのロック	*/
void ADXM_Lock(void);
/*	スレッドのアンロック	*/
void ADXM_Unlock(void);
/* ロックレベルの取得 */
Sint32 ADXM_GetLockLevel(void);

/*	V-Sync待ち関数	*/
void ADXM_WaitVsync(void);

/*	V-Sync割り込みハンドラ	*/
Sint32 ADXM_ExecVint(Sint32 arg);

/*	メインスレッドで呼び出す関数	*/
Sint32 ADXM_ExecMain(void);

/***
*		ADXM_SetupThrdを実行しないときに使用する関数
***/
/*	Vsync毎に呼び出す関数	*/
Sint32 ADXM_ExecSvrVsync(void);
/*	メインループ内で呼び出す関数	*/
Sint32 ADXM_ExecSvrMain(void);
/*	ミドルウェア用スレッドで呼び出す関数	*/
Sint32 ADXM_ExecSvrMwIdle(void);

/*	すべてのサーバ処理を呼び出す関数	*/
Sint32 ADXM_ExecSvrAll(void);

#ifdef __cplusplus
}
#endif

#endif

/* end of file */
#ifndef _CRI_ADXF_H_INCLUDED
#define _CRI_ADXF_H_INCLUDED
/****************************************************************************/
/*																			*/
/*			$title$ ＡＤＸファイルシステム ライブラリ						*/
/*				ADXF (ADX File System) Library */
/*																			*/
/*				1998.7.3		written by S.Hosaka
 */
/*																			*/
/****************************************************************************/

/****************************************************************************/
/*      インクルードファイル */
/*      Include file */
/****************************************************************************/



/****************************************************************************/
/*		定数マクロ
 */
/*		MACRO CONSTANT
 */
/****************************************************************************/

/*	Version number of ADX File System	*/
#define ADXF_VER "6.33"

/*	ファイル名の文字列長				*/
/*	Maximum number of file name strings	*/
#define ADXF_FNAME_MAX (256)

/*	最大パーティション数				*/
/*	Maximum number of partition			*/
#define ADXF_PART_MAX (256)

/*	最大ファイル数						*/
/*	Maximum number of file				*/
#define ADXF_FILE_MAX (65536)

/*	ADXFハンドルオブジェクトの個数		*/
/*	Maximum number of ADXF handle		*/
#define ADXF_OBJ_MAX (16)

/*	ハンドルの状態						*/
/*	Status of handle					*/
#define ADXF_STAT_STOP (1)    /*	停止中						*/
                              /*	During standstill			*/
#define ADXF_STAT_READING (2) /*	データ読み込み中			*/
                              /*	During data read-in			*/
#define ADXF_STAT_READEND (3) /*	データ読み込み終了			*/
                              /*	Data read-in end			*/
#define ADXF_STAT_ERROR (4)   /*	読み込みエラー発生			*/
                              /*	Read-in error outbreak state*/

/*	シークタイプ						*/
/*	Type of seek						*/
#define ADXF_SEEK_SET (0) /*	ファイルの先頭				*/
                          /*	The beginning of file		*/
#define ADXF_SEEK_CUR (1) /*	現在の位置					*/
                          /*	The current position		*/
#define ADXF_SEEK_END (2) /*	ファイルの終端				*/
                          /*	The end of file				*/

/*	エラーコード						*/
/*	Error code							*/
#define ADXF_ERR_OK (0)        /*	正常終了					*/
                               /*	Successful					*/
#define ADXF_ERR_FATAL (-1)    /*	外部のエラー				*/
                               /*	Fatal error					*/
#define ADXF_ERR_INTERNAL (-2) /*	内部のエラー				*/
                               /*	Internal error				*/
#define ADXF_ERR_PRM (-3)      /*	不正なパラメータ			*/
                               /*	Illegal parameter			*/
#define ADXF_ERR_AFS_FILE (-4) /*	不正なAFSファイル			*/
                               /*	Illegal AFS file			*/
#define ADXF_ERR_FSIZE (-5)    /*	ファイルサイズ未取得		*/
                               /*	Cannot get file size yet	*/

/*	既定値								*/
/*	Default value						*/
#define ADXF_DEF_SCT_SIZE (2048) /*	CD-ROMのセクタサイズ		*/
                                 /*	Sector size in CD-ROM		*/
#ifdef __EE__
#define ADXF_DEF_DMA_ALIGN (64) /*	DMAのアライメント			*/
                                /*	Alignment of DMA transfer	*/
#define ADXF_DEF_ALIGN_CALC (0xFFFFFFC0)

#else

#define ADXF_DEF_DMA_ALIGN (32) /*	DMAのアライメント			*/
/*	Alignment of DMA transfer	*/
#define ADXF_DEF_ALIGN_CALC (0xFFFFFFE0)
#endif

#define ADXF_DEF_REQ_RD_SCT (512) /*	リードリクエストサイズ		*/
                                  /*	read request size			*/

/*	デバッグ用	*/
/*	for Debug	*/
// #define	ADXF_CMD_HSTRY_MAX		(256)		/*	コマンド履歴の個数			*/
#define ADXF_CMD_HSTRY_MAX (16) /*	コマンド履歴の個数			*/
                                /*	Number of command history	*/

#define ADXF_CMD_OPEN (1)      /*	ADXF_Open					*/
#define ADXF_CMD_OPEN_AFS (2)  /*	ADXF_OpenAfs				*/
#define ADXF_CMD_CLOSE (3)     /*	ADXF_Close					*/
#define ADXF_CMD_READ_NW32 (4) /*	ADXF_ReadNw32				*/
#define ADXF_CMD_STOP (5)      /*	ADXF_Stop					*/
#define ADXF_CMD_SEEK (6)      /*	ADXF_Seek					*/
#define ADXF_CMD_STOP_NW (7)   /*	ADXF_StopNw					*/

#define ADXF_CMD_NUM_MAX (16)

/****************************************************************************/
/*		列挙定数
 */
/*		Enumarate Constants
 */
/****************************************************************************/

/****************************************************************************/
/*		処理マクロ
 */
/*		Process MACRO
 */
/****************************************************************************/

/*	パーティション情報に必要な領域の計算						*/
/*	Calculation of necessary area for partition information		*/
//	"6"は、adxf_ptinfoのメンバー数(adxf_ptinfo+size+nfile+nentry+type+rev+curdir+ofst)
#define ADXF_PTIF_CMN_SZ ((6 * sizeof(Sint32)) + (ADXF_FNAME_MAX * sizeof(Sint8)))

#define ADXF_CALC_PTINFO_REAL_SIZE(n) (ADXF_PTIF_CMN_SZ + (((n) + 1) * sizeof(Sint16)))

#define ADXF_CALC_PTINFO_SIZE(n) ((ADXF_CALC_PTINFO_REAL_SIZE(n) + sizeof(Sint16)) / 4 * 4)

#define ADXF_CALC_ADD_PTINFO_SIZE(n) (ADXF_PTIF_CMN_SZ + ((n) * (2 * sizeof(Sint16) + sizeof(Sint32))))

/*	ロードパーティション用テンポラリバッファのサイズ計算	*/
/*	Calculation of temporary buffer size for load-partition	*/
#define ADXF_CALC_TMPBUF_SIZE(n) ((((n + 1) * 8) + (ADXF_DEF_SCT_SIZE - 1)) / ADXF_DEF_SCT_SIZE * ADXF_DEF_SCT_SIZE)

/****************************************************************************/
/*		データ型
 */
/*      Data type declaration */
/****************************************************************************/

#ifndef ADXSTM_DEFINED
#define ADXSTM_DEFINED
typedef void *ADXSTM;
#endif

/*	ADXFハンドル		*/
/*	ADXF handle			*/
#ifndef ADXF_DEFINED
#define ADXF_DEFINED
typedef struct _adx_fs {
    Sint8 used;       /*	使用中か否か						*/
    Sint8 stat;       /*	ハンドルの状態						*/
    Sint8 sjflag;     /*	外部から設定されたSJか否か			*/
    Sint8 stopnw_flg; /*	停止要求フラグ						*/
    ADXSTM stm;       /*	ADXSTMハンドル						*/
    SJ sj;            /*	ストリームジョイント				*/
    Sint32 fnsct;     /*	ファイルサイズ(セクタ)				*/
    Sint32 fsize;     /*	ファイルサイズ(バイト)				*/
    Sint32 skpos;     /*	アクセスポインタの位置				*/
    Sint32 rdstpos;   /*	読み込み開始位置					*/
    Sint32 rqsct;     /*	読み込み要求データ量(セクタ)		*/
    Sint32 rdsct;     /*	読み込んだデータ量(セクタ)			*/
    Sint8 *buf;       /*	バッファのアドレス(バイト)			*/
    Sint32 bsize;     /*	バッファのサイズ(バイト)			*/
    Sint32 rqrdsct;   /*	実際に読み込み要求される量(セクタ)	*/
    /*	ADXSTM_OpenRange -> ADXSTM_OpenFileRange(1999.8.19)	*/
    Sint32 ofst; /*	読み込みファイルへのオフセット		*/
                 //	Sint8	fname[ADXF_FNAME_MAX];	/*	ファイル名							*/
    void *dir;
    const Char8 *unk38;
    Sint32 unk3C;
    Sint32 unk40;
} ADX_FS;
typedef ADX_FS *ADXF;
#endif

/*	パーティション情報		*/
/*	Partition information	*/
#ifndef ADXF_PTINFO_DEFINED
#define ADXF_PTINFO_DEFINED
typedef struct _adxf_ptinfo {
    struct _adxf_ptinfo *next; /*	次のパーティション(NULL:オリジナル)	*/
    Sint32 size;               /*	パーティション情報領域サイズ		*/
    Sint32 nfile;              /*	パーティション内のファイル数		*/
    Uint16 nentry;             /*	パーティション内の登録ファイル数	*/
    Sint8 type;                /*	オリジナルか追記かのフラグ			*/
    Sint8 rev;                 /*	予約領域							*/
    /*	ADXSTM_OpenRange -> ADXSTM_OpenFileRange(1999.8.19)	*/
    Sint8 fname[ADXF_FNAME_MAX]; /*	AFSファイル名			*/
    void *curdir;                /*	カレントディレクトリ(NULL:指定なし)	*/
    Sint32 ofst;                 /*	入れ子AFSファイル用					*/
    Sint32 top;                  /*	ファイル情報の先頭					*/
    Sint32 file_sizes[0];
} ADXF_PTINFO;
#endif

/*	追記ファイルの情報				*/
/*	Information of postscript file	*/
#ifndef ADXF_ADD_DEFINED
#define ADXF_ADD_DEFINED
typedef struct _adxf_add_info {
    Uint16 flid;  /*	ファイルID							*/
    Uint16 fnsct; /*	ファイルサイズ						*/
    Sint32 ofst;  /*	オフセット							*/
} ADXF_ADD_INFO;
#endif

#ifndef ADXF_CMD_HSTRY_DEFINED
#define ADXF_CMD_HSTRY_DEFINED
typedef struct _adxf_cmd_hstry {
    Uint8 cmdid;     /*	コマンド(関数)ID					*/
    Uint8 fg;        /*	関数の入り口か出口かを示すフラグ	*/
    Uint16 ncall;    /*	コマンドの呼び出し回数				*/
    intptr_t prm[3]; /*	コマンドパラメータ					*/
} ADXF_CMD_HSTRY;
#endif

/****************************************************************************/
/*		変数宣言
 */
/*		Variable Declaration */
/****************************************************************************/

/****************************************************************************/
/*		関数の宣言
 */
/*      Function Declaration */
/****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*==========================================================================
                ライブラリの初期化と終了処理
                Initialize and Finalize of Library
  ==========================================================================*/

/*  ライブラリの初期化
 * [書　式] void ADXF_Init( void );
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ライブラリを初期化する。
 *  Initialization of library
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Initializes library.
 */
void ADXF_Init(void);

/* ライブラリの終了処理
 * [書　式] void ADXF_Finish(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ライブラリの終了処理をする。
 *  Termination of library
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Finalizes library.
 */
void ADXF_Finish(void);

/*  即時復帰型パーティションのロード
 * [書　式] Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Sint8 *fname,
 * 													void *dir, void
 **ptinfo); [入　力] ptid	:パーティションID fname	:AFSファイルの名前 dir		:ディレクトリ情報
 *(GDFS:GDFS_DIRREC) ptinfo	:パーティション情報読み込み領域 [出　力] なし [関数値] エラーコード [機　能]
 *AFSファイルを読み込んで、パーティションIDに設定する。 Load of the partition(No wait) [Inputs  ] ptid   :Partition ID
 *			  fname  :Name of AFS file
 *            dir	 :Directory information (GDFS:GDFS_DIRREC)
 *            ptinfo :Area of partition information
 * [Outputs ] None
 * [Return  ] Error code
 * [Function] Loads AFS file and sets partition ID.
 */
Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);

/*  即時復帰型パーティションのロード(入れ子AFSファイル)
 * [書　式] Sint32 ADXF_LoadPartitionFromPtNw(Sint32 set_ptid, Sint32 rd_ptid,
 *											Sint32 rd_flid, void *ptinfo);
 * [入　力] set_ptid	:ロードするAFSファイルに対して設定するパーティションID
 *			rd_ptid		:読み込むAFSファイルのパーティションID
 *			rd_flid		:読み込むAFSファイルのファイルID
 *			ptinfo		:パーティション情報読み込み領域
 * [出　力] なし
 * [関数値] エラーコード
 * [機　能] AFSファイル内のAFSファイルを読み込んで、パーティションIDに設定する。
 *  Load of the partition(No wait)(nested AFS file)
 * [Inputs  ] set_ptid   :Partition ID for loading and setting
 *			  rd_ptid 	 :Partition ID reading AFS file
 *            rd_flid	 :File ID reading AFS file
 *            ptinfo :Area of partition information
 * [Outputs ] None
 * [Return  ] Error code
 * [Function] Loads AFS file in AFS file and sets partition ID.
 */
Sint32 ADXF_LoadPartitionFromAfsNw(Sint32 set_ptid, Sint32 rd_ptid, Sint32 rd_flid, void *ptinfo);

/*  即時復帰型パーティションのロード(読み込みバッファを指定する)
 * [書　式] Sint32 ADXF_LoadPtNwEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo,
 *									void *tmpbuf, Sint32 tbsize);
 * [入　力] ptid	:パーティションID
 *			fname	:AFSファイルの名前
 *			dir		:ディレクトリ情報 (GDFS:GDFS_DIRREC)
 *			ptinfo	:パーティション情報読み込み領域
 *			tmpbuf	:AFSファイルヘッダ読み込みバッファ
 *			tbsize	:AFSファイルヘッダ読み込みバッファサイズ
 * [出　力] なし
 * [関数値] エラーコード
 * [機　能] AFSファイルを読み込んで、パーティションIDに設定する。
 *  Load of the partition(No wait)(specify reading buffer)
 * [Inputs  ] ptid		:Partition ID
 *			  fname		:Name of AFS file
 *            dir	 	:Directory information (GDFS:GDFS_DIRREC)
 *            ptinfo	:Area of partition information
 *			  tmpbuf	:Buffer reading AFS file
 *			  tbsize	:Size of buffer reading AFS file
 * [Outputs ] None
 * [Return  ] Error code
 * [Function] Loads AFS file and sets partition ID.
 */
Sint32 ADXF_LoadPtNwEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo, void *tmpbuf, Sint32 tbsize);

/*  即時復帰型パーティションのロード(入れ子AFSファイル)(読み込みバッファを指定する場合)
 * [書　式] Sint32 ADXF_LoadPtFromPtNwEx(Sint32 set_ptid, Sint32 rd_ptid, Sint32 rd_flid,
 *										void *ptinfo, void *tmpbuf, Sint32
 *tbsize); [入　力] set_ptid	:ロードするAFSファイルに対して設定するパーティションID rd_ptid
 *:読み込むAFSファイルのパーティションID rd_flid		:読み込むAFSファイルのファイルID ptinfo
 *:パーティション情報読み込み領域 tmpbuf		:AFSファイルヘッダ読み込みバッファ tbsize
 *:AFSファイルヘッダ読み込みバッファサイズ [出　力] なし [関数値] エラーコード [機　能]
 *AFSファイル名を読み込んで、パーティションIDに設定する。 Load of the partition(No wait)(nested AFS file)(specify
 *reading buffer) [Inputs  ] set_ptid	:Partition ID for loading and setting rd_ptid	:Partition ID reading AFS file
 *            rd_flid	:File ID reading AFS file
 *            ptinfo	:Area of partition information
 *			  tmpbuf	:Buffer reading AFS file
 *			  tbsize	:Size of buffer reading AFS file
 * [Outputs ] None
 * [Return  ] Error code
 * [Function] Loads AFS file and sets partition ID.
 */
Sint32 ADXF_LoadPtFromAfsNwEx(Sint32 set_ptid, Sint32 rd_ptid, Sint32 rd_flid, void *ptinfo, void *tmpbuf,
                              Sint32 tbsize);

/*  パーティション情報の読み込み状態の取得
 * [書　式] Sint32 ADXF_GetPtStat(Sint32 ptid);
 * [入　力] ptid	:パーティションID
 * [出　力] なし
 * [関数値] パーティション情報の読み込み状態
 * [機　能] AFSファイル名を読み込んで、パーティションIDに設定する。
 *  Get partition loading state
 * [Inputs  ] ptid   :Partition ID
 * [Outputs ] None
 * [Return  ] Partition loading state
 * [Function] Gets partition loading state.
 */
Sint32 ADXF_GetPtStat(Sint32 ptid);
Sint32 ADXF_GetPtStatEx(Sint32 ptid);

/*  パーティション情報読み込みの中止
 * [書　式] void ADXF_StopPtLd(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] パーティション情報の読み込みを中止する。
 *  Stop to load partition information
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Stops to load partition information.
 */
void ADXF_StopPtLd(void);

/*  パーティション情報サイズの取得
 * [書　式] Sint32 ADXF_GetPtinfoSize(Sint32 ptid);
 * [入　力] ptid	:パーティションID
 * [出　力] なし
 * [関数値] パーティション情報サイズ(単位：バイト)
 * [機　能] パーティション情報領域のサイズを取得する。
 *  Get size of partition information
 * [Inputs  ] ptid   :Partition ID
 * [Outputs ] None
 * [Return  ] Size of the partition information(byte)
 * [Function] Gets size of the partition information.
 */
Sint32 ADXF_GetPtinfoSize(Sint32 ptid);

/*==========================================================================
                ファイルの読み込み
                Read file
  ==========================================================================*/

/*	ファイルのオープン(ISO9660のファイル)
 * [書　式] ADXF ADXF_Open(Sint8 *fname, void *atr);
 * [入　力] fname	: ファイル名
 *			atr		: ファイルの属性
 * [出　力] なし
 * [関数値] ADXFハンドル、エラーの場合NULL
 * [機　能] 指定のファイルをオープンし、ADXFハンドルを返す。
 *  Open file(ISO9660 format)
 * [Inputs  ] fname  : File name
 *			  atr    : File attribute
 * [Outputs ] None
 * [Return  ] ADXF handle
 *			  (If the operation was unsuccessful, this function returns NULL.)
 * [Function] Opens a file of ISO9660 format.
 */
ADXF ADXF_Open(Char8 *fname, void *atr);

/*	ファイルのオープン(AFSフォーマット)
 * [書　式] ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);
 * [入　力] ptid	: パーティションID
 *			flid	: ファイルID
 * [出　力] なし
 * [関数値] ADXFハンドル、エラーの場合NULL
 * [機　能] パーティションIDとファイルIDで指定されたAFSファイルをオープンし、
 *			ADXFハンドルを返す。
 *  Open file(AFS format)
 * [Inputs  ] ptid   : Partition ID
 *			  flid   : File ID
 * [Outputs ] None
 * [Return  ] ADXF handle
 *			  (If the operation was unsuccessful, this function returns NULL.)
 * [Function] Opens a file of AFS format.
 */
ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);

/* ファイルのクローズ
 * [書　式] void ADXF_Close(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] なし
 * [機　能] 指定されたADXFハンドルのファイルをクローズする。
 *  Close file
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] None
 * [Function] Closes a file of specific ADXF handle.
 */
void ADXF_Close(ADXF adxf);

/* 全てのファイルクローズ
 * [書　式] void ADXF_CloseAll(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] ADXFハンドルのファイルを全てクローズする。
 *  Close file
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Closes all file of ADXF handle.
 */
void ADXF_CloseAll(void);

/*  SJへのデータ読み込み開始
 * [書　式] void ADXF_ReadSj(ADXF adxf, Sint32 nsct, SJ sj);
 * [入　力] adxf	: ADXFハンドル
 *			nsct	: 読み込みデータの量(単位：セクタ)
 *			SJ		: ストリームジョイント
 * [出　力] なし
 * [関数値] 読み込みデータ量(単位：セクタ)
 * [機　能] ストリームジョイントにデータ読み込みのリクエストを発行する。
 *			ストリームジョイントのバッファサイズは、セクタの整数倍でなければ
 *			ならない。
 *			ストリームジョイントからユーザがデータを読み出すと、自動的にストリー
 *			ムジョイントにデータが読み込まれる。
 *			リクエストしたアクセス動作が完了すると、アクセスポインタは
 *			nsctセクタ進む。
 *  Read-in start to Stream Joint
 * [Inputs  ] adxf   : ADXF handle
 *			  nsct   : Number of read-in sectors to request
 *			  SJ     : Stream Joint
 * [Outputs ] None
 * [Return  ] Number of sectors to read
 * [Function] Requests data read-in to Stream Joint.
 *			  Buffer size of Stream Joint must be multiples of integer.
 *			  If you read data from Stream Joint, data are read into Stream
 *			  Joint automatically.
 *			  The access pointer moves 'nsct' sector minute when the request
 *			  was completed.
 */
Sint32 ADXF_ReadSj(ADXF adxf, Sint32 nsct, SJ sj);

/* データの読み込み開始
 * [書　式] void ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);
 * [入　力] adxf	: ADXFハンドル
 *			nsct	: 読み込みデータの量(単位：セクタ)
 *			buf		: 読み込み領域
 * [出　力] なし
 * [関数値] 読み込みデータ量(単位：セクタ)
 * [機　能] データ読み込みのリクエストを発行する。
 *			リクエストしたアクセス動作が完了すると、アクセスポインタは
 *			nsctセクタ進む。
 *  Read-in start
 * [Inputs  ] adxf   : ADXF handle
 *			  nsct   : Number of read-in sectors to request
 *			  buf    : Pointer to buffer into which the data is read
 * [Outputs ] None
 * [Return  ] Number of sectors to read
 * [Function] Requests data read-in to Stream Joint.
 *			  The access pointer moves 'nsct' sector minute when the request
 *			  was completed.
 */
Sint32 ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);

/* データの読み込み中止
 * [書　式] Sint32 ADXF_Stop(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] 中止した時点でのアクセスポインタの位置
 * [機　能] データの読み込みを中止する。
 *  Read-in stop
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] The location of access pointer when you stop to read
 * [Function] Stops to read data.
 */
Sint32 ADXF_Stop(ADXF adxf);

/* データの読み込み中止 (即時復帰)
 * [書　式] Sint32 ADXF_Stop(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] 中止をリクエスト時点でのアクセスポインタの位置
 * [機　能] データの読み込みを中止をリクエストする。
 *			状態はすぐには変らず、読み込みを停止したときにSTOPに変化する
 *  Read-in stop
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] The location of access pointer when you request to stop
 * [Function] Request to Stop.
 */
Sint32 ADXF_StopNw(ADXF adxf);

/* サーバ関数
 * [書　式] void ADXF_ExecServer(void);
 * [入　力] なし
 * [出　力] なし
 * [関数値] なし
 * [機　能] 内部状態を更新する。
 *  Server function
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Update the inside status of library.
 */
void ADXF_ExecServer(void);

/*==========================================================================
                アクセスポインタの制御
                Control access pointer
  ==========================================================================*/

/*  アクセスポインタの移動
 * [書　式] Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);
 * [入　力] adxf	: ADXFハンドル
 *			pos		: アクセスポインタの移動量(単位：セクタ)
 *			type	: 移動基準(シークタイプ：ADXF_SEEK_～)
 * [出　力] なし
 * [関数値] アクセスポインタの位置、負の値はエラーコード
 * [機　能] アクセスポインタをtypeからposセクタ離れた位置に移動させる。
 *  Move access pointer
 * [Inputs  ] adxf   : ADXF handle
 *			  pos    : Offset relative to 'type'
 *			  type   : Specified the origin for the offset
 * [Outputs ] None
 * [Return  ] Location containing new seek pointer
 * [Function] Changes the seek pointer to a new location relative to the
 *			  beginning of the file, to the end of the file, or to the current
 *			  seek pointer.
 */
Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);

/*  アクセスポインタの取得
 * [書　式] Sint32 ADXF_Tell(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] アクセスポインタの位置
 * [機　能] アクセスポインタの位置を取得する。
 *  Get the access pointer
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] Access pointer
 * [Function] Gets the access pointer.
 */
Sint32 ADXF_Tell(ADXF adxf);

/*==========================================================================
                情報の取得
                Get information
  ==========================================================================*/

/*  ファイルサイズの取得
 * [書　式] Sint32 ADXF_GetFsizeSct(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] ファイルサイズ(単位：セクタ)
 * [機　能] 指定されたファイルのサイズをセクタ単位で取得する。
 *  Get file size
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] File size(sector)
 * [Function] Obtains the size of the specified file.
 */
Sint32 ADXF_GetFsizeSct(ADXF adxf);

/*  ファイルサイズの取得
 * [書　式] Sint32 ADXF_GetFsizeByte(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] ファイルサイズ(単位：バイト)
 * [機　能] 指定されたファイルのサイズをバイト単位で取得する。
 *  Get file size
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] File size(byte)
 * [Function] Obtains the size of the specified file.
 */
Sint32 ADXF_GetFsizeByte(ADXF adxf);

/*  読み込み要求情報の取得
 * [書　式] Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] seekpos	: 読み込み位置
 * [関数値] 要求した読み込みデータ量(単位：セクタ)
 * [機　能] 要求した読み込み位置とデータ量を取得する。
 *  Get request information
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] seekpos: location of start to read
 * [Return  ] Request data size(sector)
 * [Function] Obtains read-in start position and the read-in size that
 *			  demanded.
 */
Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos);

/*  実際に読み込んだセクタ数の取得
 * [書　式] Sint32 ADXF_GetNumReadSct(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] 読み込んだデータ量(単位：セクタ)
 * [機　能] 実際に読み込んだデータ量を取得する。
 *  Get the number of sectors read
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] Size of read data(sector)
 * [Function] Obtains the size of data that read actually.
 */
Sint32 ADXF_GetNumReadSct(ADXF adxf);

/*  ハンドルの状態の取得
 * [書　式] Sint32 ADXF_GetStat(ADXF adxf);
 * [入　力] adxf	: ADXFハンドル
 * [出　力] なし
 * [関数値] ADXFハンドルの内部状態(状態：ADXF_STAT_～)
 * [機　能] ADXFハンドルの内部状態を取得する。
 *  Get status of handle
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] Status of handle
 * [Function] Gets status of handle.
 */
Sint32 ADXF_GetStat(ADXF adxf);

Sint32 ADXF_GetFnameRange(Sint32 ptid, Sint32 flid, Char8 *fname, Sint32 *ofst, Sint32 *fnsct);

Sint32 ADXF_GetFnameRangeEx(Sint32 ptid, Sint32 flid, Char8 *fname, void **dir, Sint32 *ofst, Sint32 *fnsct);

/*　リードリクエストのサイズの設定
 * [書　式] void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);
 * [入　力] adxf    ; ADXFハンドル
 *			nsct    ; セクタ数
 * [出　力] なし
 * [関数値] なし
 * [機　能] 一回に読み込むサイズを設定します。
 *  Set size of read request
 * [Inputs  ] adxf   : ADXF handle
 *			  nsct   : size(sector)
 * [Outputs ] None
 * [Return  ] None
 * [Function] Sets size of read request(one time).
 */
void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);

/*	ファイル読み込みステータスの取得
 * [書　式] Sint32 ADXT_GetStatRead(ADXT adxt);
 * [入　力] adxt	: ADXTハンドル
 * [出　力] なし
 * [関数値] 1=読み込み中、0=読み込み停止中
 * [機　能] 読み込み状態を取得する
 *  Get status of data reading
 * [Inputs  ] adxf   : ADXF handle
 * [Outputs ] None
 * [Return  ] 1=Data reading in progress,  0=Data reading stopped
 * [Function] Gets status of data reading
 */
Sint32 ADXF_GetStatRead(ADXF adxf);

/*==========================================================================
                ROFS用
                for ROFS
  ==========================================================================*/

/* 最大文字数 */
#define ADXF_ROFS_VOLNAME_LEN (8)                         /* ボリューム名の文字列長 */
#define ADXF_ROFS_VOLNAME_SIZ (ADXF_ROFS_VOLNAME_LEN + 1) /* 文字列サイズ */
#define ADXF_ROFS_FNAME_LEN (31)                          /* ファイル名の文字列長 */
#define ADXF_ROFS_FNAME_SIZ (ADXF_ROFS_FNAME_LEN + 1)     /* 文字列サイズ */
#define ADXF_ROFS_DIRNAME_LEN (31)                        /* ディレクトリ名の文字列長 */
#define ADXF_RPFS_DIRNAME_SIZ (ADXF_ROFS_DIRNAME_LEN + 1) /* 文字列サイズ */

/* ライブラリ作業領域サイズ */
#define ADXF_CALC_LIBWORK_SIZ(max_open, max_volume, max_dirent)                                                        \
    (sizeof(ADXF_ROFS_WK) + ((max_open) + 1) * sizeof(ADXF_ROFS_OBJ) +                                                 \
     (ADXF_CALC_DIRREC_SIZ(max_dirent) + sizeof(ADXF_ROFS_VOL)) * ((max_volume) + 1))

/* ディレクトリレコード領域サイズ */
#define ADXF_CALC_DIRREC_SIZ(n_dirent)                                                                                 \
    (sizeof(ADXF_ROFS_DIRREC) - sizeof(ADXF_ROFS_DIRRECENT) + (n_dirent) * sizeof(ADXF_ROFS_DIRRECENT))

/* ワーク領域 */
typedef struct ADXF_ROFS_STWK ADXF_ROFS_WK;

/* プリミティブ関数 */
typedef struct ADXF_ROFS_PFSIFTBL ADXF_ROFS_PFSTBL;

/* デバイスコントロール関数 */
typedef struct ADXF_ROFS_DEVIFTBLE ADXF_ROFS_DEVTBL;

/* ライブラリインターフェース */
typedef struct ADXF_ROFS_LIBIFTBLE ADXF_ROFS_LIFTBL;

/* ディレクトリレコードエントリ */
typedef struct {
    Sint32 fad;                       /* fad */
    Sint32 fsize;                     /* file size */
    Uint8 flag;                       /* file attribute */
    Uint8 sid;                        /* filename search id */
    Char8 fname[ADXF_ROFS_FNAME_SIZ]; /* filename */
    Uint8 pad[6];
} ADXF_ROFS_DIRRECENT; /* 48 bytes */

/* ディレクトリレコード */
typedef struct {
    Sint32 dir_num;                     /* number of record */
    Sint32 max_ent;                     /* max entry of directory record */
    Sint32 dir_fad;                     /* fad of directory record */
    Char8 volname[ADXF_ROFS_FNAME_SIZ]; /* volume name */
    Sint32 pad;                         /* padding */
    ADXF_ROFS_DIRRECENT dirrec_tbl[1];  /* record table */
} ADXF_ROFS_DIRREC;
typedef ADXF_ROFS_DIRREC *ADXF_ROFS_DIRRECBUF;

/* ボリューム管理構造体 */
typedef struct {
    Char8 volname[ADXF_ROFS_VOLNAME_SIZ]; /* ボリューム名 */
    void *img_hn;                         /* イメージファイルのファイルハンドル */
    Sint32 zisb;                          /* ZONE0イメージデータ開始位置 */
    Sint32 ptbl_cba;                      /* cba of path table */
    Sint32 ptbl_size;                     /* size of path table */
    ADXF_ROFS_DIRRECBUF curdir;           /* current directory handle */
} ADXF_ROFS_VOL;

/* ROFS File Handle */
typedef struct {
    ADXF_ROFS_WK *wk;   /* pointer of lib work */
    Sint32 fid;         /* file id */
    Sint32 fad;         /* fad */
    Sint32 ofs;         /* offset */
    Sint32 fsize;       /* file size */
    Sint32 fsctsize;    /* sctor size of the file */
    ADXF_ROFS_VOL *vol; /* image file volume */
    Sint32 rsize;       /* reading size */
    Sint32 trns_seg;    /* 転送済ブロック単位 */
    Sint32 trns_ofs;    /* 転送済バイト単位 */
    Sint32 trns_unit;   /* 転送単位(ブロック) */
    Uint8 *rdadr;       /* 読み込みアドレス */
    Sint16 used;        /* used flag */
    Sint16 act;         /* handle act */
    Sint16 stat;        /* handle status(ADXF_Stat) */
    Sint16 err;         /* error status */
} ADXF_ROFS_OBJ;
typedef ADXF_ROFS_OBJ *ADXF_ROFS;

/* ROFS Work Area */
struct ADXF_ROFS_STWK {
    Bool f_init;     /* 初期化フラグ */
    Sint32 max_open; /* max open files */
    Sint32 max_volume;
    Sint32 max_dirent;
    Uint32 exec_server_cnt;                          /* counter */
    ADXF_ROFS syshdl;                                /* handle for system command */
    ADXF_ROFS hndtbl;                                /* handle */
    ADXF_ROFS_VOL *vollist;                          /* ボリューム情報リスト */
    ADXF_ROFS_VOL *curvol;                           /* カレントボリューム情報 */
    ADXF_ROFS_DIRRECBUF dirbuf;                      /* ディレクトリレコードの開始位置 */
    ADXF_ROFS_PFSTBL *pfs;                           /* プリミティブ関数 */
    ADXF_ROFS_DEVTBL *dev;                           /* デバイスコントロール関数 */
    ADXF_ROFS_LIFTBL *liftbl;                        /* ライブラリインターフェース */
    void (*g_errcb)(void *, Char8 *, Sint32);        /* error callback */
    void *g_errcb_1st;                               /* error callback 1st arg. */
    Uint32 sctbuf[(ADXF_DEF_SCT_SIZE * 2 + 64) / 4]; /* sector buffer */
    ADXF_ROFS_OBJ hndlist[1];                        /* handle table */
}; /* 64 + 4160 + handles */

/* ROFSセットアップ構造体  */
#ifndef ADXF_SPRM_ROFS_DEFINED
#define ADXF_SPRM_ROFS_DEFINED
typedef struct {
    Sint32 max_open;   /* 同時にオープンできる最大ファイル数 */
    Sint32 max_volume; /* 同時に登録できる最大ボリューム数 */
    Sint32 max_dirent; /* ディレクトリに格納する最大ファイル数 */
    void *rofs_work;   /* ライブラリ作業領域の先頭アドレス */
} ADXF_SPRM_ROFS;
#endif

/* ROFSのセットアップ	*/
/* Setup ROFS			*/
void ADXF_SetupRofs(void *sprmr);

/* ROFSのシャットダウン */
/* Shutdown ROFS		*/
void ADXF_ShutdownRofs(void);

/* ROFSボリュームの追加		*/
/* Addition of ROFS volume  */
Sint32 ADXF_AddRofsVol(Char8 *volname, Char8 *imgname);

/* ROFSボリュームの削除 */
/* Delete ROFS volume	*/
void ADXF_DelRofsVol(Char8 *volname);

/* ROFSボリューム名であるか否か */
/* Check ROFS volume name		*/
Bool ADXF_IsRofsVol(Char8 *volname);

/* デフォルトデバイスの設定 */
/* Setting default device	*/
void ADXF_SetDefDev(Char8 *volname);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _CRI_ADXF_H_INCLUDED */
/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2001,2002 CRI-MW
 *
 * Library  : MWSFD Library (CRI Sofdec)
 * Module   : Library User's Header
 * File     : crimwsfd.h
 * Date     : 2002-10-15
 * Version  : 2.31
 *
 ****************************************************************************/
#ifndef	INCLUDED_CRIMWSFD_H		/* Re-definition prevention */
#define	INCLUDED_CRIMWSFD_H

/*	Version No.	*/
#define	MWD_SFD_VER	"2.31"

/***************************************************************************
 *      Include file
 ***************************************************************************/

/***************************************************************************
 *      MACRO CONSTANT
 ***************************************************************************/
/* �����������g��  */
/* Vsync frequency */
#define MWSFD_VHZ_59_94		(59.94f)
#define MWSFD_VHZ_50_00		(50.00f)
#define MWSFD_VHZ_60_00		(60.00f)

/* �t�@�C���^�C�v		*/
/* File type			*/
#define	MWSFD_FTYPE_NON			(0)
#define	MWSFD_FTYPE_SFD			(1)
#define	MWSFD_FTYPE_MPV			(2)
#define MWSFD_FTYPE_VONLYSFD	(3)

/* �������[�h		*/
/* Composition Mode	*/
#define MWSFD_COMPO_AUTO		(0x00000000)	/* ����						*/
												/* Auto						*/
#define MWSFD_COMPO_OPAQ		(0x00000011)	/* �s����					*/
												/* opacity					*/
#define MWSFD_COMPO_ALPHFULL	(0x00000021)	/* �t��Alpha����			*/
												/* Full Alpha				*/
#define	MWSFD_COMPO_ALPHLUMI	(0x00000031)	/* ���~�i���X�L�[���� 		*/
												/* Luminance key alpha		*/
#define	MWSFD_COMPO_ALPH3		(0x00000041)	/* 3�l�A���t�@ 				*/
												/* 3-value alpha			*/
#define MWSFD_COMPO_Z			(0x00000101)	/* �y�l						*/
												/* Z value					*/

/* �������[�h	*/
/* Sync Mode	*/
#define MWSFD_SYNCMODE_NONE		(0)		/* ������		*/ /* No sync		*/
#define MWSFD_SYNCMODE_VSYNC	(1)		/* V-Sync����	*/ /* Sync Vint		*/
#define MWSFD_SYNCMODE_AUDIO	(2)		/* Audio ����	*/ /* Sync Audio	*/

/* Audio Volume MAX, MIN */
#define	MWSFD_OUTVOL_MAX		(0)		/* MAX Volume */
#define	MWSFD_OUTVOL_MIN		(-960)	/* MIN Volume */

/* Audio Channel	*/
#define MWSFD_CH_L				(0)		/* Left		*/
#define MWSFD_CH_R				(1)		/* Right	*/

/*	Panpot Value				*/
#define	MWSFD_PAN_LEFT			(-15)
#define	MWSFD_PAN_CENTER		(0)
#define	MWSFD_PAN_RIGHT			(15)
#define	MWSFD_PAN_AUTO			(-128)

/* �o�̓o�b�t�@���̃f�t�H���g�l 	*/
/* Default value of out-buffer size	*/
#define MWSFD_DFL_OUTBUFSIZE		(0)

/* �t���[���p�����[�^�̃o�b�t�@�ő吔	*/
/* Buffer max num of frame parameter	*/
#define MWSFD_FRMPRM_BUF_MAX		(4)


/* [for Compatibility] */
#define	MWD_PLY_FTYPE_NON		MWSFD_FTYPE_NON
#define	MWD_PLY_FTYPE_SFD		MWSFD_FTYPE_SFD
#define	MWD_PLY_FTYPE_MPV		MWSFD_FTYPE_MPV
#define MWD_PLY_COMPO_OPEQ		MWSFD_COMPO_OPAQ
#define MWD_PLY_SYNC_NONE		MWSFD_SYNCMODE_NONE
#define MWD_PLY_SYNC_VSYNC		MWSFD_SYNCMODE_VSYNC
#define MWD_PLY_SYNC_AUDIO		MWSFD_SYNCMODE_AUDIO
#define MWD_CH_L				MWSFD_CH_L
#define MWD_CH_R				MWSFD_CH_R
#define	MWD_PAN_LEFT			MWSFD_PAN_LEFT
#define	MWD_PAN_CENTER			MWSFD_PAN_CENTER
#define	MWD_PAN_RIGHT			MWSFD_PAN_RIGHT
#define	MWD_PAN_AUTO			MWSFD_PAN_AUTO

/***************************************************************************
 *      Process MACRO
 ***************************************************************************/
/* Convert mwGetTime()'s return-value to second	*/
#define	MWSFD_TIME2SEC(ncount, tscale)		((ncount) / (tscale))

/* Convert mwGetTime()'s return-value to milli-second	*/
#define	MWSFD_TIME2MSEC(ncount, tscale)	((1000 * (ncount)) / (tscale))

/* [for Compatibility] */
#define	MWD_PLY_TIME2SEC(ncount, tscale)	MWSFD_TIME2SEC((ncount), (tscale))
#define	MWD_PLY_TIME2MSEC(ncount, tscale)	MWSFD_TIME2MSEC((ncount), (tscale))

/***************************************************************************
 *      Enum declaration
 ***************************************************************************/
/*	Status of MWPLY handles		*/
typedef	enum {
	MWSFD_STAT_STOP			= 0,		/*	stoped						*/
	MWSFD_STAT_PREP			= 1,		/*	preparing					*/
	MWSFD_STAT_PLAYING		= 2,		/*	playing						*/
	MWSFD_STAT_PLAYEND		= 3,		/*	end of playing				*/
	MWSFD_STAT_ERROR		= 4,		/*	error was occured			*/

	/* [for Compatibility] */
	MWE_PLY_STAT_STOP		= 0,		/*	stoped						*/
	MWE_PLY_STAT_PREP		= 1,		/*	preparing					*/
	MWE_PLY_STAT_PLAYING	= 2,		/*	playing						*/
	MWE_PLY_STAT_PLAYEND	= 3,		/*	end of playing				*/
	MWE_PLY_STAT_ERROR		= 4,		/*	error was occured			*/

	MWSFD_STAT_END
} MwsfdStat, MWE_PLY_STAT;

/* �f�R�[�h�T�[�o */
/* Decode Server  */
typedef enum {
	MWSFD_DEC_SVR_IDLE		= 0,	/* ���C���̗]�莞�ԂŃf�R�[�h����B */
									/* Decode in idel thread            */
	MWSFD_DEC_SVR_MAIN		= 1,	/* ���C���������Ńf�R�[�h����B		*/
									/* Decode in main thread            */

	MWSFD_DEC_SVR_END
} MwsfdDecSvr;

/* �f�R�[�h���ʃo�b�t�@�f�[�^�`��	*/
/* Decoder's output buffer data format	*/
typedef enum {
    MWSFD_BUFFMT_DEFAULT		= 0,	/* Default format		*/
    MWSFD_BUFFMT_MB_YCC420		= 1,	/* YCC 4:2:0 Macroblock */
    MWSFD_BUFFMT_MB_ARGB8888	= 2,	/* RGB 32bit Macroblock */
    MWSFD_BUFFMT_PLN_YCC420		= 3,	/* YCC 4:2:0 Plane      */
	/* [for Compatibility] */
    MWE_PLY_BUFFMT_MB_YCC420    = 1,	/* YCC 4:2:0 Macroblock */
    MWE_PLY_BUFFMT_MB_ARGB8888  = 2,	/* RGB 32bit Macroblock */
    MWE_PLY_BUFFMT_PLN_YCC420   = 3,	/* YCC 4:2:0 Plane      */
    MWSFD_BUFFMT_END
} MwsfdBufFmt, MWE_PLY_BUFFMT;

/* �s�N�`���^�C�v	*/
/* Picture type		*/
typedef enum {
    MWSFD_PTYPE_I			= 1,	/* I Picture */
    MWSFD_PTYPE_P			= 2,	/* P Picture */
    MWSFD_PTYPE_B			= 3,	/* B Picture */
    MWSFD_PTYPE_D			= 4,	/* D Picture */
	/* [for Compatibility] */
    MWE_PLY_PTYPE_I			= 1,	/* I Picture */
    MWE_PLY_PTYPE_P			= 2,	/* P Picture */
    MWE_PLY_PTYPE_B			= 3,	/* B Picture */
    MWE_PLY_PTYPE_D			= 4,	/* D Picture */
    MWSFD_PTYPE_END
} MwsfdPtype, MWE_PLY_PTYPE;

/* �t���[���擾�������[�h			*/
/* Sync mode of mwPlyGetCurFrm()	*/
typedef enum {
	MWSFD_FRMSYNC_TIME		= 0,	/* Sync with time	*/
	MWSFD_FRMSYNC_NONE		= 1,	/* No sync			*/

	MWSFD_FRMSYNC_END
} MwsfdFrmSync;

/* ���~�i���X�����̓��߃L�[				*/
/* Luminance alpha's transparence key	*/
typedef enum {
	MWSFD_LUMIKEY_BLACK		= 0,	/* Black key transparence */
	MWSFD_LUMIKEY_WHITE		= 1,	/* White key transparence */

	MWSFD_LUMIKEY_END
} MwsfdLumiKey;

/* �t���[���t�H�[�}�b�g	*/
/* Frame Format			*/
typedef enum {
	MWSFD_FRMFMT_I_YCC420PLN	= 1, 	/* YCC420 Plane	*/

	MWSFD_FRMFMT_O_ARGB8888		= 101,	/* ARGB8888 	*/
	MWSFD_FRMFMT_O_YCC422		= 102,	/* YCC422 		*/
	MWSFD_FRMFMT_O_Y84C44		= 103,	/* Y8x4, C4x4	*/

    MWSFD_FRMFMT_END
} MwsfdFrmFmt;

/***************************************************************************
 *      Data type declaration
 ***************************************************************************/
/*	MWPLY handle	*/
#ifndef MWPLY_DEFINED
#define MWPLY_DEFINED

/*	Virtual function table	*/
typedef struct {
	struct MwsfdIf *vtbl;
} MW_PLY_OBJ;
typedef MW_PLY_OBJ *MWPLY;
#endif

/*	MWPLY Interface function  	*/
typedef struct MwsfdIf{
	void (*QueryInterface)();		/*	for COM compatibility	*/
	void (*AddRef)();				/*	for COM compatibility	*/
	void (*Release)();				/*	for COM compatibility	*/
	/*== Functions of MWPLY	====================================*/ 
	/*	V-sync function 										*/
	/*	This function is called by user while v-sync interrupt.	*/
	void (*VsyncHndl)(MWPLY mwply);
	/*	execute decoding one frame								*/
	/*	This function is called by user from main-loop.			*/ 
	Bool (*ExecSvrHndl)(MWPLY mwply);
	/*	destroy MWPLY handle									*/
	void (*Destroy)(MWPLY mwply);
	/*	start playback by file name 							*/
	void (*StartFname)(MWPLY mwply, Char8 *fname);
	/*	stop playback  											*/
	void (*Stop)(MWPLY mwply);
	/*	get status of MWPLY handle								*/
	MwsfdStat (*GetStat)(MWPLY mwply);
	/*	get playing time										*/
	/*	if playing movie is 30 fps, *tscale is 30 and 			*/
	/*		*ncount is total number of displayed frames			*/ 
	void (*GetTime)(MWPLY mwply, Sint32 *ncount, Sint32 *tscale);
	/*	Set pause switch.  sw=0(Continue), 1(Pause)				*/
	void (*Pause)(MWPLY mwply, Sint32 sw);
	/*	Set Output Volume (vol= 0 to -960)						*/
	void (*SetOutVol)(MWPLY mwply, Sint32 vol);
	/*	Get Output Volume (return value= 0 to -960)				*/
	Sint32 (*GetOutVol)(MWPLY mwply);
	/*	Set output panpot chno=0(Mono/Left),1(Right)			*/
	/*	pan = +15(Right),0(Center),-15(Left),-128(Auto)			*/
	void (*SetOutPan)(MWPLY mwply, Sint32 chno, Sint32 pan);
	/*	Get output panpot chno=0(Mono/Left),1(Right)			*/
	Sint32 (*GetOutPan)(MWPLY mwply, Sint32 chno);
	/*	start playing by stream joint							*/
	void (*StartSj)(MWPLY mwply, SJ sji);
	/*	start playing by memory									*/
	void (*StartMem)(MWPLY mwply, void *addr, Sint32 len);
} MwsfdIf;

/* Sofdec�̏������p�����[�^�\����							*/
/* Parameter structure of Sofdec initialization function	*/
typedef struct {
	Float32		vhz;			/* �����������g��[Hz]						*/
								/* Vsync frequency[Hz]						*/
	Sint32		disp_cycle;		/* �\���X�V����[v]				 			*/
								/* Display update cycle[v]					*/
	Sint32		disp_latency;	/* �\�����C�e���V[v]						*/
								/* Display latency[v]						*/
	MwsfdDecSvr	dec_svr;		/* �f�R�[�h�T�[�o				 			*/
								/* Decode Server							*/
	Sint32		rsv[4];			/* �\�� (�S��0��ݒ肵�ĉ�����) 			*/
								/* Reserved(Please set 0 in all of area)	*/
} MwsfdInitPrm, MWS_PLY_INIT_SFD;

/* �n���h�������p�����[�^�\����				*/
/* Parameter structure of handle creation	*/
typedef struct {
	Sint32	ftype;				/* �Đ�����X�g���[���̎�� 				*/
								/* File type								*/
	Sint32	max_bps;			/* �ő�̃r�b�g�X�g���[���ʁ@(bit/sec)		*/
								/* Maximum number of bit per second			*/
	Sint32	max_width;			/* �Đ��摜�T�C�Y�̍ő啝					*/
								/* Maximum width of video stream			*/
	Sint32	max_height;			/* �Đ��摜�T�C�Y�̍ő卂��					*/
								/* Maximum height of video stream			*/
	Sint32	nfrm_pool_wk;		/* �V�X�e���̈�̃t���[���v�[�����i�ʏ�3)	*/
								/* �t���[�����������������ꍇ�́A���̒l��	*/
								/* ���₵�Ă��������B						*/
								/* Number of frame pools in system memory.	*/
								/* Normaly this number is 3. If frame is 	*/
								/* droped,you have to increase this number.*/
	Sint32	max_stm;			/* �����ǂݍ��݃X�g���[����(ADX�܂�)		*/
								/* �l��0�̏ꍇ�̓f�t�H���g�l(1)�Ƃ݂Ȃ��B	*/
								/* The number of maximum streams playing 	*/
								/* at the same time. 						*/
								/* This number include ADXT/ADXF streams.	*/
								/* If the value is zero then assume 1.		*/
	Sint8	*work;				/* ���[�N�̈�								*/
								/* Address of working area					*/
	Sint32	wksize;				/* ���[�N�̈�T�C�Y							*/
								/* Size of working area						*/
	Sint32  compo_mode;			/* �������[�h								*/
								/* Composition mode							*/
	MwsfdBufFmt		buffmt;		/* �f�R�[�h�o�̓t���[���o�b�t�@�f�[�^�`��	*/
								/* �l��0�̏ꍇ�̓f�t�H���g�`���Ƃ݂Ȃ��B	*/
								/* Buffer format of decoder	output			*/
								/* If the value is 0 then assume defualt.	*/
	Sint32	rsv[2];				/* �\�� (�S��0��ݒ肵�ĉ�����) 			*/
								/* Reserved(Please set 0 in all of area)	*/
} MwsfdCrePrm, MWS_PLY_CPRM_SFD;

/* �t���[�����\���� */
/* Frame Information  */
typedef struct {
	Uint8			*bufadr;			/* �f�R�[�h���ʃo�b�t�@�A�h���X		*/
										/* Decoder's output buffer address	*/
	MwsfdBufFmt		buffmt;				/* �f�R�[�h���ʃo�b�t�@�f�[�^�`��	*/
										/* Decoder's output buffer format	*/
	Sint32			width;				/* ���s�N�Z����						*/
										/* Width by the pixel				*/
	Sint32			height;				/* �c�s�N�Z����						*/
										/* Height by the pixel				*/
	Sint32			x_mb;				/* ���}�N���u���b�N��				*/
										/* Width by the macroblock			*/
	Sint32			y_mb;				/* �c�}�N���u���b�N��				*/
										/* Height by the macroblock			*/
	MwsfdPtype		ptype;				/* �s�N�`���^�C�v					*/
										/* Picture type						*/
	Sint32			fps;				/* �t���[�����[�g[fps * 1000]		*/
										/* Frame rate [fps * 1000]			*/
	Sint32			fno;				/* �t���[���ԍ�						*/
										/* Count of frames					*/
	Sint32			time;				/* �\������							*/
										/* Time of disp						*/
	Sint32			tunit;				/* �\�������P��						*/
										/* Unit of display time				*/
	Sint32			concat_cnt;			/* �A��������						*/
										/* Count of concatenation			*/
	Sint32			fno_per_file;		/* �t�@�C�����̃t���[���ԍ�			*/
										/* Count of frames per file			*/
	Sint32			time_per_file;		/* �t�@�C�����̍Đ�����				*/
										/* Playtime per file				*/
	Sint32			errcnt;				/* �f�[�^�G���[������				*/
										/* Count of data error				*/
	Sint32			rcvcnt;				/* �f�[�^�G���[�񕜉�				*/
										/* Count of error recovery			*/
} MwsfdFrmObj, MWS_PLY_FRM;

/* �Đ����\���� 		*/
/* Playback information	*/
typedef struct {
	Sint32	drop_frm_cnt;		/* Count of drop frame 						*/
	Sint32	skip_dec_cnt;		/* Count of skip decode						*/
	Sint32	skip_disp_cnt;		/* Count of skip frame was not obtatined	*/
	Sint32	skip_emptyb_cnt;	/* Count of skip empty-Bpicture 			*/
	Sint32	no_supply_cnt;		/* Count of data supply shortage			*/
} MwsfdPlyInf;

/* �t�@�C���w�b�_���		*/
/* File header information	*/
typedef struct {
	Bool		playable;		/* TRUE: playable, FALSE: not playable	*/
	Sint32		ftype;			/* File type (MWSFD_FTYPE_ )			*/
	Sint32		width;			/* Width by the pixel					*/
	Sint32		height;			/* Height by the pixel					*/
	Sint32		fps;			/* Frame rate [fps * 1000]				*/
	Sint32		a_sfreq;		/* Audio: sampling freqency 			*/
	Sint32		a_nch;			/* Audio: number of channel 			*/
	Sint32		frmnum;			/* Total video frames					*/
} MwsfdHdrInf;

/* YCbCr�v���[�����\���� */
/* YCbCr Plane Information */
typedef struct {
	Uint8 		*y_ptr;		/* Y  Buffer Pointer */
	Uint8 		*cb_ptr;	/* Cb Buffer Pointer */
	Uint8 		*cr_ptr;	/* Cr Buffer Pointer */
	Sint32		y_width;	/* Y  Buffer width   */
	Sint32		cb_width;	/* Cb Buffer width   */
	Sint32		cr_width;	/* Cr Buffer width   */
} MwsfdYccPlane, MWS_PLY_YCC_PLANE;

/* �t���[���p�����[�^�\����		*/
/* Frame Parameter structure 	*/
typedef struct {
	MwsfdFrmFmt	frmfmt;						/* Frame format		*/
	Sint32		width;						/* Buffer width 	*/
	Sint32		height;						/* Buffer height 	*/
	Sint32		rsv;						/* Reserved			*/
	Uint8		*buf[MWSFD_FRMPRM_BUF_MAX];	/* Buffer address 	*/
} MwsfdFrmPrm;

/*	Malloc Function	*/
typedef void *(*MwsfdMallocFn)(void *obj, Uint32 size);

/*	Free Function	*/
typedef void (*MwsfdFreeFn)(void *obj, void *ptr);

/***************************************************************************
 *      Function Declaration
 ***************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/*=========================================================================*
 *		��{�Đ�����
 *      Basic functions
 *=========================================================================*/
/* MWSFD(Sofdec)���C�u�����̏�����	*/
/* Initialization of Sofdec library	*/
void mwPlyInitSfdFx(MwsfdInitPrm *iprm);

/* MWSFD(Sofdec)���C�u�����̏I��	*/
/* Termination of Sofdec library 	*/
void mwPlyFinishSfdFx(void);

/* ��Ɨ̈�T�C�Y�̌v�Z										*/
/* Calculation of working area size from create parameter	*/
Sint32 mwPlyCalcWorkCprmSfd(MwsfdCrePrm *cprm);

/* MWSFD�n���h���̐���				*/
/* Create MWPLY handle for Sofdec	*/
MWPLY mwPlyCreateSofdec(MwsfdCrePrm *cprm);

/* �Đ��n���h���̏���						*/
/* Destroy MWPLY handle						*/
/* [MwsfdIf] void mwPlyDestroy(MWPLY mwply); */
#define mwPlyDestroy(mwply)		(*(mwply)->vtbl->Destroy)((mwply))

/* �Đ��J�n�i�t�@�C������̍Đ��j								*/
/* Start playing by file name 									*/
/* [MwsfdIf] void mwPlyStartFname(MWPLY mwply, Char8 *fname);	*/
#define mwPlyStartFname(mwply, fname)	(*(mwply)->vtbl->StartFname)((mwply), (fname))

/* �Đ���~									*/
/* Stop playing  							*/
/* [MwsfdIf] void mwPlyStop(MWPLY mwply);	*/
#define mwPlyStop(mwply)	(*(mwply)->vtbl->Stop)((mwply))

/* �|�[�Y�^�|�[�Y����									*/
/* Set pause switch.  sw=0(Continue), 1(Pause)			*/
/* [MwsfdIf] void mwPlyPause(MWPLY mwply, Sint32 sw);	*/
#define	mwPlyPause(mwply, sw)	(*(mwply)->vtbl->Pause)((mwply), (sw))

/* �n���h����Ԃ̎擾								*/
/* Get status of MWPLY handle						*/
/* [MwsfdIf] MwsfdStat mwPlyGetStat(MWPLY mwply);	*/
#define mwPlyGetStat(mwply)		(*(mwply)->vtbl->GetStat)((mwply))

/* �Đ��T���v�����̎擾														*/
/* Get playing time															*/
/* If playing movie is 30 fps, *tscale is 30 and *ncount is total number of */
/*  displayed frames														*/
/* [MwsfdIf] void mwPlyGetTime(MWPLY mwply, Sint32 *ncount, Sint32 *tscale);	*/
#define mwPlyGetTime(mwply, ncount, tscale)	\
							(*(mwply)->vtbl->GetTime)((mwply), (ncount), (tscale))

/* �t���[���̎擾           */
/* Get frame buffer pointer */
void mwPlyGetCurFrm(MWPLY mwply, MwsfdFrmObj *frm);

/* �t���[���̉�� 			*/
/* Release frame buffer		*/
void mwPlyRelCurFrm(MWPLY mwply);

/* �A�C�h���X���b�h�ւ̐ؑ� 	*/
/* Switch to Idle Thread 		*/
void mwPlySwitchToIdle(void);

/*=========================================================================*
 *		�I�[�f�B�I�ݒ�
 *      Set audio option
 *=========================================================================*/
/* �I�[�f�B�I�X�g���[���`���l���̐ݒ�	*/
/* Set audio stream channel 			*/
void mwPlySetAudioCh(MWPLY mwply, Sint32 ch);

/* �����o�̓X�C�b�`�̐ݒ�			*/
/* Set audio output switch			*/
void mwPlySetAudioSw(MWPLY mwply, Sint32 sw);

/* �I�[�f�B�I�o�̓{�����[���̐ݒ�							*/
/* Set Output Volume (vol= 0 to -960)						*/
/* [MwsfdIf] void mwPlySetOutVol(MWPLY mwply, Sint32 vol);	*/
#define mwPlySetOutVol(mwply, vol)		(*(mwply)->vtbl->SetOutVol)((mwply), (vol))

/* �I�[�f�B�I�o�̓{�����[���̎擾				*/
/* Get Output Volume (return value= 0 to -960)	*/
/* [MwsfdIf] Sint32 mwPlyGetOutVol(MWPLY mwply);	*/
#define mwPlyGetOutVol(mwply)			(*(mwply)->vtbl->GetOutVol)((mwply))

/* �I�[�f�B�I�o�̓p���|�b�g�̐ݒ�										*/
/* Set output panpot c=0(Mono/Left),1(Right)							*/
/* p = +15(Right),0(Center),-15(Left),-128(Auto)						*/
/* [MwsfdIf] void mwPlySetOutPan(MWPLY mwply, Sint32 chno, Sint32 pan);	*/
#define mwPlySetOutPan(mwply, c, p)		(*(mwply)->vtbl->SetOutPan)((mwply), (c), (p))

/* �I�[�f�B�I�o�̓p���|�b�g�̎擾								*/
/* Get output panpot c=0(Mono/Left),1(Right)					*/
/* [MwsfdIf] Sint32 mwPlyGetOutPan(MWPLY mwply, Sint32 chno);	*/
#define mwPlyGetOutPan(mwply, c)		(*(mwply)->vtbl->GetOutPan)((mwply), (c))

/*=========================================================================*
 *		���擾
 *		Information
 *=========================================================================*/
/* ���t���[�����̎擾 				*/
/* Get the number of movie frame	*/
Sint32 mwPlyGetTotalFrmNum(MWPLY mwply);

/* ���t���[���擾�\�₢���킹				*/
/* Determine whether next frame is ready	*/
Bool mwPlyIsNextFrmReady(MWPLY mwply);

/* �������[�h�̎擾			*/
/* Get synchronization mode	*/
Sint32 mwPlyGetSyncMode(MWPLY mwply);

/* �t���[���擾�������[�h�̎擾				*/
/* Get frame obtain synchronization mode	*/
MwsfdFrmSync mwPlyGetFrmSync(MWPLY mwply);

/* �|�[�Y��Ԃ̎擾 */
/* Get pause ON/OFF	*/
Bool mwPlyIsPause(MWPLY mwply);

/* �Đ����̎擾 			*/
/* Get playback information	*/
void mwPlyGetPlyInf(MWPLY mwply, MwsfdPlyInf *plyinf);

/* �R�}���������t���[�����̎擾	*/
/* Get number of droped frame	*/
Sint32 mwPlyGetNumDropFrm(MWPLY mwply);

/* �f�R�[�h���������t���[�����̎擾				*/
/* Get number of frames was skipped to decode	*/
Sint32 mwPlyGetNumSkipDec(MWPLY mwply);

/* �\���i�̃X�L�b�v�񐔂̎擾					*/
/* Get number of frames was skipped to obtain	*/
Sint32 mwPlyGetNumSkipDisp(MWPLY mwply);

/* �X�L�b�v�����G���v�e�BB�s�N�`�������̎擾	*/
/* Get the number of skipped empty-B picture	*/
Sint32 mwPlyGetNumSkipEmptyB(MWPLY mwply);

/* �f�R�[�h�����S�s�N�`�����̎擾	*/
/* Get Number of Decoded Frames 	*/
Sint32 mwPlyGetNumTotalDec(MWPLY mwply);

/* �f�R�[�h�ςݕێ��t���[�����̎擾	*/
/* Get Number of Pooled Frames 		*/
Sint32 mwPlyGetNumDecPool(MWPLY mwply);

/* �T�[�o��؂�₢���킹							*/
/* Determine whether process is in server border	*/
Bool mwPlyIsSvrBdr(void);

/* �t�@�C�����̎擾			*/
/* Get file header information	*/
void mwPlyGetHdrInf(Sint8 *buf, Sint32 bsize, MwsfdHdrInf *hdrinf);

/* �I�[�f�B�I�X�g���[���`���l�����̎擾		*/
/* Get the number of audio channel streams	*/
Sint32 mwPlyGetNumAudioCh(MWPLY mwply);

/* �r�f�I�X�g���[���`���l�����̎擾			*/
/* Get the number of video channel streams	*/
Sint32 mwPlyGetNumVideoCh(MWPLY mwply);

/*=========================================================================*
 *		�ǉ��ݒ�
 *		Additional setting
 *=========================================================================*/
/* �������[�h�̐ݒ�			*/
/* Set synchronization mode	*/
void mwPlySetSyncMode(MWPLY mwply, Sint32 mode);

/* �t���[���擾�������[�h�̐ݒ�				*/
/* Set frame obtain synchronization mode	*/
void mwPlySetFrmSync(MWPLY mwply, MwsfdFrmSync frmsync);

/* B-Picture�f�R�[�h�̃X�L�b�v�ݒ� 	*/
/* Set B-Picture skip decode 		*/
void mwPlySetBpicSkip(MWPLY mwply, Bool sw);

/* �G���v�e�BB�s�N�`���̃f�R�[�h�X�L�b�v�ݒ� 	*/
/* Set empty-B picture skip decode				*/
void mwPlySetEmptyBpicSkip(MWPLY mwply, Bool sw);

/* �Đ����ԏ���̐ݒ�i�f�t�H���g�� 9����57�� 0�b�j			*/
/* Set playback limit time (default = 09-57-00(HH-MM-SS))	*/
void mwPlySetLimitTime(MWPLY mwply, Sint32 sec);

/* �r�f�I�X�g���[���`���l���̐ݒ�	*/
/* Set video stream channel 		*/
void mwPlySetVideoCh(MWPLY mwply, Sint32 ch);

/*=========================================================================*
 *		�V�[�����X���[�v�Đ�
 *      Seamless loop playback
 *=========================================================================*/
/* �V�[�����X���[�v�Đ��̊J�n	*/
/* Start semaless loop playback	*/
void mwPlyStartFnameLp(MWPLY mwply, Char8 *fname);

/* �V�[�����X���[�v�Đ��̉���		*/
/* Release semaless loop playback	*/
void mwPlyReleaseLp(MWPLY mwply);

/* FID �w��ɂ��V�[�����X���[�v�Đ��̊J�n	  			*/
/* Start semaless loop playback by specified file ID	*/
void mwPlyStartAfsLp(MWPLY mwply, Sint32 patid, Sint32 fid);

/*=========================================================================*
 *		�V�[�����X�A���Đ�
 *      Seamless continuous playback
 *=========================================================================*/
/* �V�[�����X�A���Đ��t�@�C���̓o�^				*/
/* Entry file of Seamless continuous playback	*/
void mwPlyEntryFname(MWPLY mwply, Char8 *fname);

/* �V�[�����X�A���Đ��̊J�n				*/
/* Start seamless continuous playback	*/
void mwPlyStartSeamless(MWPLY mwply);

/* �V�[�����X�A���Đ��̉���				*/
/* Release seamless continuous playback	*/
void mwPlyReleaseSeamless(MWPLY mwply);

/*	�V�[�����X���[�v�Đ��̐ݒ�	*/
/*	Set semaless loop play   	*/
void mwPlySetSeamlessLp(MWPLY mwply, Sint32 flg);

/* �V�[�����X�A���Đ��t�@�C���̓o�^ (AFS)			*/
/* Entry file of Seamless continuous playback (AFS)	*/
void mwPlyEntryAfs(MWPLY mwply, Sint32 patid, Sint32 fid);

/* ���ݓo�^����Ă���t�@�C�����̎擾			*/
/* Get number of file entried seamless loop 	*/
Sint32 mwPlyGetNumSlFiles(MWPLY mwply);

/* �V�[�����X�A���Đ��ɓo�^���Ă���t�@�C�����̎擾	*/
/* Get file name of entried seamless				*/
Char8 *mwPlyGetSlFname(MWPLY mwply, Sint32 stm_no);

/*=========================================================================*
 *		���̑��̍Đ�����
 *      Other playback functions
 *=========================================================================*/
/* FID �w��ɂ��Đ��̊J�n 				*/
/* Start AFS palyback by specified file ID	*/
void mwPlyStartAfs(MWPLY mwply, Sint32 patid, Sint32 fid);

/* SJ�ɂ��Đ��̊J�n								*/
/* Start playing by stream joint					*/
/* [MwsfdIf] void mwPlyStartSj(MWPLY mwply, SJ sji);	*/
#define mwPlyStartSj(mwply, sji)     (*(mwply)->vtbl->StartSj)((mwply), (sji))

/* �A�h���X�w�胁�����ɂ��Đ��J�n										*/
/* Start playing by memory												*/
/* [MwsfdIf] void mwPlyStartMem(MWPLY mwply, void *addr, Sint32 len);	*/
#define	mwPlyStartMem(mwply, addr, len)		\
								   (*(mwply)->vtbl->StartMem)((mwply), (addr), (len))

/*=========================================================================*
 *		Sofdec F/X�@�\�i�t���[���ϊ��^�����j
 *      Sofdec F/X related (Frame conversion / Composition mode)
 *=========================================================================*/
/* ARGB8888�t�H�[�}�b�g�ւ̕ϊ�	*/
/* Convert to ARGB8888 			*/
void mwPlyFxCnvFrmARGB8888(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *out);
/* YUV422�t�H�[�}�b�g�ϊ�	*/
/* Convert to YUV422 		*/
void mwPlyFxCnvFrmYUV422(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *out);
/* Y84C44�t�H�[�}�b�g�ϊ�	*/
/* Convert to Y84C44 		*/
void mwPlyFxCnvFrmY84C44(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *yout, Uint8 *cout);

/* �o�̓o�b�t�@�T�C�Y�̐ݒ� */
/* Set size of out buffer 	*/
void mwPlyFxSetOutBufSize(MWPLY mwply, Sint32 width, Sint32 height);
/* �o�̓o�b�t�@�T�C�Y�̎擾 */
/* Get size of out buffer 	*/
void mwPlyFxGetOutBufSize(MWPLY mwply, Sint32 *width, Sint32 *height);

/* �������[�h�̐ݒ� 	*/
/* Set composition mode	*/
void mwPlyFxSetCompoMode(MWPLY mwply, Sint32 mode);
/* �������[�h�̎擾 */
/* Get composition mode	*/
Sint32 mwPlyFxGetCompoMode(MWPLY mwply);

/* ���~�i���X�L�[�p�����[�^�̐ݒ�		*/
/* Set luminance key alpha parameter	*/
void mwPlyFxSetLumiPrm(MWPLY mwply, Sint32 in_th, Sint32 out_th, MwsfdLumiKey key);
/* ���~�i���X�L�[�p�����[�^�̎擾 		*/
/* Get luminance key alpha parameter	*/
void mwPlyFxGetLumiPrm(MWPLY mwply, Sint32 *in_th, Sint32 *out_th, MwsfdLumiKey *key);

/* 16bit-�y�o�b�t�@�ւ̕ϊ� 		*/
/* Convert to 16bit depth Z-value	*/
void mwPlyFxCnvFrmZ16(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *zout);
/* 32bit-�y�o�b�t�@�ւ̕ϊ� 					*/
/* Convert to 32bit depth Z-value	*/
void mwPlyFxCnvFrmZ32(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *zout);

/* �y�N���b�v�̐ݒ� */
/* Set Z-clip		*/
void mwPlyFxSetZclip(MWPLY mwply, Float32 znear, Float32 zfar);
/* �y�N���b�v�̎擾 */
/* Get Z-clip		*/
void mwPlyFxGetZclip(MWPLY mwply, Float32 *znear, Float32 *zfar);

/*=========================================================================*
 *		���̑�
 *      Other functions
 *=========================================================================*/
/* YCbCr�v���[���̌v�Z        */
/* Calculation of YCbCr plane */
void mwPlyCalcYccPlane(Uint8 *bufptr, Sint32 width, Sint32 height, 
						MwsfdYccPlane *ycc);

/* ADXT�n���h���̎擾	*/
/* Get ADXT handle		*/
ADXT mwPlyGetAdxtHn(MWPLY mwply);

/* ���̓X�g���[���W���C���g�̎擾	*/
/* Get SJ of Input          		*/
SJ mwPlyGetInputSj(MWPLY mwply);

/* �r�f�I�f�R�[�_�n���h���̎擾	*/
/* Get Video decoder handle		*/
void *mwPlyGetSfdHn(MWPLY mwply);

/* Malloc�^Free �֐��̓o�^ */
void mwPlySetMallocFn(MwsfdMallocFn mallocfn, MwsfdFreeFn freefn, void *obj);

/* �n���h������Vsync���� 									*/
/* V-sync function 											*/
/* This function is called by user while v-sync interrupt.	*/
/* [MwsfdIf] void mwPlyVsyncHndl(MWPLY mwply);				*/
#define mwPlyVsyncHndl(mwply)			(*(mwply)->vtbl->VsyncHndl)((mwply))

/* �n���h�����̃T�[�o���� 							*/
/* Execute decoding one frame						*/
/* This function is called by user from main-loop.	*/
/* [MwsfdIf] Bool mwPlyExecSvrHndl(MWPLY mwply);		*/
#define mwPlyExecSvrHndl(mwply)			(*(mwply)->vtbl->ExecSvrHndl)((mwply))

/*=========================================================================*
 *		�폜���ꂽ�t���[���ϊ��֐�
 *      Deleted frame conversion functions
 *-------------------------------------------------------------------------*
 *	Please use mwPlyFxCnvFrm***** functions.
 *=========================================================================*/
/*
void mwPlyInitYcc420plnToArgb8888(void);
void mwPlyCnvFrm(MwsfdFrmPrm *in, MwsfdFrmPrm *out);
void mwPlyYcc420plnToArgb8888(Uint8 *frm, Uint8 *prgb, Uint32 width, 
								Uint32 height, Uint32 pitch);
void mwPlyYcc420plnToYcc422pix2(Uint8 *frm, Uint8 *pycc, Uint32 width, 
								Uint32 height, Uint32 pitch);
 */


#ifdef __cplusplus
}
#endif

#endif	/* INCLUDED_CRIMWSFD_H */
/***********************************************************************
 *
 *  Software Library
 *  Copyright (c) 2001,2002 CRI-MW
 *
 *      Read Only File System
 *
 *  Module  : Library Header File
 *  File    : cri_rofs.h
 *  Author  : Nagayasu Takuya
 *  Modify  : Mikoshiba Kengo
 *  Date    : 2002-10-10
 *  Version : 1.320
 *  Notes   : 
 ***********************************************************************/

/*---------------------------------------------------------------------*/
#ifndef _CRI_ROFS_H_
#define _CRI_ROFS_H_

/*****************************************************************************
 *      �C���N���[�h�t�@�C��
 *****************************************************************************/

/*---------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#ifndef CRI_XPT_H
	Please include "cri_xpt.h"		/* �\�h�� : �G���[���N�������� */
#endif

/*****************************************************************************
 *      �萔�}�N��
 *****************************************************************************/

/* ROFS Version */
#define ROFS_VERSION_STR		"1.32"		/* Version number */

/* �Z�N�^�� */
#define ROFS_SCT_LEN			(2048)

/* �t�@�C������ */
#define ROFS_ATR_DIRECTORY		(0x02)	/* �f�B���N�g�� */

/* �ő啶���� */
#define ROFS_VOLNAME_LEN		(8)		/* �{�����[�����̕����� */
#define ROFS_VOLNAME_SIZ		(ROFS_VOLNAME_LEN + 1)	/* ������T�C�Y */

#define ROFS_FNAME_LEN			(31)	/* �t�@�C�����̕����� */
#define ROFS_FNAME_SIZ			(ROFS_FNAME_LEN + 1)	/* ������T�C�Y */

#define ROFS_DIRNAME_LEN		(31)	/* �f�B���N�g�����̕����� */
#define RPFS_DIRNAME_SIZ		(ROFS_DIRNAME_LEN+1)	/* ������T�C�Y */

#define ROFS_VOLID_SIZ			(8)		/* �{�����[��ID�T�C�Y */

/* ��ƃo�b�t�@ */
#define ROFS_WKBUF_NUM			(2)
#define ROFS_WKBUF_SIZ			(ROFS_SCT_LEN * ROFS_WKBUF_NUM + 64)

/*****************************************************************************
 *      �񋓒萔
 *****************************************************************************/

/* �t�@�C���n���h����� */
typedef enum {
	ROFS_STAT_IDLE		= (0),			/* Idle status */
	ROFS_STAT_COMPLETE	= (1),			/* Tranfer complete status */
	ROFS_STAT_TRANS		= (2),			/* During transfer status */
	ROFS_STAT_ERR		= (3),			/* Error outbreak status */
	ROFS_STAT_NUM
} RofsStat;

/* �V�[�N���[�h */
typedef enum {
	ROFS_SEEK_SET		= (0),			/* Top of file */
	ROFS_SEEK_CUR		= (1),			/* Current position */
	ROFS_SEEK_END		= (2),			/* End of file */
	ROFS_SEEK_NUM
} RofsSeek;

/* �G���[�R�[�h */
typedef enum {
	ROFS_ERR_OK			= (0),			/* ����I�� */
	ROFS_ERR_NG			= (-1),			/* ���s */

	ROFS_ERR_PRM		= (-100),		/* �p�����[�^�̐ݒ�G���[ */
	ROFS_ERR_ILLHDL		= (-101),		/* �t�@�C���n���h�����s�� */
	ROFS_ERR_NOHNDL		= (-102),		/* �t�@�C���n���h���ɋ󂫂��Ȃ� */
	ROFS_ERR_VOLNAME	= (-103),		/* �s���ȃ{�����[���� */
	ROFS_ERR_REGVOLNAME	= (-104),		/* �o�^�ς݂̃{�����[���� */
	ROFS_ERR_VOLUME		= (-105),		/* �{�����[���̖����G���[ */
	ROFS_ERR_NOTDIR		= (-106),		/* �f�B���N�g���łȂ����̂��w�肵�� */
	ROFS_ERR_NOTFOUND	= (-107),		/* ���݂��Ȃ��t�@�C�� */
	ROFS_ERR_ILLDIRBUF	= (-108),		/* �s���ȃf�B���N�g�����R�[�h */
	ROFS_ERR_DIROVER	= (-109),		/* �f�B���N�g���G���g���̍ő吔���I�[�o�[���� */

	ROFS_ERR_BUSY		= (-200),		/* ���̃R�}���h�����s�� */
	ROFS_ERR_TOUT		= (-201),		/* ���������Ń^�C���A�E�g���������� */
	ROFS_ERR_PRIMITIVE	= (-202),		/* �v���~�e�B�u�֐��G���[ */
	ROFS_ERR_INIT		= (-203),		/* �������G���[ */
	ROFS_ERR_REQRD		= (-204),		/* �ǂݍ��ݗv���G���[ */
	ROFS_ERR_SEEK		= (-205),		/* �V�[�N�G���[ */
	ROFS_ERR_OPEN		= (-206),		/* �t�@�C���I�[�v���G���[ */
	ROFS_ERR_READ		= (-207),		/* �ǂݍ��݃G���[ */

	ROFS_ERR_INTERNAL	= (-1000)		/* �����G���[ */
} RofsErr;

/*****************************************************************************
 *      �����}�N��
 *****************************************************************************/
/* ���C�u������Ɨ̈�T�C�Y */
#define ROFS_GET_LIBWORK_SIZ(max_open, max_volume, max_dirent) \
	(sizeof(RofsWork)+((max_open)+1)*sizeof(RofsHandle)+\
	(ROFS_GET_DIRREC_SIZ(max_dirent)+sizeof(RofsVolume))*(max_volume)+8)

/* �f�B���N�g�����R�[�h�̈�T�C�Y */
#define ROFS_GET_DIRREC_SIZ(n_dirent) \
	(sizeof(RofsDirRec)-sizeof(RofsDirRecEnt)+(n_dirent)*sizeof(RofsDirRecEnt))

/* �f�B���N�g���̔��� */
#define ROFS_IS_ATR_DIRECTORY(finf) \
	(((finf)->fatr & ROFS_ATR_DIRECTORY)?TRUE:FALSE)

/* �|�C���^��64byte���E�ɍ��킹�� */
#define ROFS_ALIGN_64BYTE(ptr)		(((Sint32)(ptr)+63) & 0xffffffc0)

/*****************************************************************************
 *      �f�[�^�^�̒�`
 *****************************************************************************/

/* ���[�N�̈� */
typedef struct RofsStWrok		RofsWork;

/* �v���~�e�B�u�֐� */
typedef struct RofsPfsIfTbl		RofsPfsTbl;

/* �f�o�C�X�R���g���[���֐� */
typedef struct RfpfsDevIfTbl	RofsDevTbl;

/* ���C�u�����C���^�[�t�F�[�X */
typedef struct RfmaiLibIfTbl	RofsLif;

/* �f�B���N�g�����R�[�h�G���g�� */
typedef struct {
	Uint32	fsize;						/* file size lower */
	Uint32	fsize_ex;					/* file size upper */
	Sint32	fad;						/* fad */
	Uint8	fatr;						/* file attribute */
	Uint8	sid;						/* filename search id */
	Char8	fname[ROFS_FNAME_SIZ];		/* filename */
	Uint8	pad[2];						/* align padding */
} RofsDirRecEnt;	/* 48 bytes */

/* �f�B���N�g�����R�[�h */
typedef struct {
	Sint32	dir_num;					/* number of record */
	Sint32	max_ent;					/* max entry of directory record */
	Sint32	dir_fad;					/* fad of directory record */
	Char8	volname[ROFS_VOLNAME_SIZ];	/* volume name */
	Uint8	pad[3];						/* align padding */
	RofsDirRecEnt	dirrec_tbl[1];		/* record table */
} RofsDirRec;		/* 24 bytes */
typedef RofsDirRec	*RofsDirRecBuf;

/* �{�����[���Ǘ��\���� */
typedef struct {
	void	*img_hn;					/* file handle of the CVM file */
	Sint32	zisb;						/* ZONE0�C���[�W�f�[�^�J�n�ʒu(0�̏ꍇDVD-ROM���ړǂ�) */
	Sint32	ptbl_cba;					/* cba of path table */
	Sint32	ptbl_size;					/* size of path table */
	RofsDirRecBuf	curdir;				/* current directory handle */
	Sint16	req_cnt;					/* request counter */
	Char8	volname[ROFS_VOLNAME_SIZ];	/* volume name */
	Uint8	pad[1];						/* align padding */
	/* 2002-09-26 Ver.1.30 miko { : CVM�t�H�[�}�b�g�ύX */
	Uint32	flags;						/* flags */
	Uint8	vol_id[ROFS_VOLID_SIZ];		/* volume id */
	/* } */
} RofsVolume;		/* 44 bytes */

/* ROFS File Handle */
typedef struct {
	Uint32		fsize;					/* file size lower */
	Uint32		fsize_ex;				/* file size upper */
	RofsWork	*wk;					/* pointer of lib work */
	Sint32		fid;					/* file id */
	Sint32		fad;					/* fad */
	Sint32		ofs;					/* offset */
	Sint32		fsctsize;				/* sctor size of the file */
	RofsVolume	*vol;					/* image file volume */
	Sint32		rsize;					/* reading size */
	Sint32		trns_seg;				/* �]���σu���b�N�P�� */
	Sint32		trns_ofs;				/* �]���σo�C�g�P�� */
	Sint32		trns_unit;				/* �]���P��(�u���b�N) */
	Uint8		*rdadr;					/* �ǂݍ��݃A�h���X */
	Sint16		used;					/* used flag */
	Sint16		act;					/* handle act */
	Sint16		stat;					/* handle status(RofsStat) */
	Sint16		err;					/* error status */
} RofsHandle;		/* 72 bytes */
typedef RofsHandle	*Rofs;

/* ROFS Work Area */
struct RofsStWrok {
	Bool			f_init;				/* �������t���O */
	Sint32			max_open;			/* max open files */
	Sint32			max_volume;
	Sint32			max_dirent;
	Sint32			worksiz;
	Uint32			exec_server_cnt;	/* counter */
	Rofs			syshdl;				/* handle for system command */
	Rofs			hndtbl;				/* handle */
	RofsVolume		*vollist;			/* �{�����[����񃊃X�g */
	RofsVolume		*curvol;			/* �f�t�H���g�{�����[����� */
	RofsDirRecBuf	dirbuf;				/* �f�B���N�g�����R�[�h�̊J�n�ʒu */
	RofsPfsTbl		*pfs;				/* �v���~�e�B�u�֐� */
	RofsDevTbl		*dev;				/* �f�o�C�X�R���g���[���֐� */
	RofsLif			*liftbl;			/* ���C�u�����C���^�[�t�F�[�X */
	void	(*g_errcb)(void *, Char8 *, Sint32);	/* error callback */
	void			*g_errcb_1st;		/* error callback 1st arg. */
	Uint32			*sctbuf;			/* sector buffer addres */
	Uint32	sct_load_buf[ROFS_WKBUF_SIZ / 4];	/* sector buffer */
	RofsHandle		hndlist[1];			/* handle table */
}; /* 68 + 4160 + (72 * (handle num + 1)) */

/* ���C�u�������������  */
typedef struct {
	Sint32	max_open;					/* �����ɃI�[�v���ł���ő�t�@�C���� */
	Sint32	max_volume;					/* �����ɓo�^�ł���ő�{�����[���� */
	Sint32	max_dirent;					/* �f�B���N�g���Ɋi�[����ő�t�@�C���� */
	void	*rofs_work;					/* ���C�u������Ɨ̈�̐擪�A�h���X */
} RofsInitPara;

/* �t�@�C����� */
typedef struct {
	Uint32	fsize;						/* file size lower */
	Uint32	fsize_ex;					/* file size upper */
	Char8	*fname;						/* �t�@�C���� */
	Uint8	fatr;						/* �t�@�C������ */
	Uint8	pad[3];						/* align padding */
} RofsFileInf;		/* 16 bytes */

/* �{�����[����� */
typedef struct {
	Char8	*volname;					/* �{�����[���� */
	void	*fhn;						/* �{�����[���̃t�@�C���n���h�� */
} RofsVolumeInf;

/* �G���[�R�[���o�b�N�֐� */
typedef void (*RofsErrFunc)(void *obj, Char8 *msg, Sint32 errcode);

/* �v���~�e�B�u�֐��e�[�u�� */
struct RofsPfsIfTbl {
	void		(*pfs_execserver)(void);
	void		(*pfs_reserve01)(RofsErrFunc, void *);
	Sint32		(*pfs_reserve02)(Sint8 *);
	Sint32		(*pfs_reserve03)(void);
	void		*(*pfs_reserve04)(Sint8 *, void *, Sint32);
	void		(*pfs_reserve05)(void *);
	Sint32		(*pfs_seek)(void *, Sint32, RofsSeek);
	Sint32		(*pfs_tell)(void *);
	Sint32		(*pfs_reqrd)(void *, Sint32, void *);
	Sint32		(*pfs_reserve07)(void *, Sint32, void *);
	void		(*pfs_stoptr)(void *);
	Sint32		(*pfs_getstat)(void *);
	Sint32		(*pfs_getsctlen)(void *);
	void		(*pfs_reserve08)(void *, Sint32);
	Sint32		(*pfs_getnumtr)(void *);
	Sint32		(*pfs_reserve09)(Sint8 *);
	Sint32		(*pfs_reserve10)(Sint8 *);
	Sint32		(*pfs_reserve11)(void);
	Sint32		(*pfs_reserve12)(Sint8 *, void *, Sint32);
	Sint32		(*pfs_reserve13)(void *);
	Sint32		(*pfs_reserve14)(Sint8 *);
	Sint32		(*pfs_reserve15)(Sint8 *);
	Sint32		(*pfs_reserve16)(Sint8 *);
	Sint32		(*pfs_reserve17)(Sint8 *, void *);
	Sint32		(*pfs_reserve18)(void *, Sint32, Sint32, Sint32);
	Sint32		(*pfs_reserve19)(void *, Sint32, Sint32, Sint32);
	/* 2002-09-11 Ver.1.22a miko { : 64bit�Ή� */
	Sint64		(*pfs_getnumtr64)(void *);
	/* } miko */
};

/*****************************************************************************
 *      �ϐ��錾
 *****************************************************************************/

/*****************************************************************************
 *      �֐��錾
 *****************************************************************************/

/*============================================================================
 *      ���C�u�����������^�I��
 *===========================================================================*/
/* �t�@�C���V�X�e���̏�����
 * [���@��] init_para	: ���C�u�����������p�����[�^
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 
 * (a) ���C�u������Ɨ̈�� ROFS_GET_LIBWORK_SIZ�}�N�� �ŋ��߂邱�ƁB
 * (b) init_para.max_dirent �́A"."��".."�̂Q�������Z���邱�ƁB			*/
RofsErr		ROFS_Init(RofsInitPara *init_para);

/* �t�@�C���V�X�e���̏I��
 * [���@��] �Ȃ�
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 																*/
void		ROFS_Finish(void);

/* �v���~�e�B�u�֐��̓o�^
 * [���@��] pfs_tbl		: �v���~�e�B�u�֐��e�[�u��
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 
 * (a) �f�t�H���g�ł�CRI-MW�W���̊֐����o�^����Ă���B						*/
RofsErr		ROFS_SetPfsFuncTbl(RofsPfsTbl *pfs_tbl);

/*============================================================================
 *      �{�����[������
 *===========================================================================*/
/* �{�����[���̒ǉ�
 * [���@��] volname		: �{�����[����
 *			img_hn		: �I�[�v���ς݃{�����[���̃n���h���i�t�@�C���n���h���j
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 
 * (a) �{�����[����"ROFS"�̓��C�u�����\��Ȃ̂Ŏg�p�s�B					*/
RofsErr		ROFS_AddVolume(Char8 *volname, void *img_hn);

/* �{�����[���̍폜
 * [���@��] volname		: �{�����[����
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 																*/
RofsErr		ROFS_DelVolume(Char8 *volname);

/* �f�t�H���g�{�����[���̐ݒ�
 * [���@��] volname		: �{�����[����
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 																*/
RofsErr		ROFS_SetDefVolume(Char8 *volname);

/* �f�t�H���g�{�����[���̎擾
 * [���@��] �Ȃ�
 * [�o�@��] �Ȃ�
 * [�֐��l] �{�����[����
 * [���@�l] 																*/
Char8		*ROFS_GetDefVolume(void);

/* �{�����[���n���h���̐؂�ւ�
 * [���@��] volname		: �{�����[����
 *			img_hn		: �I�[�v���ς݃{�����[���̃n���h���i�t�@�C���n���h���j
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 																*/
RofsErr		ROFS_SwitchImgHn(Char8 *volname, void *img_hn);

/*============================================================================
 *      �t�@�C������
 *===========================================================================*/
/* �t�@�C���̃I�[�v��
 * [���@��] fname		: �t�@�C����
 *			dir_buf		: �f�B���N�g�����R�[�h
 * [�o�@��] �Ȃ�
 * [�֐��l] ROFS�n���h��
 * [���@�l] 
 * (a) dir_buf �� NULL �̏ꍇ�́A�J�����g�f�B���N�g�����R�[�h���Q�Ƃ���B	*/
Rofs		ROFS_Open(Char8 *fname, void *dir_buf);

/* �Z�N�^�w��ɂ��t�@�C���̃I�[�v��
 * [���@��] volname		: �{�����[����
 *			stsct		: �擪�Z�N�^�ԍ�
 *			nsct		: �Z�N�^��
 * [�o�@��] �Ȃ�
 * [�֐��l] ROFS�n���h��
 * [���@�l] 																*/
Rofs		ROFS_OpenRange(Char8 *volname, Sint32 stsct, Sint32 nsct);

/* �t�@�C���̃N���[�Y
 * [���@��] rofs		: ROFS�n���h��
 * [�o�@��] �Ȃ�
 * [�֐��l] �Ȃ�
 * [���@�l] 																*/
void		ROFS_Close(Rofs rofs);

/* �t�@�C�����݈ʒu�̈ړ�
 * [���@��] rofs		: ROFS�n���h��
 *			nsct		: �V�[�N�J�n�ʒu����̈ړ��Z�N�^��
 *			sk_mode		: �V�[�N���[�h
 * [�o�@��] �Ȃ�
 * [�֐��l] �Ȃ�
 * [���@�l] 																*/
Sint32		ROFS_Seek(Rofs rofs, Sint32 nsct, RofsSeek sk_mode);

/* �t�@�C�����݈ʒu�̎擾
 * [���@��] rofs		: ROFS�n���h��
 * [�o�@��] �Ȃ�
 * [�֐��l] �t�@�C���擪����̃Z�N�^��
 * [���@�l] 																*/
Sint32		ROFS_Tell(Rofs rofs);

/* �ǂݍ��݂̗v��
 * [���@��] rofs		: ROFS�n���h��
 *			nsct		: �Z�N�^��
 * [�o�@��] buf			: �ǂݍ��ݐ�o�b�t�@
 * [�֐��l] �v�����󂯕t�����Z�N�^��
 * [���@�l] 
 * (a) buf �̐擪��64byte���E�ɑ����Ă������ƁB								*/
Sint32		ROFS_ReqRd(Rofs rofs, Sint32 nsct, void *buf);

/* �]���̒�~
 * [���@��] rofs		: ROFS�n���h��
 * [�o�@��] �Ȃ�
 * [�֐��l] �Ȃ�
 * [���@�l] 																*/
void		ROFS_StopTr(Rofs rofs);

/* �T�[�o�����̎��s
 * [���@��] �Ȃ�
 * [�o�@��] �Ȃ�
 * [�֐��l] �Ȃ�
 * [���@�l] 
 * (a) ADX��ADXF_SetupRofs�֐����g���Ă���ꍇ�́A�{�֐����g��Ȃ����ƁB
 *	   �����݂�ADX�Ƃ̕��p�K�{�B�P�̂ł͓��삵�Ȃ��̂ŁA�{�֐��͎g��Ȃ��B	*/
void		ROFS_ExecServer(void);

/*============================================================================
 *      ���̎擾
 *===========================================================================*/
/* �t�@�C���n���h����Ԃ̎擾
 * [���@��] rofs		: ROFS�n���h��
 * [�o�@��] �Ȃ�
 * [�֐��l] �X�e�[�^�X
 * [���@�l] 																*/
RofsStat	ROFS_GetStat(Rofs rofs);

/* �t�@�C���T�C�Y�̎擾
 * [���@��] fname		: �t�@�C����
 * [�o�@��] �Ȃ�
 * [�֐��l] �t�@�C���T�C�Y�i�o�C�g���j
 * [���@�l] 
 * (a) ���l�̏ꍇ�̓T�C�Y�ł͖����A�G���[�������B
 * (b) �t�@�C���T�C�Y��2GB�ȏ�̏ꍇ 0x7fffffff ��Ԃ��B					*/
Sint32		ROFS_GetFileSiz(Char8 *fname);

/* �Z�N�^���̎擾
 * [���@��] �Ȃ�
 * [�o�@��] �Ȃ�
 * [�֐��l] �Z�N�^���i�o�C�g���j
 * [���@�l] 																*/
Sint32		ROFS_GetSctLen(void);

/* �]���ς݃T�C�Y�̎擾
 * [���@��] rofs		: ROFS�n���h��
 * [�o�@��] �Ȃ�
 * [�֐��l] �]���ς݃f�[�^�T�C�Y�i�o�C�g���j
 * [���@�l] 																*/
Sint32		ROFS_GetNumTr(Rofs rofs);

/* �{�����[�����̎擾
 * [���@��] volname		: �{�����[����
 * [�o�@��] volinf		: �{�����[�����
 * [�֐��l] �G���[
 * [���@�l] 																*/
RofsErr		ROFS_GetVolumeInf(Char8 *volname, RofsVolumeInf *volinf);

/*============================================================================
 *      �f�B���N�g������
 *===========================================================================*/
/* �f�B���N�g�����R�[�h�̓ǂݍ���
 * [���@��] dirname		: �f�B���N�g����
 *			n_dirent	: ���R�[�h���̏��
 * [�o�@��] dir_buf		: �f�B���N�g�����R�[�h
 * [�֐��l] �G���[
 * [���@�l] 
 * (a) �������A�B
 * (b) n_dirent �����ۂ̃��R�[�h�������̏ꍇ�́AROFS_ERR_DIROVER ���Ԃ�B	*/
RofsErr		ROFS_LoadDir(Char8 *dirname, void *dir_buf, Sint32 n_dirent);

/* �J�����g�f�B���N�g���̐ݒ�
 * [���@��] volname		: �{�����[����
 *			dir_buf		: �f�B���N�g�����R�[�h
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 																*/
RofsErr		ROFS_SetDir(Char8 *volname, void *dir_buf);

/* �J�����g�f�B���N�g���̐ݒ�(ISO9660�f�B���N�g�����R�[�h) 
 * [���@��] volname		: �{�����[����
 *			dir_buf		: �f�B���N�g�����R�[�h
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 
 * (a) �T���v���v���O�����Q��												*/
RofsErr		ROFS_SetIsoDir(Char8 *volname, void *dir_buf);

/* �J�����g�f�B���N�g���̕ύX
 * [���@��] dirname		: �f�B���N�g����
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 
 * (a) �������A�B
 * (b) n_dirent �����ۂ̃��R�[�h�������̏ꍇ�́AROFS_ERR_DIROVER ���Ԃ�B	*/
RofsErr		ROFS_ChangeDir(Char8 *dirname);

/* �t�@�C���̑��ݔ���
 * [���@��] fname		: �t�@�C����
 * [�o�@��] �Ȃ�
 * [�֐��l] �L���iTRUE = �L , FALSE = ���j
 * [���@�l] 																*/
Bool		ROFS_IsExistFile(Char8 *fname);

/* �t�@�C�����̎擾
 * [���@��] volname		: �{�����[����
 * [�o�@��] �Ȃ�
 * [�֐��l] �t�@�C�����i"."��".."�������f�B���N�g���̐����܂ށj
 * [���@�l] 																*/
Sint32		ROFS_GetNumFiles(Char8 *volname);

/* �f�B���N�g�����̎擾
 * [���@��] volname		: �{�����[����
 *			num			: ���R�[�h���̏��
 * [�o�@��] flist		: �t�@�C�����i���R�[�h�����̔z��j
 * [�֐��l] ���R�[�h��
 * [���@�l] 																*/
Sint32		ROFS_GetDirInf(Char8 *volname, RofsFileInf *flist, Sint32 num);

/*============================================================================
 *      �G���[����
 *===========================================================================*/
/* �G���[�R�[���o�b�N�֐��̓o�^
 * [���@��] errfunc		: �G���[�R�[���o�b�N�֐�
 *			obj			: �G���[�I�u�W�F�N�g
 * [�o�@��] �Ȃ�
 * [�֐��l] �Ȃ�
 * [���@�l] 																*/
void		ROFS_EntryErrFunc(RofsErrFunc errfunc, void *obj);

/* �Ō�ɔ��������G���[���擾����
 * [���@��] �Ȃ�
 * [�o�@��] �Ȃ�
 * [�֐��l] �G���[
 * [���@�l] 																*/
RofsErr		ROFS_GetLastError(void);

/*============================================================================
 *      64bit�Ή�
 *===========================================================================*/
/* �]���ς݃T�C�Y�̎擾 / 64bit��
 * [���@��] rofs		: ROFS�n���h��
 * [�o�@��] �Ȃ�
 * [�֐��l] �]���ς݃f�[�^�T�C�Y�i�o�C�g���j
 * [���@�l] 																*/
Sint64		ROFS_GetNumTr64(Rofs rofs);

/* �t�@�C���T�C�Y�̎擾 / 64bit�� / PS2�ł̂�
 * [���@��] fname		: �t�@�C����
 * [�o�@��] �Ȃ�
 * [�֐��l] �t�@�C���T�C�Y�i�o�C�g���j
 * (a) ���l�̏ꍇ�̓T�C�Y�ł͖����A�G���[�������B
 * (c) PS2�ȊO�̋@��ł�0x7fffffff���傫�ȃT�C�Y�͕Ԃ��Ȃ��B
 * (b) �t�@�C���T�C�Y��2GB�ȏ�̏ꍇ 0x7fffffffffffffff ��Ԃ��B			*/
Sint64		ROFS_GetFileSiz64(Char8 *fname);

/*============================================================================
 *      ���̑�
 *===========================================================================*/
/* �o�[�W����������̎擾 */
const Char8	*ROFS_GetVersionStr(void);

/*****************************************************************************
 *      �ϐ���`
 *****************************************************************************/

/*****************************************************************************
 *      �֐���`
 *****************************************************************************/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _CRI_ROFS_H_ */

/* end of file */
#ifndef _ADX_PS2_H_INCLUDED
#define _ADX_PS2_H_INCLUDED
/************************************************************************/
/*                                                                      */
/*              ADX function for Playstation2(PS2)                      */
/*                                                                      */
/*                  Copyright (c) 2001 CRI-MW                           */
/*                  2001.7.9 written by O.Sato                          */
/*                                                                      */
/************************************************************************/


#ifdef __cplusplus
extern "C" {
#endif

/************************************************************************/
/*      定数マクロ                                                      */
/*      Macro Constant                                                  */
/************************************************************************/
#define ADXPS2_VER "2.33" // "ADXPS2" Version number

#define ADXPS2_RDMODE_NOWAIT (0) /* ノーウェイト読み込みモード	*/
#define ADXPS2_RDMODE_WAIT (1)   /* ウェイト読み込みモード		*/

#define ADXPS2_PRIO_LOCK (1)    /* ロック時のスレッドプライオリティ	*/
#define ADXPS2_PRIO_SAFE (8)    /* セーフスレッドプライオリティ    	*/
#define ADXPS2_PRIO_VSYNC (16)  /* Vsyncサーバ用スレッドプライオリティ	*/
#define ADXPS2_PRIO_MAIN (24)   /* 通常時メインスレッドプライオリティ	*/
#define ADXPS2_PRIO_MWIDLE (25) /*アイドルスレッドプライオリティ*/

#define ADXPS2_DEBUG_LEVEL_ALL (0)     /* 全てのデバッグ出力を行う 	*/
#define ADXPS2_DEBUG_LEVEL_ERROR (1)   /* エラーのみデバッグ出力を行う	*/
#define ADXPS2_DEBUG_LEVEL_NOTHING (2) /* デバッグ出力を行わない		*/

/*	ファイルキャッシュ情報サイズの計算									*/
/*	Calc size of file cache information									*/
#define ADXPS2_CALC_FCSIZE_DVD(nfile, maxflen) (nfile * sizeof(ADXPS2_FC_DVD) + nfile * (maxflen + 1))
#define ADXPS2_CALC_FCSIZE_HOST(nfile, maxflen) (nfile * sizeof(ADXPS2_FC_HOST) + nfile * (maxflen + 1))

/*	ファイルキャッシュ情報に関する規定値								*/
/*	Default value for file cache information							*/
#define ADXPS2_DEF_NUM_FILE_DVD (40)  /* Number of file(for DVD)		*/
#define ADXPS2_DEF_NUM_FILE_HOST (13) /* Number of file(for Host)	  	*/
#define ADXPS2_DEF_MAXFLEN_DVD (128)  /* File length of file(for DVD)	*/
#define ADXPS2_DEF_MAXFLEN_HOST (128) /* File length of file(for Host)*/

#define ADXPS2_DEF_FCSIZE_DVD (ADXPS2_CALC_FCSIZE_DVD(ADXPS2_DEF_NUM_FILE_DVD, ADXPS2_DEF_MAXFLEN_DVD))
#define ADXPS2_DEF_FCSIZE_HOST (ADXPS2_CALC_FCSIZE_HOST(ADXPS2_DEF_NUM_FILE_HOST, ADXPS2_DEF_MAXFLEN_HOST))

/************************************************************************/
/*      データ型                                                        */
/*      Data type declaration                                           */
/************************************************************************/
/* DVDファイル情報キャッシュ											*/
/* DVD File information cache											*/
typedef struct {
    Sint32 lsn;  /* Logical Sector num 	*/
    Sint32 size; /* File size          	*/
} ADXPS2_FC_DVD;

/* HTCIファイル情報キャッシュ											*/
/* HTCI File information cache											*/
typedef struct {
    Sint32 fd;   /* File descripter		*/
    Sint32 size; /* File size      		*/
} ADXPS2_FC_HOST;

/*	DVDファイルシステムのセットアップパラメータ構造体					*/
/*	Parameter structure DVD setup function								*/
typedef struct _adxps2_sprm_dvd {
    Sint8 *rtdir;  /*	ルートディレクトリ名		*/
    Sint32 rdmode; /*	読み込みモード				*/
    Sint32 nrtry;  /*	リトライ回数(0:255回)		*/
    Sint32 speed;  /*	回転速度					*/
    Sint32 dtype;  /*	データタイプ(2048byteなど)	*/
} ADXPS2_SPRM_DVD;

/*	ホストファイルシステムのセットアップパラメータ構造体				*/
/*	Parameter structure Host setup function								*/
typedef struct _adxps2_sprm_host {
    Sint8 *rtdir;  /*	ルートディレクトリ名		*/
    Sint32 rdmode; /*	読み込みモード				*/
    char pad[8];
} ADXPS2_SPRM_HOST;

/*** 以下、旧バージョン互換用 ***/
/*	DVD/ホストファイルシステムのファイル情報キャッシュパラメータ構造体	*/
/*	Parameter structure DVD/Host file cache								*/
typedef struct _adxps2_fcprm {
    Sint8 *flist;   /*	ファイルリストファイル名	*/
    Sint32 maxflen; /*	ファイル名の最大長			*/
    Sint8 *fcbuf;   /*	ファイルキャッシュ領域		*/
    Sint32 fcsize;  /*	ファイルキャッシュサイズ	*/
} ADXPS2_FCPRM;

/*	PS2用スレッドパラメータ構造体		*/
/*	Parameter structure of Thread Param	*/
typedef struct {
    int prio_lock; // Main Thread Lock priority
    int prio_safe; // Safe Thread priority
    int prio_adx;  // ADX Thread priority
    int prio_main; // Main Thread Normary priority
} ADXPS2_TPRM;

/***
 *       PS2 専用関数
 *       Functions for PS2
 ***/

/* $func$ DVDファイルシステムのセットアップ
 * [書　式] void ADXT_SetupDvdFs(ADXT_SPRM *sprm);
 * [入　力] sprm : DVD/Hostファイルシステムセットアップパラメータ構造体
 * [出　力] なし
 * [関数値] なし
 * [機　能] DVDファイルシステムのセットアップする。
 *			ファイルをキャッシングする。
 *			引数にNULLを指定するとキャッシングしない。
 *			ADX_Init関数よりも前に1回だけ呼ぶこと。
 *  Setup of Dvd File Sysytem
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Setup DVD file system.
 *			  This function shuld be called before ADXT_Init().
 */
void ADXPS2_SetupDvdFs(ADXPS2_SPRM_DVD *sprmd);

/* $func$ ホストファイルシステムのセットアップ
 * [書　式] void ADXT_SetupHostFs(ADXT_SPRM *sprm);
 * [入　力] sprm : DVD/Hostファイルシステムセットアップパラメータ構造体
 * [出　力] なし
 * [関数値] なし
 * [機　能] ホストファイルシステムのセットアップする。
 *			ファイルをキャッシングする。
 *			引数にNULLを指定するとキャッシングしない。
 *			ADX_Init関数よりも前に1回だけ呼ぶこと。
 *  Setup of Host File Sysytem
 * [Inputs  ] None
 * [Outputs ] None
 * [Return  ] None
 * [Function] Setup Host file system.
 * 			  This function shuld be called before ADXT_Init().
 */
void ADXPS2_SetupHostFs(ADXPS2_SPRM_HOST *sprmh);

/* $func$ メモリファイルシステムのセットアップ
 * [書　式] void ADXPS2_SetupMemFs(void *sprm);
 * [入　力] sprm : 未使用 (NULL)
 * [出　力] なし
 * [関数値] なし
 * [機　能] メモリファイルシステムのセットアップ。
 *  Setup of Memory File Sysytem
 * [Inputs  ] sprm : unused. (NULL)
 * [Outputs ] None
 * [Return  ] None
 * [Function] Setup Memory file system.
 * 			  This function shuld be called before ADXT_Init().
 */
void ADXPS2_SetupMemFs(void *prm);

/*	ファイルポインタのキャッシング(DVD用)								*/
Sint32 ADXPS2_LoadFcacheDvd(ADXPS2_FCPRM *fcprm);

/*	読み込みモードの設定(DVD用) */
void ADXPS2_SetRdModeDvd(ADXPS2_SPRM_DVD *sprmd);

/*	ファイル情報キャッシュ存在の判定(DVD用)								*/
Sint32 ADXPS2_IsExistFcacheDvd(Sint8 *fname);

/*	ファイルオープンモードの設定(Host用)								*/
void ADXPS2_SetRdModeHost(ADXPS2_SPRM_HOST *sprmh);

/*	ファイルポインタのキャッシング(Host用)								*/
Sint32 ADXPS2_LoadFcacheHost(ADXPS2_FCPRM *fcprm);

/*	ファイル情報キャッシュ存在の判定(Host用)							*/
Sint32 ADXPS2_IsExistFcacheHost(Sint8 *fname);

/*	デバッグ出力レベルの設定 */
void ADXPS2_SetOutputDebugLevel(Sint32 lv);

/*	V-SYNC割り込み処理 */
/*	ユーザーのV-Sync割り込み処理から呼び出すためのエントリ。			*/
/*	通常使用しない。 */
int ADXPS2_VsyncCallback(int arg);

/*	割り込みハンドラを登録しなおす										*/
void ADXPS2_RestoreVsyncCallback(void);

/*	サーバーの実行 */
/*	通常は使用しない。 */
/*	ADXPS2_SetupUsvrを使用後、メインスレッドから定期的に実行する。		*/
void ADXPS2_ExecServer(void);

/*** 以下、旧バージョン互換用 ***/
/*	スレッドのセットアップ */
/*	ADXサーバ関数をV-Sync割り込みで呼び出すためのスレッドの初期化		*/
void ADXPS2_SetupThrd(ADXPS2_TPRM *tprm);

/*	スレッドのシャットダウン */
void ADXPS2_ShutdownThrd(void);

/*	スレッドのロック */
void ADXPS2_Lock(void);

/*	スレッドのロック解除 */
void ADXPS2_Unlock(void);

/* Unused */
void ADXPS2_SetupUsvr(void);
void ADXPS2_Shutdown(void);

/* $func$ ボイスのセットアップ
 * [書　式] void ADXPS2_SetupVoice(Sint32 nste, Sint32 nmono);
 * [入　力] nste  : 再生するステレオの数
 *          nmono : 再生するモノラルの数
 * [出　力] なし
 * [関数値] なし
 * [機　能] 入力されたステレオ・モノラルの数に合わせて使用するボイスを
 *			セットアップする。
 *  Setup voice resource
 * [Inputs  ] nste  : Number of stereo
 *            nmono : Number of monoral
 * [Outputs ] None
 * [Return  ] None
 * [Function] Setup voice resource from input number of stereo and monoral.
 */
void ADXPS2_SetupVoice(Sint32 nste, Sint32 nmono);

/***
 *			PS2専用関数(ADXM)
 ***/

/*	V-Sync割り込みハンドラ */
int ADXPS2_ExecVint(int arg);
/*	V-Sync待ち関数 */
void ADXPS2_WaitVsync(void);
/*	V-Sync毎に呼ばれる関数 */
Bool ADXPS2_ExecServerEx(void *obj);

/* メインスレッドのスリープ */
void ADXPS2_SleepMainThrd(void);
/* メインスレッドの起床 */
void ADXPS2_WakeupMainThrd(void);
/*	アイドルスレッドのレジューム	*/
void ADXPS2_ResumeIdleThrd(void);

/***
 *			デバッグ用
 ***/

/*	EE-IOP間のデータ流量チェック関数	*/
Sint32 ADXPS2_GetNumDataSjtmp(ADXT adxt, Sint32 chno);
Sint32 ADXPS2_GetNumRoomSjtmp(ADXT adxt, Sint32 chno);
Sint32 ADXPS2_GetNumDataSjiop(ADXT adxt, Sint32 chno);
Sint32 ADXPS2_GetNumRoomSjiop(ADXT adxt, Sint32 chno);

/* Dual Layer DVD */
void ADXPS2_SetDvdLayer(Sint32 layer);
Sint32 ADXPS2_GetDvdLayer(void);

#ifdef __cplusplus
}
#endif

#endif

/* end of file */

#endif	/* _CRI_MW_H_ */

/* end of file */
#ifndef SVM_H
#define SVM_H


void D_00179C50();
void D_00179650();
void D_00179668();
void D_00179698();
void D_001796C8();
void D_00179680();
void D_001796B0();
void func_001796E0(const Char8* format, ...);
void D_001799E0(Sint32 arg0, void (*arg1)(), Sint32 arg2);
void D_00179A38(void (*callback)(void*, Char8*), void* object);
Sint32 func_001797D8(Sint32, Sint32 (*)(void*), void*);
void D_00179920(Sint32, Sint32, Sint32 (*)(void*), void*);
void D_001798A8(Sint32 svtype, Sint32 id);
void D_00179A78(void (*func)(void*), void* object);
void D_00179A90(void (*func)(void*), void* object);
void func_00179C90();
Sint32 func_00179B70();
Sint32 D_00179B88();
Sint32 D_00179BA0();
Sint32 D_00179BB8();
Sint32 D_00179CE8(Sint32* mem);
void func_00179788(const Char8* msg);

#endif

#ifndef _STDIO_H
#define _STDIO_H

#ifndef _REENT_H_
#define _REENT_H_

#ifndef _TIME_H
#define _TIME_H

struct tm
{
  int	tm_sec;
  int	tm_min;
  int	tm_hour;
  int	tm_mday;
  int	tm_mon;
  int	tm_year;
  int	tm_wday;
  int	tm_yday;
  int	tm_isdst;
};

#endif

struct _glue 
{
  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

/*
 * atexit() support
 */

#define	_ATEXIT_SIZE 32	/* must be at least 32 to guarantee ANSI conformance */

struct _atexit {
	struct	_atexit *_next;			/* next in list */
	int	_ind;				/* next index in this table */
	void	(*_fns[_ATEXIT_SIZE])(void);	/* the table itself */
};

struct __sbuf {
	unsigned char *_base;
	int	_size;
};

typedef long _fpos_t;

struct __sFILE {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

  /* operations */
  void *	_cookie;	/* cookie passed to io functions */

  int	(*_read)(void * _cookie, char *_buf, int _n);
  int	(*_write)(void * _cookie, const char *_buf, int _n);
  _fpos_t (*_seek)(void * _cookie, _fpos_t _offset, int _whence);
  int	(*_close)(void * _cookie);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub;	/* ungetc buffer */
  unsigned char *_up;	/* saved _p when _p is doing ungetc data */
  int	_ur;		/* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3];	/* guarantee an ungetc() buffer */
  unsigned char _nbuf[1];	/* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb;	/* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int	_blksize;	/* stat.st_blksize (may be != _bf._size) */
  int	_offset;	/* current lseek offset */

  struct _reent *_data;
};

struct _reent
{
  /* local copy of errno */
  int _errno;

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  struct __sFILE *_stdin, *_stdout, *_stderr;

  int  _inc;			/* used by tmpnam */
  char _emergency[25];
 
  int _current_category;	/* used by setlocale */
  const char *_current_locale;

  int __sdidinit;		/* 1 means stdio has been init'd */

  void (*__cleanup)(struct _reent *);

  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  /* used by some fp conversion routines */
  int _cvtlen;			/* should be size_t */
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _rand_next;
          char * _strtok_last;
          char _asctime_buf[26];
          struct tm _localtime_buf;
          int _gamma_signgam;
        } _reent;
  /* Two next two fields were once used by malloc.  They are no longer
     used. They are used to preserve the space used before so as to
     allow addition of new reent fields and keep binary compatibility.   */ 
      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[_N_LISTS];
          unsigned int _nmalloc[_N_LISTS];
        } _unused;
    } _new;

  /* atexit stuff */
  struct _atexit *_atexit;	/* points to head of LIFO stack */
  struct _atexit _atexit0;	/* one guaranteed table, required by ANSI */

  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __sFILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue;			/* root of glue chain */
  struct __sFILE __sf[3];		/* first three file descriptors */
};

#ifndef __ATTRIBUTE_IMPURE_PTR__
#define __ATTRIBUTE_IMPURE_PTR__
#endif

extern struct _reent *_impure_ptr __ATTRIBUTE_IMPURE_PTR__;

void _reclaim_reent (struct _reent *);

#ifndef _REENT_ONLY
#define _REENT _impure_ptr
#endif

#endif

typedef struct __sFILE FILE;

#ifndef NULL
#define	NULL	0L
#endif

#define	EOF	(-1)

#define	stdin	(_impure_ptr->_stdin)
#define	stdout	(_impure_ptr->_stdout)
#define	stderr	(_impure_ptr->_stderr)

#define _stdin_r(x)	((x)->_stdin)
#define _stdout_r(x)	((x)->_stdout)
#define _stderr_r(x)	((x)->_stderr)

extern int printf(const char* format, ...);
extern int vsprintf(char* buf, const char* fmt, ...);

#endif
#ifndef _STRING_H
#define _STRING_H


void* memset(void* s, int c, size_t n);
size_t strlen(const char* s);
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
char* strupr(char* str);
char* strchr(const char*, int);

#endif

#if defined(TARGET_PS2)
//===========================================================================
// mw_stdarg.h	(c)2001 Metrowerks Inc. All rights reserved.
//===========================================================================


/* This header is for compatibility with GCC's implementation of
 * the standard variable argument lists. The Metrowerks compiler
 * complies with the GCC 2.95.x implementation. Newer versions of GCC 
 * have changed their internal implementation so this header remaps 
 * the macros to something the Metrowerks compiler can still interpret.
 */

#pragma once

#ifndef __MW_STDARG_H__
#define __MW_STDARG_H__

#define _STDARG_H  /* to avoid pulling in gcc's stdarg.h */

#undef __va_rounded_size
#undef __va_reg_size
#undef __va_next_addr
#undef __va_copy

#undef va_start
#undef va_end

typedef char* va_list;

enum {
  __no_type_class = -1,
  __void_type_class,
  __integer_type_class,
  __char_type_class,
  __enumeral_type_class,
  __boolean_type_class,
  __pointer_type_class,
  __reference_type_class,
  __offset_type_class,
  __real_type_class,
  __complex_type_class,
  __function_type_class,
  __method_type_class,
  __record_type_class,
  __union_type_class,
  __array_type_class,
  __string_type_class,
  __set_type_class,
  __file_type_class,
  __lang_type_class
};


#ifdef __mips64
  #define __va_rounded_size(__TYPE) \
      (((sizeof (__TYPE) + 8 - 1) / 8) * 8)
  #define __va_reg_size 8 
#else
  #define __va_rounded_size(__TYPE) \
      (((sizeof (__TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))
  #define __va_reg_size 4   
#endif


#define va_start(__AP, __LASTARG)                             \
  (__AP = ((char*) __builtin_next_arg (__LASTARG)             \
           - (__builtin_args_info (2) >= 8 ? 0                \
           : (8 - __builtin_args_info (2)) * __va_reg_size)))

#define va_end(x) ((void)0)

#define __va_next_addr(__AP, __type)					\
  ((__AP += __va_reg_size) - __va_reg_size)
  
#define va_arg(__AP, __type)						\
  ((__va_rounded_size (__type) <= __va_reg_size)			\
   ? *(__type *) (void *) __va_next_addr (__AP, __type)		\
   : (__builtin_classify_type (* (__type *) 0) >= __record_type_class	\
      ? **(__type **) (void *) __va_next_addr (__AP, __type)		\
      : *(__type *) (void *) __va_next_addr (__AP, __type)))


#define __va_copy(dest, src) (dest) = (src)


#endif /* __MW_STDARG_H__ */

/* mw_stdarg.h */



#else
#include <stdarg.h>
#endif

typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback;

typedef struct {
    void (*func)(void*, Char8*);
    void* object;
} SVMErrorCallback;

typedef struct {
    Sint32 (*func)(void*);
    void* object;
} SVMSVRCallback;

typedef struct {
    void (*unk0)();
    Sint32 unk4;
} SVM_UNK;extern Char8* D_00396E08;
extern volatile Sint32 D_00396E0C;
extern volatile Sint32 D_00396E10;
extern volatile Sint32 D_00396E14;
extern Sint32 D_00396E18[8];
extern Sint32 D_00396E38[8];
extern Char8 D_00396E58[128];


// bss
#if defined(TARGET_PS2)
extern Sint32 (*svm_test_and_set_callback)();
extern SVMErrorCallback svm_error_callback;
extern SVMLockCallback D_00510FA8;
extern SVMLockCallback svm_lock_callback;
extern SVM_UNK D_006C04E0[8];
extern SVMSVRCallback D_006C0360[8][6]; // svm_svr_callbacks
// extern Uint8 D_006C0340[0x20];
#else
Sint32 (*svm_test_and_set_callback)();extern SVMErrorCallback svm_error_callback;
extern SVMLockCallback D_00510FA8;
extern SVMLockCallback svm_lock_callback;
extern SVM_UNK D_006C04E0[8];
extern SVMSVRCallback D_006C0360[8][6];
// svm_svr_callbacks
// Uint8 D_006C0340[0x20];
#endif

void D_00179560(Sint32 type);


void func_00179520(Sint32 type) {
    if (D_00510FA8.func == NULL) {
        return;
    }

    D_00396E10 -= 1;

    if (D_00396E10 == 0) {
        if (D_00396E14 != type) {
            func_001796E0(
                D_003CC6C8, D_00396E14, type);
        }

        D_00396E14 = 0;
    }

    D_00510FA8.func(D_00510FA8.object);
}
void D_00179650();
void D_00179668();
void D_00179680();


















void func_00179788(const Char8* msg);








void D_001798A8(Sint32 group, Sint32 id);
void D_00179920(Sint32 svtype, Sint32 id, Sint32 (*func)(void*), void* object);
void D_001799E0(Sint32 arg0, void (*arg1)(), Sint32 arg2);



void D_00179A78(void (*func)(void*), void* object);
void D_00179A90(void (*func)(void*), void* object);
Sint32 D_00179AA8(Sint32 svtype);











Sint32 D_00179BB8();







void D_00179C50();
void func_00179C90();
Sint32 D_00179CE8(Sint32* mem);
Sint32 D_00179D50(Sint32 (*callback)());
Sint32 D_00179D78();

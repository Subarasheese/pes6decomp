/* CRI middleware code; source adapted from Persona4 (src/cri/re4/adx_bsc.c). */
 
 



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













 




 





typedef struct SJ_OBJ *SJ;

typedef struct {
	Uint8 *data;
	Sint32 len;
} SJCK;

typedef struct {
	Uint8 data[16];
} SJUUID;

 



 


typedef struct {
	void *QueryInterface;                              
	void *AddRef;                                      
	void *Release;                                     
	void (*Destroy)(SJ sj);                            
	const SJUUID *(*GetUuid)(SJ sj);                   
	void (*Reset)(SJ sj);                              
	void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);  
	void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);    
	void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);      
	Sint32 (*GetNumData)(SJ sj, Sint32 id);            
	Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);  
	void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Char8 *msg), void *obj);  
} SJ_IF;

struct SJ_OBJ {
	SJ_IF *vtbl;
};











SJ SJRBF_Create(void *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_Create(void *buf, Sint32 bsize);
void SJCRS_Lock(void);
void SJCRS_Unlock(void);
void SJERR_CallErr(Char8 *msg);
void *SJ_SearchTag(SJCK *inf, const Char8 *tag, const Char8 *name, SJCK *out);
void SJ_SplitChunk(SJCK *src, Sint32 n, SJCK *a, SJCK *b);




typedef struct ADXPD_OBJ *ADXPD;

 





 






typedef struct {
	Sint16 used;                                              
	Sint16 x02;                                               
	Sint32 stat;                                              
	ADXPD pd;                                                 
	Sint8 x0c;                                                
	Sint8 bps;                                                
	Sint8 nch;                                                
	Sint8 x0f;                                                
	Sint32 fmt;                                               
	Sint32 sfreq;                                             
	Sint32 total_nsmpl;                                       
	Sint16 x1c;                                               
	Uint8 pad1e[2];
	Sint32 x20;                                               
	Sint16 x24;                                               
	Sint16 x26;                                               
	Sint32 x28;                                               
	Sint32 x2c;                                               
	Sint32 x30;                                               
	Sint32 x34;                                               
	Sint32 x38;                                               
	Sint32 x3c;                                               
	Sint32 x40;                                               
	Sint32 x44;                                               
	Sint16 *inbuf;                                            
	Sint32 inbuf_nsmpl;                                       
	Sint32 out_nch;                                           
	Sint32 x54;                                               
	Sint32 out_fmt;                                           
	Sint16 *pcmbuf;                                           
	Sint32 pcmbuf_nsmpl;                                      
	Sint32 pcmbuf_chofst;                                     
	Sint32 wr_pos;                                            
	Sint32 wr_nsmpl;                                          
	Sint32 wr_x70;                                            
	Sint32 x74;                                               
	void (*getwr_func)(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70);  
	void *getwr_obj;                                          
	void (*addwr_func)(void *obj, Sint32 nbyte, Sint32 nsmpl);  
	void *addwr_obj;                                          
	Sint32 x88;                                               
	Sint32 x8c;                                               
	Sint32 dec_nsmpl;                                         
	Sint32 dec_nbyte;                                         
	Sint16 x98;                                               
	Sint16 x9a;                                               
	Sint16 x9c;                                               
	Uint8 pad9e[2];
	Sint16 key[3];                                            
	Sint16 extprm[3];                                         
	Sint16 dly[2][2];                                         
	void *ahx;                                                
	Sint32 nsmpl;                                             
	Sint32 nsmpl96;                                           
	Uint8 padc0[0xCC - 0xC0];
	Sint32 ainf_len;                                          
	Uint8 ainf[16];                                           
	 
	Sint16 def_outvol;                                        
	Sint16 def_pan[2];                                        
	Uint8 padda[2];
	void *xdc;                                                
	Uint8 pade0[8];
	Sint32 cb_nbyte;                                         
	Sint32 xec;                                              
	void (*cb_func)(void *obj, Sint32 nbyte, Sint32 nsmpl);  
	void *cb_obj;                                            
} ADXB_OBJ;



typedef ADXB_OBJ *ADXB;

Sint32 ADXPD_GetStat(ADXPD pd);

Sint32 ADXB_CheckSpsd(void *buf);
void ADXB_ExecOneSpsd(ADXB adxb);
Sint32 ADXB_DecodeHeaderSpsd(ADXB adxb, void *buf, Sint32 bsize);
Sint32 ADX_DecodeInfoSpsd(Uint8 *buf, Sint32 bsize, Sint16 *hdrlen, Sint8 *x0c, Sint8 *bps, Sint8 *x0f,
			  Sint8 *nch, Sint32 *sfreq, Sint32 *nsmpl, Sint32 *fmt, Sint16 *x9c);




 







extern void ADXB_ExecOneAhx(ADXB adxb);
extern void ADXB_ExecOneAiff(ADXB adxb);
extern void ADXB_ExecOneAu(ADXB adxb);
extern void ADXB_ExecOneWav(ADXB adxb);
extern Sint32 ADXB_CheckWav(void *buf);
extern Sint32 ADXB_CheckAiff(void *buf);
extern Sint32 ADXB_CheckAu(void *buf);
extern Sint32 ADXB_DecodeHeaderWav(ADXB adxb, void *buf, Sint32 bsize);
extern Sint32 ADXB_DecodeHeaderAiff(ADXB adxb, void *buf, Sint32 bsize);
extern Sint32 ADXB_DecodeHeaderAu(ADXB adxb, void *buf, Sint32 bsize);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);
extern void ADXERR_CallErrFunc2(const Char8 *msg1, const Char8 *msg2);
extern void ADXPD_ExecHndl(ADXPD pd);
extern Sint32 ADXPD_GetNumBlk(ADXPD pd);
extern void ADXPD_Reset(ADXPD pd);
extern void ADXPD_Stop(ADXPD pd);
extern void ADXPD_Start(ADXPD pd);
extern Sint32 ADXPD_EntryPl2(ADXPD pd, void *in, Sint32 nblk, Sint16 *out0, Sint16 *out1);
extern Sint32 ADXPD_EntrySte(ADXPD pd, void *in, Sint32 nblk, Sint16 *out0, Sint16 *out1);
extern Sint32 ADXPD_EntryMono(ADXPD pd, void *in, Sint32 nblk, Sint16 *out0, Sint16 *out1);
extern void ADXPD_Destroy(ADXPD pd);
extern void func_004d89b0(ADXPD pd, Sint16 *e1, Sint16 *e2, Sint16 *e3);
extern void ADXPD_SetExtPrm(ADXPD pd, Sint16 e1, Sint16 e2, Sint16 e3);
extern void ADXPD_GetDly(ADXPD pd, Sint16 *d0, Sint16 *d1);
extern void ADXPD_SetDly(ADXPD pd, Sint16 *d0, Sint16 *d1);
extern void ADXPD_SetCoef(ADXPD pd, Sint32 sfreq, Sint32 cutoff);
extern ADXPD ADXPD_Create(void);
extern void func_004d8830(void);
extern Sint32 ADX_DecodeInfo(Uint8 *data, Sint32 len, Sint16 *hdrlen, Sint8 *fmt, Sint8 *bps, Sint8 *blksiz,
                             Sint8 *nch, Sint32 *sfreq, Sint32 *nsmpl, Sint32 *blksmpl);
extern Sint32 ADX_DecodeInfoExVer(Uint8 *data, Sint32 len, Uint8 *major, Uint8 *minor);
extern Sint32 ADX_DecodeInfoExADPCM2(Uint8 *data, Sint32 len, Uint16 *cutoff);
extern Sint32 ADX_DecodeInfoExIdly(Uint8 *data, Sint32 len, Uint16 *idly, Uint16 *idly2);
extern Sint32 ADX_DecodeInfoExLoop(Uint8 *data, Sint32 len, Sint32 *lptype, Sint16 *nloop, Sint16 *lpflg,
                                   Sint32 *lpstart, Sint32 *lpstartofst, Sint32 *lpend, Sint32 *lpendofst);
extern Sint32 ADX_DecodeInfoAinf(Uint8 *data, Sint32 len, Sint32 *ainfsiz, void *ainf, Sint16 *a, Sint16 *b);
extern void *memset(void *dst, int c, Uint32 n);
extern int sprintf(char *dst, const char *fmt, ...);

void ADXB_ExecOneAdx(ADXB adxb);
void ADXB_EvokeDecode(ADXB adxb);
Sint32 ADXB_DecodeHeaderAdx(ADXB adxb, Uint8 *buf, Sint32 bsize);
void ADXB_Destroy(ADXB adxb);
void adxb_DefAddWr(void *obj, Sint32 nbyte, Sint32 nsmpl);
Sint16 *adxb_DefGetWr(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70);

 
typedef struct ADXPD_OBJ {
	Uint8 pad0[0x10];
	Sint32 nblk;                     
	Uint8 pad14[0x20 - 0x14];
	Sint16 *out0;                    
	Sint16 *out1;                    
} ADXPD_OBJ;extern const Char8 skg_version[];
extern const Sint16 skg_prim_tbl[1024];
extern Sint32 skg_init_count;
extern void (*skg_err_func)(void *obj, const Char8 *msg);
extern void *skg_err_obj;
extern Sint32 skg_dmy[2];
void SKG_Init(void);
void SKG_Finish(void);
void SKG_EntryErrFunc(void (*func)(void *obj, const Char8 *msg), void *obj);
const Char8 *SKG_GetVersion(void);
void SKG_SetDmy(Sint32 a, Sint32 b);
Sint32 SKG_MakeKey(Sint32 nsmpl, Sint16 *k0, Sint16 *km, Sint16 *ka);
extern void (*ahxsetextfunc)(void *ahx, Sint16 *key);
extern void (*pl2encodefunc)(ADXB adxb, Sint16 smpl, Sint16 *in, Sint16 *out);
extern void (*pl2resetfunc)(ADXB adxb);
extern Sint16 adxb_def_k0;
extern Sint16 adxb_def_km;
extern Sint16 adxb_def_ka;
extern ADXB_OBJ adxb_obj[16];
void ADXB_SetAhxExtFunc(void (*func)(void *ahx, Sint16 *key));
void ADXB_SetPl2Func(void (*encode)(ADXB adxb, Sint16 smpl, Sint16 *in, Sint16 *out), void (*reset)(ADXB adxb));
void ADXB_SetDefKey(Sint16 k0, Sint16 km, Sint16 ka);
void ADXB_ExecHndl(ADXB adxb);
void adxb_CopySmpl(Sint16 *dst, Sint16 *src, Sint32 n);
void ADXB_ExecOneAdx(ADXB adxb);
void adxb_EntrySte(void *obj, Sint32 n);
void adxb_EntryPl2(void *obj, Sint32 n);
void adxb_EntryMono(void *obj, Sint32 n);
void ADXB_EvokeDecode(ADXB adxb);
Sint32 ADXB_GetDecNumSmpl(ADXB adxb);
Sint32 ADXB_GetDecDtLen(ADXB adxb);
void ADXB_Reset(ADXB adxb);
void ADXB_Stop(ADXB adxb);
void ADXB_Start(ADXB adxb);
void ADXB_EntryData(ADXB adxb, Sint16 *buf, Sint32 nbyte);
Sint32 ADXB_GetStat(ADXB adxb);
void ADXB_RestoreSnapshot(ADXB adxb);
void ADXB_TakeSnapshot(ADXB adxb);
Sint16 ADXB_GetDefPan(ADXB adxb, Sint32 ch);
Sint16 ADXB_GetDefOutVol(ADXB adxb);
Sint32 ADXB_GetAinfLen(ADXB adxb);
Sint32 ADXB_GetLpEndOfst(ADXB adxb);
Sint32 ADXB_GetLpEndPos(ADXB adxb);
Sint32 ADXB_GetLpStartOfst(ADXB adxb);
Sint32 ADXB_GetLpStartPos(ADXB adxb);
Sint16 ADXB_GetNumLoop(ADXB adxb);
Sint32 ADXB_GetTotalNumSmpl(ADXB adxb);
Sint32 ADXB_GetBlkSmpl(ADXB adxb);
Sint32 ADXB_GetOutBps(ADXB adxb);
Sint32 ADXB_GetNumChan(ADXB adxb);
Sint32 ADXB_GetSfreq(ADXB adxb);
Sint16 ADXB_GetFormat(ADXB adxb);
Sint16 *ADXB_GetPcmBuf(ADXB adxb);
void ADXB_EntryGetWrFunc(ADXB adxb, void (*func)(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70), void *obj);
Sint32 ADXB_DecodeHeader(ADXB adxb, void *buf, Sint32 bsize);


 
 
 
void func_00158360(ADXB adxb)
{
	adxb->x02 = 1;
	adxb->sfreq = 48000;
	adxb->nch = 2;
	adxb->bps = 16;
	adxb->total_nsmpl = 0x7FFFFFFF;
	adxb->x0f = 127;
	adxb->fmt = 1024;
	adxb->x98 = adxb->x9a;
	adxb->out_nch = adxb->nch;
	adxb->x54 = adxb->x0f;
	adxb->out_fmt = adxb->fmt;
	adxb->pcmbuf = (Sint16 *)adxb->x3c;
	adxb->pcmbuf_nsmpl = adxb->x40;
	adxb->pcmbuf_chofst = adxb->x44;
	adxb->x8c = 0;
	adxb->x1c = 0;
	adxb->x24 = 0;
	adxb->x26 = 0;
	adxb->x20 = 0;
	adxb->x28 = 0;
	adxb->x2c = 0;
	adxb->x30 = 0;
	adxb->x34 = 0;
	adxb->x88 = 0;
}
Sint32 adxb_SetKey(ADXB adxb, Uint8 major, Uint8 minor, Sint32 nsmpl, Sint16 *k0, Sint16 *km, Sint16 *ka);
Sint32 ADXB_DecodeHeaderAdx(ADXB adxb, Uint8 *buf, Sint32 bsize);
const Char8 *ADXB_GetSignature(void);
void ADXB_Destroy(ADXB adxb);
ADXB ADXB_Create(Sint32 x38, Sint16 *pcmbuf, Sint32 bufsmpl, Sint32 chofst);
void adxb_DefAddWr(void *obj, Sint32 nbyte, Sint32 nsmpl);
Sint16 *adxb_DefGetWr(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70);
void ADXB_Init(void);

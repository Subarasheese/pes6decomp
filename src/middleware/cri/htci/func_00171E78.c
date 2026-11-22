/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/lsc.c (lsc_SearchFreeObj). See THIRD_PARTY.md. */

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef signed int Sint32;
typedef char Char8;
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
typedef struct ADXSTM_OBJ *ADXSTM;
typedef struct {
    Sint32 id;
    Char8 *fname;
    Sint32 fname_sum;
    void *dir;
    Sint32 ofst;
    Sint32 nsct;
    Sint32 stat;
    Sint32 pos;
} LSC_ENTRY;
typedef struct {
    Sint8 used;
    Sint8 stat;
    Sint8 stm_start;
    Sint8 loop_flag;
    Sint8 pause_flag;
    Uint8 pad5[3];
    SJ sj;
    Sint32 pad0c;
    Sint32 pad10;
    Sint32 min_val;
    Sint32 bufsize;
    Sint32 wr_idx;
    Sint32 rd_idx;
    Sint32 num_stm;
    ADXSTM stm;
    Sint32 cur_nsct;
    Sint32 pad30;
    Sint32 pad34;
    LSC_ENTRY tbl[16];
} LSC_OBJ;
typedef LSC_OBJ *LSC;
extern LSC_OBJ D_00387A80[32];

LSC func_00171E78(void) {
    LSC lsc;
    Sint32 i;
    lsc = 0;
    for (i = 0; i < 32; i++) {
        if (D_00387A80[i].used == 0) {
            lsc = &D_00387A80[i];
            break;
        }
    }

    return lsc;
}

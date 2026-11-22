/* compiler: ee-gcc-2.96-as212-G0 */
/* crashbashash/DW4_Decomp, src/cri/lsc.c (LSC_Finish). See THIRD_PARTY.md. */

typedef unsigned int size_t;
typedef struct SfdSj SfdSj;
typedef struct SfdSjChunk {
    char *data;
    int len;
} SfdSjChunk;
typedef struct SfdSjVtbl {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj *sj);
    int (*getUuid)(SfdSj *sj);
    void (*reset)(SfdSj *sj);
    void (*getChunk)(SfdSj *sj, int id, int n, SfdSjChunk *ck);
    void (*ungetChunk)(SfdSj *sj, int id, SfdSjChunk *ck);
    void (*putChunk)(SfdSj *sj, int id, SfdSjChunk *ck);
    int (*getNumData)(SfdSj *sj, int id);
} SfdSjVtbl;
struct SfdSj {
    SfdSjVtbl *vtbl;
};
typedef void (*LscErrFunc)(void *obj, const char *msg);
typedef struct LscStm {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm;
typedef struct LscObj {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj *sj;
    SfdSjChunk ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm stms[16];
} LscObj;
extern void *memset(void *, int, size_t);

extern void func_00171FE0(LscObj *lsc);
extern int D_00387A78;
extern LscObj D_00387A80[32];
extern void func_001727F8(LscErrFunc func, void *obj);
extern void func_001728B8(void);

void func_00172940(void) {
    LscObj *lsc;
    int i;
    if ((--D_00387A78) == 0) {
        lsc = D_00387A80;
        for (i = 0; i < 32; i++, lsc++) {
            if (lsc->used == 1) {
                func_00171FE0(lsc);
            }
        }

        memset(D_00387A80, 0, sizeof(D_00387A80));
        func_001728B8();
        func_001727F8(0, 0);
    }
}

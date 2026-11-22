/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (ps2rna_exec_one). See THIRD_PARTY.md. */

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
enum SjLine { SJ_LIN_FREE = 0, SJ_LIN_DATA = 1 };
typedef struct SjxObj SjxObj;
typedef struct DtrObj DtrObj;
extern signed char func_0016DD70(DtrObj *dtr);
extern void func_0016DFD0(DtrObj *dtr);
typedef struct Ps2RnaPsj {
    char used;
    void *sjrmt;
    SfdSj *sjuni;
    SjxObj *sjx;
    SfdSjChunk ck;
} Ps2RnaPsj;
typedef struct Ps2Rna {
    signed char used;
    int maxnch;
    Ps2RnaPsj *psj[2];
    DtrObj *dtr[2];
    SfdSj *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna;
void func_00175BB0(Ps2Rna *rna) {
    SfdSjChunk ck;
    int nfree;
    int i;
    if (rna->transsw != 1) {
        return;
    }
    nfree = 0;
    for (i = 0; i < rna->nch; i++) {
        if (func_0016DD70(rna->dtr[i]) != 1) {
            if (rna->psj[i]->sjuni->vtbl->getNumData(rna->psj[i]->sjuni, SJ_LIN_FREE) ==
                rna->psj_bufsize) {
                nfree++;
            }
        }
    }

    if (nfree != rna->nch) {
        return;
    }
    i = 0;
    if (nfree <= 0) {
        return;
    }
    for (i = 0; i < rna->nch; i++) {
        rna->psj[i]->sjuni->vtbl->getChunk(rna->psj[i]->sjuni, SJ_LIN_FREE, 0x7fffffff, &ck);
        rna->psj[i]->sjuni->vtbl->putChunk(rna->psj[i]->sjuni, SJ_LIN_FREE, &ck);
        rna->psj[i]->sjuni->vtbl->getChunk(rna->psj[i]->sjuni, SJ_LIN_FREE, 0x7fffffff, &ck);
        if (ck.len != rna->psj_bufsize) {
            for (;;) {
            }
        }
        rna->psj[i]->sjuni->vtbl->putChunk(rna->psj[i]->sjuni, SJ_LIN_FREE, &ck);
        rna->stopflag = 0;
        func_0016DFD0(rna->dtr[i]);
    }
}

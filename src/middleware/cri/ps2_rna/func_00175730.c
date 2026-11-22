/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (PS2RNA_Destroy). See THIRD_PARTY.md. */

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
typedef struct SjxObj SjxObj;
typedef struct DtrObj DtrObj;
extern void func_0016DFA8(DtrObj *dtr);
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
extern int DTX_CallUrpc(int fno, int *send, int nsend, int *recv, int nrecv);
enum {
    PS2RNA_RPC_CREATE = 8,
    PS2RNA_RPC_DESTROY = 9,
    PS2RNA_RPC_OUTMODE = 11,
    PS2RNA_RPC_INIT_PORT = 12,
    PS2RNA_RPC_FINISH_PORT = 13,
    PS2RNA_RPC_START_AUX = 14,
    PS2RNA_RPC_STOP_AUX = 15,
    PS2RNA_RPC_OPEN_PORT = 16,
    PS2RNA_RPC_CLOSE_PORT = 17
};
extern int D_0038DBD0;
extern int D_0038DBD8;
extern void func_001747D0(Ps2RnaPsj *psj);
void func_00175730(Ps2Rna *rna) {
    int arg[4];
    int i;
    if ((D_0038DBD8 != 1) || (D_0038DBD0 > 0)) {
        for (i = 0; i < rna->maxnch; i++) {
            if (rna->dtr[i] != 0) {
                func_0016DFA8(rna->dtr[i]);
            }
        }

        arg[0] = (int)rna->id;
        DTX_CallUrpc(PS2RNA_RPC_DESTROY, arg, 1, 0, 0);
        for (i = 0; i < rna->maxnch; i++) {
            if (rna->psj[i] != 0) {
                func_001747D0(rna->psj[i]);
            }
        }
    }
    rna->used = 0;
}

/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (PS2RNA_Create). See THIRD_PARTY.md. */

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
extern DtrObj *DTR_Create(SfdSj *sjs, SfdSj *sjd);
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
extern void func_001610B0(const char *format, ...);
typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
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
extern int D_0038DC18;
extern Ps2Rna D_00390030[16];
extern char D_003CBEC8[];
extern char D_003CBEF0[];
extern char D_003CBF18[];
extern Ps2RnaPsj *func_00174758(void);
extern void func_001747D0(Ps2RnaPsj *psj);
Ps2Rna *func_00175390(SfdSj **sjo, int nch) {
    int arg[4];
    int reply;
    Ps2RnaPsj *psj;
    int i;
    int j;
    int k;
    Ps2Rna *rna;
    int sv;
    for (i = 0; i < 16; i++) {
        rna = &D_00390030[i];
        if (rna->used == 0) {
            break;
        }
    }

    if (i == 16) {
        return 0;
    }
    sv = D_0038DBD8;
    if ((sv == 1) && (D_0038DBD0 <= 0)) {
        rna->used = sv;
        return rna;
    }
    memset(rna, 0, sizeof(*rna));
    rna->maxnch = nch;
    for (i = 0; i < nch; i++) {
        psj = func_00174758();
        rna->psj[i] = psj;
        if (psj == 0) {
            func_001610B0(D_003CBEC8);
            for (j = 0; j < nch; j++) {
                psj = rna->psj[j];
                if (psj != 0) {
                    func_001747D0(psj);
                }
            }

            return 0;
        }
    }

    arg[0] = nch;
    arg[1] = 0;
    for (i = 0; i < nch; i++) {
        arg[2 + i] = (int)rna->psj[i]->sjrmt;
    }

    rna->id = (void *)DTX_CallUrpc(PS2RNA_RPC_CREATE, arg, 4, &reply, 1);
    if (rna->id == 0) {
        func_001610B0(D_003CBEF0);
        return 0;
    }
    for (i = 0; i < nch; i++) {
        rna->dtr[i] = DTR_Create(sjo[i], rna->psj[i]->sjuni);
        if (rna->dtr[i] == 0) {
            func_001610B0(D_003CBF18);
            for (k = 0; k < nch; k++) {
                if (rna->dtr[k] != 0) {
                    func_0016DFA8(rna->dtr[k]);
                }
                if (rna->id != 0) {
                    arg[0] = (int)rna->id;
                    DTX_CallUrpc(PS2RNA_RPC_DESTROY, arg, 1, 0, 0);
                }
                if (rna->psj[k] != 0) {
                    func_001747D0(rna->psj[k]);
                }
            }

            return 0;
        }
    }

    for (i = 0; i < nch; i++) {
        rna->sjo[i] = sjo[i];
    }

    rna->playsw = 0;
    rna->sent_playsw = 0;
    rna->nch = nch;
    rna->sent_nch = nch;
    rna->auxsw = 0;
    rna->sent_auxsw = 0;
    rna->outvol = 0;
    rna->sent_outvol = 0;
    rna->dualsw = D_0038DC18;
    rna->sent_dualsw = D_0038DC18;
    rna->stopflag = 0;
    rna->sent_stopflag = 0;
    for (i = 0; i < nch; i++) {
        rna->outpan[i] = 0;
        rna->sent_outpan[i] = 0;
    }

    rna->transsw = 0;
    rna->trans_stopped = 1;
    rna->outbalance = 0;
    rna->sent_outbalance = 0;
    rna->pad36 = 0;
    rna->ring_size = sjo[0]->vtbl->getNumData(sjo[0], 1) + sjo[0]->vtbl->getNumData(sjo[0], 0);
    rna->psj_bufsize = 0x4000;
    rna->used = 1;
    return rna;
}

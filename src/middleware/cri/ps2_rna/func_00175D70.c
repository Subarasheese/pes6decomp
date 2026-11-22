/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (PS2RNA_ExecServer). See THIRD_PARTY.md. */

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
extern void func_00176360(void);
extern void func_00176378(void);
extern void func_00179148(void);
typedef struct DtrObj DtrObj;
extern void func_0016DD78(void);
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
extern int D_0038DBD0;
extern int D_0038DBD8;
extern Ps2Rna D_00390030[16];
extern void func_00175BB0(Ps2Rna *rna);
void func_00175D70(void) {
    int i;
    if ((D_0038DBD8 == 1) && (D_0038DBD0 <= 0)) {
        return;
    }
    func_00176360();
    for (i = 0; i < 16; i++) {
        if (D_00390030[i].used == 1) {
            func_00175BB0(&D_00390030[i]);
        }
    }

    func_00176378();
    func_0016DD78();
    func_00179148();
}

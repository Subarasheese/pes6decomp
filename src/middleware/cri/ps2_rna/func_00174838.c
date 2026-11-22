/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (ps2rna_sndcbf). See THIRD_PARTY.md. */

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
extern int D_0038DC04;
extern int D_0038CC30[];
extern int D_0038DC08;
extern Ps2Rna D_00390030[16];
enum {
    PS2RNA_CMD_PLAY = 2,
    PS2RNA_CMD_NCH = 3,
    PS2RNA_CMD_SFREQ = 4,
    PS2RNA_CMD_OUTVOL = 5,
    PS2RNA_CMD_STOPFLAG = 8,
    PS2RNA_CMD_OUTPAN = 9,
    PS2RNA_CMD_AUXSW = 10,
    PS2RNA_CMD_OUTMODE = 11,
    PS2RNA_CMD_DUALSW = 12,
    PS2RNA_CMD_OUTBALANCE = 13
};
typedef struct Ps2RnaCmd {
    short op;
    void *id;
    int val;
    int val2;
} Ps2RnaCmd;
void func_00174838(void *obj, void *data, int size) {
    int *buf = data;
    Ps2Rna *rna;
    int i;
    int j;
    int k;
    Ps2RnaCmd *cmd;
    cmd = (Ps2RnaCmd *)(buf + 4);
    j = 0;
    for (i = 0; i < 16; i++) {
        rna = &D_00390030[i];
        if (rna->used != 1) {
            continue;
        }
        if (j == 128) {
            goto end;
        }
        if (D_0038DC04 != D_0038DC08) {
            cmd[j].op = PS2RNA_CMD_OUTMODE;
            cmd[j].id = 0;
            cmd[j].val = D_0038DC04;
            D_0038DC08 = D_0038DC04;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (rna->stopflag != rna->sent_stopflag) {
            cmd[j].op = PS2RNA_CMD_STOPFLAG;
            cmd[j].id = rna->id;
            cmd[j].val = rna->stopflag;
            rna->sent_stopflag = rna->stopflag;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if ((rna->playsw == 0) && (rna->sent_playsw == 1)) {
            cmd[j].op = PS2RNA_CMD_PLAY;
            cmd[j].id = rna->id;
            cmd[j].val = rna->playsw;
            rna->sent_playsw = rna->playsw;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (rna->auxsw != rna->sent_auxsw) {
            cmd[j].op = PS2RNA_CMD_AUXSW;
            cmd[j].id = rna->id;
            cmd[j].val = rna->auxsw;
            rna->sent_auxsw = rna->auxsw;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (rna->dualsw != rna->sent_dualsw) {
            cmd[j].op = PS2RNA_CMD_DUALSW;
            cmd[j].id = rna->id;
            cmd[j].val = rna->dualsw;
            rna->sent_dualsw = rna->dualsw;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (rna->nch != rna->sent_nch) {
            cmd[j].op = PS2RNA_CMD_NCH;
            cmd[j].id = rna->id;
            cmd[j].val = rna->nch;
            rna->sent_nch = rna->nch;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (rna->sfreq != rna->sent_sfreq) {
            cmd[j].op = PS2RNA_CMD_SFREQ;
            cmd[j].val = rna->sfreq;
            rna->sent_sfreq = rna->sfreq;
            cmd[j].id = rna->id;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (rna->outvol != rna->sent_outvol) {
            int vol = D_0038CC30[-rna->outvol];
            cmd[j].op = PS2RNA_CMD_OUTVOL;
            cmd[j].id = rna->id;
            cmd[j].val = 0;
            cmd[j].val2 = vol;
            rna->sent_outvol = rna->outvol;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if (j == 127) {
            goto end;
        }
        for (k = 0; k < rna->nch; k++) {
            if (rna->outpan[k] != rna->sent_outpan[k]) {
                cmd[j].op = PS2RNA_CMD_OUTPAN;
                cmd[j].id = rna->id;
                cmd[j].val = k;
                cmd[j].val2 = rna->outpan[k];
                rna->sent_outpan[k] = rna->outpan[k];
                j++;
            }
        }

        if (rna->outbalance != rna->sent_outbalance) {
            cmd[j].op = PS2RNA_CMD_OUTBALANCE;
            cmd[j].val = rna->outbalance;
            rna->sent_outbalance = rna->outbalance;
            cmd[j].id = rna->id;
            j++;
        }
        if (j == 128) {
            goto end;
        }
        if ((rna->playsw == 1) && (rna->sent_playsw == 0)) {
            cmd[j].op = PS2RNA_CMD_PLAY;
            cmd[j].id = rna->id;
            cmd[j].val = rna->playsw;
            rna->sent_playsw = rna->playsw;
            j++;
        }
        if (j == 128) {
            goto end;
        }
    }

end:
    *buf = j;
}

/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxamp.c (ADXAMP_Create). See THIRD_PARTY.md. */

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
extern void func_00159E88(void);
extern void func_00159EA0(void);
enum AdxAmpStat { ADXAMP_STAT_STOP = 0, ADXAMP_STAT_EXEC = 2 };
typedef struct AdxAmpObj {
    signed char used;
    signed char stat;
    signed char maxnch;
    char rsrv;
    SfdSj *sji[2];
    SfdSj *sjo[2];
    int nsmpl[2];
    int nch;
    int sfreq;
    float frmlen;
    float frmprd;
    int nfrm;
} AdxAmpObj;
extern AdxAmpObj D_00376AE0[16];
AdxAmpObj *func_00155DC8(int maxnch, SfdSj **sji, SfdSj **sjo) {
    AdxAmpObj *amp;
    int i;
    int ch;
    for (i = 0; i < 16; i++) {
        if (D_00376AE0[i].used == 0) {
            break;
        }
    }

    if (i == 16) {
        return 0;
    }
    func_00159E88();
    amp = &D_00376AE0[i];
    amp->maxnch = maxnch;
    for (ch = 0; ch < maxnch; ch++) {
        amp->nsmpl[ch] = 0;
        amp->sji[ch] = sji[ch];
        amp->sjo[ch] = sjo[ch];
    }

    amp->sfreq = 44100;
    amp->stat = ADXAMP_STAT_STOP;
    amp->nfrm = 0;
    amp->frmlen = 0.1f;
    amp->nch = maxnch;
    amp->frmprd = 0.1f;
    amp->used = 1;
    func_00159EA0();
    return amp;
}

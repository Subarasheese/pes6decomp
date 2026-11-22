/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dtr.c (DTR_ExecServer). See THIRD_PARTY.md. */

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
typedef struct DtrObj DtrObj;
extern void func_0016E950(void);
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;
extern int sceSifDmaStat(unsigned int id);
struct DtrObj {
    signed char used;
    signed char stat;
    signed char transfer;
    char rsv;
    SfdSj *sjs;
    SfdSj *sjd;
    SfdSjChunk cks;
    SfdSjChunk ckd;
    sceSifDmaData dma;
    unsigned int dmaid;
    int srclin;
    int dstlin;
    int unit;
    int total;
};
extern DtrObj D_00385120[32];
extern void func_0016DA08(DtrObj *dtr);
void func_0016DD78(void) {
    int i;
    for (i = 0; i < 32; i++) {
        if ((D_00385120[i].stat == 1) && (D_00385120[i].transfer == 1)) {
            if (sceSifDmaStat(D_00385120[i].dmaid) >= 0) {
                return;
            }
        }
    }

    for (i = 0; i < 32; i++) {
        if (D_00385120[i].used == 1) {
            func_0016DA08(&D_00385120[i]);
        }
    }

    func_0016E950();
}

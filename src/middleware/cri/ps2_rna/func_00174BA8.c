/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (PS2RNA_Init). See THIRD_PARTY.md. */

extern void SJRMT_Init(void);
extern void SJX_Init(void);
typedef struct DtxObj DtxObj;
typedef void (*DtxCbf)(void *obj, void *buf, int size);
extern DtxObj *func_0016E350(unsigned int id, char *eewk, int iopwk, int wklen);
extern void func_0016E550(DtxObj *dtx, DtxCbf func, void *obj);
extern void func_0016E560(DtxObj *dtx, DtxCbf func, void *obj);
extern void func_0016E6E0(void);
extern int DTX_CallUrpc(int fno, int *send, int nsend, int *recv, int nrecv);
extern void func_001610B0(const char *format, ...);
typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
extern void *func_0010D698(unsigned int size);
extern int D_0038DBD0;
extern int D_0038DBD8;
extern void *D_0038DBEC;
extern int D_0038DC1C;
extern void *D_0038DC24;
extern DtxObj *D_00390670;
extern char *volatile D_0038CC28;
extern int D_0038DBE8;
extern int D_0038DBF0;
extern int D_0038DBF4;
extern int D_0038DC20;
extern int D_0038DC28;
extern int D_00390674;
extern char D_00390678[];
extern char D_003CBE08[];
extern char D_003CBE50[];
extern char D_003CBE78[];
extern char D_003CBCD0[];
extern void func_00174380(void);
extern void ps2rna_rcvcbf(void *obj, void *buf, int size);
extern void D_00174838(void *obj, void *data, int size);
extern void func_00174ED0(void);
void func_00174BA8(void) {
    int prm[3];
    D_0038CC28;
    if ((D_0038DBD8 == 1) && (D_0038DBD0 <= 0)) {
        return;
    }
    if (D_0038DC1C == 0) {
        SJRMT_Init();
        SJX_Init();
        func_0016E6E0();
        func_00174ED0();
        func_00174380();
        memset(D_00390678, 0, 2256);
        D_00390674 = 2176;
        D_0038DC20 = (((int)D_00390678) + 64) & (~63);
        if (D_0038DC24 == 0) {
            D_0038DC24 = func_0010D698(2256);
            if (D_0038DC24 == 0) {
                func_001610B0(D_003CBE08, 2256);
                for (;;) {
                }
            }
        }
        func_001610B0(D_003CBCD0, 2256, D_0038DC24);
        D_0038DC28 = (((int)D_0038DC24) + 64) & (~63);
        D_00390670 = func_0016E350(1, (char *)D_0038DC20, D_0038DC28, D_00390674);
        if (D_00390670 == 0) {
            func_001610B0(D_003CBE50);
            for (;;) {
            }
        }
        func_0016E550(D_00390670, ps2rna_rcvcbf, 0);
        func_0016E560(D_00390670, D_00174838, 0);
        if (D_0038DBEC == 0) {
            D_0038DBF4 = D_0038DBD0;
            D_0038DBE8 = (D_0038DBD0 * 1024) + 64;
            D_0038DBEC = func_0010D698(D_0038DBE8);
            if (D_0038DBEC == 0) {
                func_001610B0(D_003CBE78, D_0038DBE8);
                for (;;) {
                }
            }
            func_001610B0(D_003CBCD0, D_0038DBE8, D_0038DBEC);
        }
        D_0038DBF0 = (((int)D_0038DBEC) + 63) & (~63);
        prm[0] = D_0038DBF4;
        prm[1] = D_0038DBF0;
        prm[2] = D_0038DBE8;
        DTX_CallUrpc(10, prm, 3, 0, 0);
    }
    D_0038DC1C++;
}

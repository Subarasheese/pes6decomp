/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/ps2rna.c (PS2RNA_Finish). See THIRD_PARTY.md. */

extern void SJRMT_Finish(void);
extern void SJX_Finish(void);
typedef struct DtxObj DtxObj;
extern void func_0016E4E8(DtxObj *dtx);
extern void func_0016E7D0(void);
extern int func_0010D800(void *addr);
extern int D_0038DBD0;
extern int D_0038DBD8;
extern void *D_0038DBEC;
extern int D_0038DC1C;
extern void *D_0038DC24;
extern DtxObj *D_00390670;
extern void func_00174678(void);
extern int func_00174FB0(void);

int func_001752D0(void) {
    if ((D_0038DBD8 != 1) || (D_0038DBD0 > 0)) {
        if ((--D_0038DC1C) == 0) {
            func_0010D800(D_0038DBEC);
            D_0038DBEC = 0;
            func_0016E4E8(D_00390670);
            D_00390670 = 0;
            func_0010D800(D_0038DC24);
            D_0038DC24 = 0;
            func_00174678();
            func_00174FB0();
            func_0016E7D0();
            SJX_Finish();
            SJRMT_Finish();
        }
    }
}

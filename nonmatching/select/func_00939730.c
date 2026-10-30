/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023FC70(void);
extern void func_001403C0(int, int);
extern void func_002F4E10(void *);
extern int func_002211C0(int, int, int, int);
extern void func_002F4D80(s32);
s32 func_001B6A30(M2C_UNK);                         /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_008B32E0(s32);                         /* extern */
s32 func_00941CD0(M2C_UNK);                         /* extern */
extern s8 D_003EAAE0;
extern void *D_003EAAE4;
extern s16 D_003EAAEC;
extern s16 D_003EAAF0;
extern s32 D_003EAAF4;
extern char D_0053C300[];

s32 func_00939730(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a0;
    s16 temp_a1;
    s32 temp_s0;

    temp_s0 = func_002211C0(arg0, arg1, arg2, arg3);
    switch (D_003EAAE0) {                           /* irregular */
    case 1:
        if (func_001B6A30(0x4FD5) == 1) {
            func_008B32E0(D_003EAAF4);
            func_002F4E10(D_003EAAE4);
            D_003EAAE4 = NULL;
            temp_a0 = M2C_FIELD(temp_s0, s16 *, 0x10);
            D_003EAAF0 = temp_a0;
            temp_a1 = M2C_FIELD(temp_s0, s16 *, 0x12);
            D_003EAAEC = temp_a1;
            func_001403C0((s32) temp_a0, (s32) temp_a1);
            D_003EAAE0 = 0;
            func_0023F510(2);
            func_0023FC70();
            return 1;
        }
block_13:
    default:
        return 0;
    case 0:
        if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 2) {
            M2C_FIELD(temp_s0, s16 *, 0x10) = (s16) D_003EAAF0;
            M2C_FIELD(temp_s0, s16 *, 0x12) = (s16) D_003EAAEC;
        }
        func_002F4D80((s32) D_003EAAE4);
        if (func_00941CD0(0) == 1) {
            D_003EAAE0 = 1;
        }
        goto block_13;
    }
}

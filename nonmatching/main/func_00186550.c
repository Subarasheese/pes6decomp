/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00190350(void);
extern void func_0019AAA0(void);
extern void func_0018B9F0(void);
extern void func_0019DF80(void);
extern void func_001930E0(void);
extern void func_0018C210(void);
extern void func_00199400(void);
extern void func_0018E240(void);
extern void func_0019D7C0(void);
extern void func_0018D470(void);
extern void func_0018AE30(void);
extern void func_001954A0(void);
extern void func_001849A0(void);
extern void func_00197AC0(void);
extern void func_0019B710(void);
extern void func_0019C5B0(void);
extern void func_001907E0(void);
M2C_UNK func_00185880();                            /* extern */
extern char D_0051FFC8[];
extern char D_0051FFD0[];
extern char D_0051FFD8[];

void func_00186550(s32 arg0) {
    s32 temp_a5;

    if (arg0 & 1) {
        func_001930E0();
    }
    if (arg0 & 2) {
        func_00197AC0();
    }
    if (arg0 & 4) {
        func_001954A0();
    }
    if (arg0 & 8) {
        func_00199400();
    }
    if (arg0 & 0x10) {
        func_00190350();
    }
    if (arg0 & 0x20) {
        func_00185880();
    }
    if (arg0 & 0x10000) {
        func_001849A0();
    }
    if (arg0 & 0x40) {
        func_0018D470();
    }
    if (arg0 & 0x80) {
        func_0018C210();
    }
    if (arg0 & 0x100) {
        func_0018E240();
    }
    if (arg0 & 0x200) {
        func_001907E0();
    }
    if (arg0 & 0x400) {
        func_0018B9F0();
    }
    if (arg0 & 0x800) {
        func_0019B710();
    }
    if (arg0 & 0x1000) {
        func_0019AAA0();
    }
    if (arg0 & 0x2000) {
        func_0019D7C0();
    }
    if (arg0 & 0x4000) {
        func_0019C5B0();
    }
    if (arg0 & 0x8000) {
        func_0019DF80();
    }
    if (arg0 & 0x20000) {
        func_0018AE30();
    }
    temp_a5 = ~arg0;
    (*(s32 *)D_0051FFC8) &= temp_a5;
    (*(s32 *)D_0051FFD0) &= temp_a5;
    (*(s32 *)D_0051FFD8) &= temp_a5;
}

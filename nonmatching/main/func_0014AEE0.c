/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char *func_001454C0(s32);
extern char *func_00153FC0(s32, s32, s32);
extern s32 func_001540C0(void);
extern void func_001C4730(void *, void *, s32);

char *func_0014AEE0(s32 arg0, s32 arg1) {
    char *s1;
    char *s0;

    if (arg0 == arg1) {
        return NULL;
    }
    s1 = func_001454C0(arg0);
    if (s1 == NULL) {
        return NULL;
    }
    if (func_001454C0(arg1) != NULL) {
        return NULL;
    }
    s0 = func_00153FC0(func_001540C0(), 0x10, M2C_FIELD(s1, s32 *, 8));
    if (s0 == NULL) {
        return NULL;
    }
    func_001C4730(s0, s1, M2C_FIELD(s1, s32 *, 8));
    M2C_FIELD(s0, s32 *, 0xC) = arg1;
    M2C_FIELD(s0, s16 *, 0x3C) = 0;
    M2C_FIELD(s0, s16 *, 0x3E) = 0;
    return s0;
}

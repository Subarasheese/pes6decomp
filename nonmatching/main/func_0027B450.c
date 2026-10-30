/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00295290(void);
extern void func_001ABA60(s32);
extern void func_001A58F0(void *, int);
M2C_UNK func_001A6630(void *);                      /* extern */
M2C_UNK func_001A7250(void *);                      /* extern */
M2C_UNK func_001A9970(void *);                      /* extern */
M2C_UNK func_001AB960(void *, void *);              /* extern */
extern u8 D_003E7519;
extern u8 D_003E751A;

void func_0027B450(void *arg0, s32 arg1, void *arg2) {
    func_001A58F0(arg0, arg1);
    if (M2C_FIELD(arg0, u8 *, 1) == 0) {
        M2C_FIELD(arg0, u8 *, 1) = 1U;
    }
    func_001AB960(arg0, arg2);
    M2C_FIELD(arg0, u8 *, 0x1F9) = (u8) M2C_FIELD(arg2, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0x1FA) = (u8) M2C_FIELD(arg2, u8 *, 0xF);
    func_001ABA60((s32) arg0);
    if (func_00295290() == 0) {
        M2C_FIELD(arg0, s8 *, 0x1FF) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x1FF) = 1;
    }
    switch (arg1) {                                 /* irregular */
    case 4:
        M2C_FIELD(arg0, u8 *, 0x30) = (u8) D_003E751A;
    default:
        func_001A7250(arg0);
        func_001A9970(arg0);
        break;
    case 3:
        M2C_FIELD(arg0, u8 *, 0x30) = (u8) D_003E7519;
        break;
    }
    func_001A6630(arg0);
}

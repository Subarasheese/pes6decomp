/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58F0(void *, int);
extern s32 func_00295290(void);
extern void func_001ABA60(s32);
M2C_UNK func_001AB960(void *, void *);              /* extern */
void *func_00BA9430(M2C_UNK);                       /* extern */

void func_00BA1B00(void *arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = *M2C_FIELD(arg0, void ***, 4);
    temp_s0 = func_00BA9430(0);
    func_001A58F0(temp_s1, 2);
    if (M2C_FIELD(temp_s1, u8 *, 1) == 0) {
        M2C_FIELD(temp_s1, u8 *, 1) = 1U;
    }
    M2C_FIELD(M2C_FIELD(arg0, void ***, 4), s8 *, 0x2C) = 1;
    func_001AB960(temp_s1, temp_s0);
    func_001ABA60((s32) temp_s1);
    M2C_FIELD(temp_s1, u8 *, 0x1F9) = (u8) M2C_FIELD(temp_s0, u8 *, 0xE);
    M2C_FIELD(temp_s1, u8 *, 0x1FA) = (u8) M2C_FIELD(temp_s0, u8 *, 0xF);
    if (func_00295290() == 0) {
        M2C_FIELD(temp_s1, s8 *, 0x1FF) = 0;
    } else {
        M2C_FIELD(temp_s1, s8 *, 0x1FF) = 1;
    }
}

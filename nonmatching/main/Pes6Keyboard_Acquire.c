/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003637D0(s32);
extern s32 func_00362BB0(void);
extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00363330(M2C_UNK);                     /* extern */
extern char D_003E6F10[];
extern s32 Pes6Keyboard_Process;
extern s32 Pes6Keyboard_RefCount;
extern M2C_UNK func_00363840;
extern M2C_UNK func_00363A10;

void Pes6Keyboard_Acquire(void) {
    s32 temp_v0;

    if (Pes6Keyboard_Process == 0) {
        func_00362BB0();
        func_00363330(0);
        func_003637D0((s32) &func_00363A10);
        temp_v0 = func_001BBEC0(0, &func_00363840, 0, 0, 0, ((void *)D_003E6F10));
        Pes6Keyboard_Process = temp_v0;
        func_001BBC60(temp_v0);
    }
    Pes6Keyboard_RefCount += 1;
}

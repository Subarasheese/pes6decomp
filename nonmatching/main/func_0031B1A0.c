/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00338AD0(u32, void *, s32, void *);
extern s32 func_00338A60(void *, void *);
extern int func_003387D0(void *, void *, void *);
extern char D_003E1510[];
extern void func_0031B000(void);
extern void func_0031B0E0(void);

s32 func_0031B1A0(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x44);
    if (M2C_FIELD(temp_a1, u8 *, 8) == 0) {
        return 0;
    }
    if (*M2C_FIELD(arg0, u8 **, 0x3C) == M2C_FIELD(temp_a1, u8 *, 0x78)) {
        func_00338A60(func_00338AD0(0x80000005, (void *)func_0031B000, 9, (void *)D_003E1510), arg0);
    }
    func_003387D0(arg0, (void *)func_0031B0E0, (void *)D_003E1510);
    return 0;
}

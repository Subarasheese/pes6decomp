/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001D5A50(s32);
extern s32 func_001D5C40(s32);
extern s32 func_001DD560(s32);
extern s32 func_001E7140(s32);
extern s32 func_001F0210(s32);
extern void func_001FC780(s32);
extern s32 Pes6Module_GetRegion(s32);
extern void func_002405A0(s32 *);

extern void *D_003EAA50;

void func_00934210(void) {
    void *localValue1;
    u32 value;

loop_1:
    localValue1 = D_003EAA50;
    if (D_003EAA50 != NULL) {
        value = M2C_FIELD(D_003EAA50, u32 *, 0);
        switch (value) {
        case 0:
        case 1:
            func_001E7140(M2C_FIELD(D_003EAA50, s32 *, 4));
            break;
        case 2:
            func_001D5A50(M2C_FIELD(D_003EAA50, s32 *, 4));
            break;
        case 3:
            func_001D5C40(M2C_FIELD(D_003EAA50, s32 *, 4));
            break;
        case 5:
            func_001DD560(M2C_FIELD(D_003EAA50, s32 *, 4));
            break;
        case 6:
            func_001F0210(M2C_FIELD(D_003EAA50, s32 *, 4));
            break;
        case 7:
            func_001FC780(Pes6Module_GetRegion(M2C_FIELD(D_003EAA50, s32 *, 4)));
            break;
        }
        D_003EAA50 = M2C_FIELD(localValue1, void **, 0x1C);
        func_002405A0((s32 *)&localValue1);
        goto loop_1;
    }
}

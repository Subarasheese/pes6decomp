/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00160068(void);
extern void func_00160220(void);
extern void func_001602F0(void);
extern void func_001605C0(void);
M2C_UNK func_001051F0(s32, s32);                    /* extern */
M2C_UNK func_001603C0();                            /* extern */
M2C_UNK func_00179E68(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00179E80(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0017A1C8();                            /* extern */
extern char D_0037B934[];
extern char D_0037B9D8[];
extern char D_00383268[];

void func_001600B8(void) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)D_0037B934) - 1;
    (*(s32 *)D_0037B934) = temp_v0;
    if (temp_v0 == 0) {
        func_00160068();
        func_00160220();
        func_001603C0();
        func_001602F0();
        func_001605C0();
        func_001051F0((*(s32 *)D_0037B9D8), (*(s32 *)D_00383268));
        func_00179E68(0, 0);
        func_00179E80(0, 0);
        func_0017A1C8();
    }
}

/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023B380(M2C_UNK);                         /* extern */
M2C_UNK func_0023B3B0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008C0ED0(s8 *);                        /* extern */
M2C_UNK func_008C0EE0(M2C_UNK *, s8 *);             /* extern */
M2C_UNK func_008C1700(s8 *, s8, M2C_UNK);           /* extern */
M2C_UNK func_008C2350(s8 *, s8, M2C_UNK);           /* extern */
M2C_UNK func_008C2A80(s8 *);                        /* extern */
M2C_UNK func_008C2BF0(s8 *);                        /* extern */
M2C_UNK func_008C2FD0(M2C_UNK *, s8 *);             /* extern */
M2C_UNK func_0095C1B0();                            /* extern */
extern char D_0053C300[];
extern char D_0053C310[];
extern char D_00966230[];
extern char D_0096D2D0[];
extern char D_0096D2D8[];
extern char D_0096E516[];
extern char D_0096E6BE[];

void func_0095D0F0(void) {
    if (((*(s32 *)D_0053C310) & 2) == 2) {
        func_0095C1B0();
        func_008C2FD0(((void *)D_00966230), ((void *)D_0096D2D0));
        func_008C2A80(((void *)D_0096D2D0));
        if ((*(s8 *)D_0096D2D0) == 0xB) {
            func_008C1700(((void *)D_0096D2D0), (*(s8 *)D_0096E516), 1);
        }
        if (((*(s8 *)D_0096D2D0) + ((*(s8 *)D_0096D2D8) * 0xD)) == 0xC) {
            func_008C2350(((void *)D_0096D2D0), (*(s8 *)D_0096E6BE), 1);
        }
        func_008C0EE0(((void *)D_00966230), ((void *)D_0096D2D0));
        func_008C0ED0(((void *)D_0096D2D0));
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 4) == 4) {
        func_0095C1B0();
        func_008C2BF0(((void *)D_0096D2D0));
        func_008C2A80(((void *)D_0096D2D0));
        if ((*(s8 *)D_0096D2D0) == 0xB) {
            func_008C1700(((void *)D_0096D2D0), (*(s8 *)D_0096E516), 1);
        } else {
            func_008C1700(((void *)D_0096D2D0), (*(s8 *)D_0096E516), 2);
        }
        if (((*(s8 *)D_0096D2D0) + ((*(s8 *)D_0096D2D8) * 0xD)) == 0xC) {
            func_008C2350(((void *)D_0096D2D0), (*(s8 *)D_0096E6BE), 1);
        } else {
            func_008C2350(((void *)D_0096D2D0), (*(s8 *)D_0096E6BE), 2);
        }
        func_008C0EE0(((void *)D_00966230), ((void *)D_0096D2D0));
        func_008C0ED0(((void *)D_0096D2D0));
    }
    if (func_0023B380(0) == 0) {
        func_0023B3B0(0, 1);
    }
    if (func_0023B380(1) == 0) {
        func_0023B3B0(1, 0);
    }
    M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0;
}

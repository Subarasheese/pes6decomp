/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023B380(M2C_UNK);                         /* extern */
M2C_UNK func_0023B3B0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008B59F0();                            /* extern */
M2C_UNK func_008C0ED0(s8 *);                        /* extern */
M2C_UNK func_008C0EE0(M2C_UNK *, s8 *);             /* extern */
M2C_UNK func_008C1700(s8 *, s8, M2C_UNK);           /* extern */
M2C_UNK func_008C2350(s8 *, s8, M2C_UNK);           /* extern */
M2C_UNK func_008C2860(s8 *, s8, M2C_UNK);           /* extern */
M2C_UNK func_008C2A80(s8 *);                        /* extern */
M2C_UNK func_008C2BF0(s8 *);                        /* extern */
M2C_UNK func_008C2EB0(M2C_UNK *, s8 *);             /* extern */
M2C_UNK func_008C2FD0(M2C_UNK *, s8 *);             /* extern */
extern char D_0053C300[];
extern char D_0053C310[];
extern char D_008D1D60[];
extern char D_008D2C50[];
extern char D_008DC310[];
extern char D_008DC318[];
extern char D_008DD8A6[];
extern char D_008DDBF6[];
extern char D_008DEADE[];

void func_008B70A0(void) {
    if (((*(s32 *)D_0053C310) & 2) == 2) {
        func_008B59F0();
        func_008C2FD0(((void *)D_008D1D60), ((void *)D_008DC310));
        func_008C2A80(((void *)D_008DC310));
        if (((*(s8 *)D_008DC318) == 0) && ((*(s8 *)D_008DC310) == 0xD)) {
            func_008C1700(((void *)D_008DC310), (*(s8 *)D_008DD8A6), 1);
        }
        if (((*(s8 *)D_008DC310) + ((*(s8 *)D_008DC318) * 0xD)) == 0xF) {
            func_008C2350(((void *)D_008DC310), (*(s8 *)D_008DDBF6), 1);
        }
        if (((*(s8 *)D_008DC310) + ((*(s8 *)D_008DC318) * 0xD)) == 0x18) {
            func_008C2860(((void *)D_008DC310), (*(s8 *)D_008DEADE), 1);
        }
        func_008C0EE0(((void *)D_008D1D60), ((void *)D_008DC310));
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 4) == 4) {
        func_008B59F0();
        func_008C2BF0(((void *)D_008DC310));
        func_008C2A80(((void *)D_008DC310));
        if (((*(s8 *)D_008DC318) == 0) && ((*(s8 *)D_008DC310) == 0xD)) {
            func_008C1700(((void *)D_008DC310), (*(s8 *)D_008DD8A6), 1);
        } else {
            func_008C1700(((void *)D_008DC310), (*(s8 *)D_008DD8A6), 2);
        }
        if (((*(s8 *)D_008DC310) + ((*(s8 *)D_008DC318) * 0xD)) == 0xF) {
            func_008C2350(((void *)D_008DC310), (*(s8 *)D_008DDBF6), 1);
        } else {
            func_008C2350(((void *)D_008DC310), (*(s8 *)D_008DDBF6), 2);
        }
        if (((*(s8 *)D_008DC310) + ((*(s8 *)D_008DC318) * 0xD)) == 0x18) {
            func_008C2860(((void *)D_008DC310), (*(s8 *)D_008DEADE), 1);
        } else {
            func_008C2860(((void *)D_008DC310), (*(s8 *)D_008DEADE), 2);
        }
        func_008C0EE0(((void *)D_008D1D60), ((void *)D_008DC310));
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 1) == 1) {
        func_008C2EB0(((void *)D_008D2C50), ((void *)D_008DC310));
        func_008B59F0();
        func_008C2FD0(((void *)D_008D1D60), ((void *)D_008DC310));
        func_008C2BF0(((void *)D_008DC310));
        func_008C2A80(((void *)D_008DC310));
        func_008C0EE0(((void *)D_008D1D60), ((void *)D_008DC310));
        func_008C0ED0(((void *)D_008DC310));
        if (((*(s8 *)D_008DC318) == 0) && ((*(s8 *)D_008DC310) == 0xD)) {
            func_008C1700(((void *)D_008DC310), (*(s8 *)D_008DD8A6), 1);
        } else {
            func_008C1700(((void *)D_008DC310), (*(s8 *)D_008DD8A6), 2);
        }
        if (((*(s8 *)D_008DC310) + ((*(s8 *)D_008DC318) * 0xD)) == 0xF) {
            func_008C2350(((void *)D_008DC310), (*(s8 *)D_008DDBF6), 1);
        } else {
            func_008C2350(((void *)D_008DC310), (*(s8 *)D_008DDBF6), 2);
        }
        if (((*(s8 *)D_008DC310) + ((*(s8 *)D_008DC318) * 0xD)) == 0x18) {
            func_008C2860(((void *)D_008DC310), (*(s8 *)D_008DEADE), 1);
        } else {
            func_008C2860(((void *)D_008DC310), (*(s8 *)D_008DEADE), 2);
        }
    }
    if (func_0023B380(0) == 0) {
        func_0023B3B0(0, 1);
    }
    if (func_0023B380(1) == 0) {
        func_0023B3B0(1, 0);
    }
    M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0;
}

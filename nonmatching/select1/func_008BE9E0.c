/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023B380(M2C_UNK);                         /* extern */
M2C_UNK func_0023B3B0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008BDB30();                            /* extern */
M2C_UNK func_008C0ED0(s8 *);                        /* extern */
M2C_UNK func_008C0EE0(M2C_UNK *, s8 *);             /* extern */
M2C_UNK func_008C1E40(s8 *, M2C_UNK, s8, M2C_UNK);  /* extern */
M2C_UNK func_008C2350(s8 *, s8, M2C_UNK);           /* extern */
M2C_UNK func_008C2A80(s8 *);                        /* extern */
M2C_UNK func_008C2BF0(s8 *);                        /* extern */
M2C_UNK func_008C2EB0(M2C_UNK *, s8 *);             /* extern */
M2C_UNK func_008C2FD0(M2C_UNK *, s8 *);             /* extern */
extern char D_0053C300[];
extern char D_0053C310[];
extern char D_008D84C0[];
extern char D_008D8580[];
extern char D_008E1CE0[];
extern char D_008E1CE8[];
extern char D_008E1E96[];
extern char D_008E35C6[];

void func_008BE9E0(void) {
    if (((*(s32 *)D_0053C310) & 2) == 2) {
        func_008BDB30();
        func_008C2FD0(((void *)D_008D8580), ((void *)D_008E1CE0));
        func_008C2A80(((void *)D_008E1CE0));
        func_008C0EE0(((void *)D_008D8580), ((void *)D_008E1CE0));
        func_008C0ED0(((void *)D_008E1CE0));
        if (((*(s8 *)D_008E1CE0) + ((*(s8 *)D_008E1CE8) * 0xD)) == 0xF) {
            func_008C2350(((void *)D_008E1CE0), (*(s8 *)D_008E35C6), 1);
        }
        if (((*(s8 *)D_008E1CE0) + ((*(s8 *)D_008E1CE8) * 0xD)) == 1) {
            func_008C1E40(((void *)D_008E1CE0), 0, (*(s8 *)D_008E1E96), 1);
        }
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 4) == 4) {
        func_008BDB30();
        func_008C2BF0(((void *)D_008E1CE0));
        func_008C2A80(((void *)D_008E1CE0));
        func_008C0EE0(((void *)D_008D8580), ((void *)D_008E1CE0));
        func_008C0ED0(((void *)D_008E1CE0));
        if (((*(s8 *)D_008E1CE0) + ((*(s8 *)D_008E1CE8) * 0xD)) == 0xF) {
            func_008C2350(((void *)D_008E1CE0), (*(s8 *)D_008E35C6), 1);
        } else {
            func_008C2350(((void *)D_008E1CE0), (*(s8 *)D_008E35C6), 2);
        }
        if (((*(s8 *)D_008E1CE0) + ((*(s8 *)D_008E1CE8) * 0xD)) == 1) {
            func_008C1E40(((void *)D_008E1CE0), 0, (*(s8 *)D_008E1E96), 1);
        } else {
            func_008C1E40(((void *)D_008E1CE0), 0, (*(s8 *)D_008E1E96), 2);
        }
    }
    if ((M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) & 1) == 1) {
        func_008C2EB0(((void *)D_008D84C0), ((void *)D_008E1CE0));
        func_008BDB30();
        func_008C2FD0(((void *)D_008D8580), ((void *)D_008E1CE0));
        func_008C2BF0(((void *)D_008E1CE0));
        func_008C2A80(((void *)D_008E1CE0));
        func_008C0EE0(((void *)D_008D8580), ((void *)D_008E1CE0));
        func_008C0ED0(((void *)D_008E1CE0));
        if (((*(s8 *)D_008E1CE0) + ((*(s8 *)D_008E1CE8) * 0xD)) == 0xF) {
            func_008C2350(((void *)D_008E1CE0), (*(s8 *)D_008E35C6), 1);
        } else {
            func_008C2350(((void *)D_008E1CE0), (*(s8 *)D_008E35C6), 2);
        }
        if (((*(s8 *)D_008E1CE0) + ((*(s8 *)D_008E1CE8) * 0xD)) == 1) {
            func_008C1E40(((void *)D_008E1CE0), 0, (*(s8 *)D_008E1E96), 1);
        } else {
            func_008C1E40(((void *)D_008E1CE0), 0, (*(s8 *)D_008E1E96), 2);
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

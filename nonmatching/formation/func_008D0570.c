/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F22B0(void *);
extern void func_001F3CA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008CFFA0(void *, void *, u8);          /* extern */
M2C_UNK func_008D0150(void *, u8);                  /* extern */
M2C_UNK func_008D0430(void *, s32);                 /* extern */

void func_008D0570(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 9) = 3U;
        func_001F3CA0(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, s32 *, 0x190) = 0;
        func_008CFFA0(arg0, M2C_FIELD(arg0, void **, 0x48), M2C_FIELD(arg0, u8 *, 9));
        func_001F22B0(M2C_FIELD(arg0, void **, 0x1D0));
        M2C_FIELD(arg0, void **, 0x1D0) = NULL;
        if (M2C_FIELD(arg0, u8 *, 9) == 3) {
            func_008D0150(arg0, M2C_FIELD(arg0, u8 *, 2));
        }
        func_002DF960(M2C_FIELD(arg0, s32 *, 0x1DC));
        M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
        func_001F3CA0(M2C_FIELD(arg0, void **, 0x50));
        func_001F3CA0(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, s32 *, 0x18C) = 0;
        M2C_FIELD(arg0, s32 *, 0x190) = 0;
        M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
        M2C_FIELD(arg0, void **, 0x1D0) = NULL;
        M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
        M2C_FIELD(arg0, u8 *, 2) = 3U;
        M2C_FIELD(arg0, u8 *, 2) = (u8) ((u32) (arg1 & 0xFF) >> 1);
        func_008D0150(arg0, M2C_FIELD(arg0, u8 *, 2));
        func_008D0430(arg0, arg1);
    }
}

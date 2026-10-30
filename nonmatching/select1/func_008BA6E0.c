/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern int func_00309420(void);
extern s32 func_002F3A00(void *);
M2C_UNK func_002F2ED0(void *);                      /* extern */
M2C_UNK func_002F4980(void *, s8 *);                /* extern */
void *func_002F4E90(M2C_UNK, s32);                  /* extern */
M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_00815450();                                /* extern */
s32 func_008156F0();                                /* extern */
extern void *D_003EA430;
extern char D_008D2CB0[];
extern char D_008D2CB4[];
extern char D_008D2CB8[];
extern char D_008DA7B0[];

void func_008BA6E0(s64 arg0) {
    s8 sp10;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 spF4;
    s32 spF8;
    s32 var_v0;
    s64 temp_a0;
    s8 *var_v1;
    void *temp_v0;

    temp_a0 = (s64) (arg0 << 0x38) >> 0x38;
    switch (temp_a0) {                              /* irregular */
    case 1:
        var_v1 = &sp10;
        var_v0 = 0xF0;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        spF4 = 0;
        spF8 = 0;
        sp1C = (*(s32 *)D_008D2CB0);
        sp20 = (*(s32 *)D_008D2CB4);
        sp24 = (*(s32 *)D_008D2CB8);
        temp_v0 = func_002F4E90(0x17, (*(s32 *)D_008D2CB0));
        D_003EA430 = temp_v0;
        func_002F4980(temp_v0, &sp10);
        func_002F3A00(D_003EA430);
        return;
    case 2:
        if (func_00309420() == 0) {
            if (D_003EA430 != NULL) {
                func_002F2ED0(D_003EA430);
                return;
            }
        } else if (D_003EA430 != NULL) {
            if (func_008156F0() == 1) {
                func_002F2ED0(D_003EA430);
                return;
            }
        } else {
            if (func_00815450() == 0) {
                func_00815100(((void *)D_008DA7B0));
                return;
            }
            return;
        }
        break;
    case 3:
        if (D_003EA430 != NULL) {
            func_002F4E10(D_003EA430);
            D_003EA430 = NULL;
        }
        break;
    }
}

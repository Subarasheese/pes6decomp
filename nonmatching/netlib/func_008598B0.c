/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
M2C_UNK func_00844100();                            /* extern */
void *func_00847280(s16);                           /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_00859020(M2C_UNK *, void *);           /* extern */
M2C_UNK func_00885810(s32, M2C_UNK, s16, void *, s64); /* extern */
extern char D_008B144E[];
extern char D_008B21C0[];

s32 func_008598B0(void *arg0) {
    u16 temp_v1;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_00885810((*(s8 *)D_008B144E) & 1, 1, M2C_FIELD(arg0, s16 *, 2), arg0 + 6, (s64) (func_00858B60(((void *)D_008B21C0), 2) << 0x38) >> 0x38);
        break;
    case 2:
        func_00885810((*(s8 *)D_008B144E) & 1, 0, M2C_FIELD(arg0, s16 *, 2), arg0 + 6, ((s64) (func_00858B60(((void *)D_008B21C0), 2) << 0x38) >> 0x38) - 1);
        if (func_002DCA40() != 0) {
            temp_v0 = func_00847280(M2C_FIELD(arg0, s16 *, 2));
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s8 *, 0x50) = 4;
                func_00859020(((void *)D_008B21C0), temp_v0);
                func_00844100();
            }
        }
        break;
    }
    return 0;
}

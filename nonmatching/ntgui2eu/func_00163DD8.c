/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00134FE8(s32);                           /* extern */
M2C_UNK func_00164E30();                            /* extern */
M2C_UNK func_00164F00(void *, s32);                 /* extern */
M2C_UNK func_00164F70(void *, void *, s32, s32, s32); /* extern */
M2C_UNK func_00165008(void *, void *, s32, s32, s32); /* extern */
M2C_UNK func_00165088(void *, void *, s32, s32, s32); /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_001B08E8(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern char D_005FD1A8[];
extern char D_005FD1C8[];

void *func_00163DD8(void *arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4) {
    M2C_UNK *var_a1;
    void *temp_v0;

    func_00164E30();
    temp_v0 = func_00134FE8(((u32) (M2C_FIELD(arg0, s32 *, 0x44) + 0xF) >> 4) * 0x10);
    var_a1 = arg2;
    if (temp_v0 == NULL) {
        func_0019DBD0(((void *)D_005FD1A8), var_a1);
        return NULL;
    }
    M2C_FIELD(temp_v0, void **, 0x4C) = arg0;
    if (var_a1 == NULL) {
        var_a1 = ((void *)D_005FD1C8);
    }
    func_001B08E8(temp_v0 + 0x58, var_a1, 0x3F);
    M2C_FIELD(temp_v0, s8 *, 0x97) = 0;
    func_00164F70(arg0, temp_v0, arg1, arg3, arg4);
    func_00165008(arg0, temp_v0, arg1, arg3, arg4);
    func_00164F00(temp_v0, arg1);
    func_00165088(arg0, temp_v0, arg1, arg3, arg4);
    return temp_v0;
}

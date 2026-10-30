/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_00CB4020[];
extern char D_00CDFF60[];

void func_00B934A0(void) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    M2C_UNK *var_t1;
    s32 temp_v1;
    s32 var_t2;

    func_001C48E8(&sp20, 0, 0x24);
    var_t2 = 0;
    var_t1 = ((void *)D_00CB4020);
    do {
        var_t2 += 1;
        M2C_FIELD(var_t1, s32 *, 0) = 0;
        M2C_FIELD(var_t1, void **, 4) = (void *) (((void *)D_00CDFF60) + (sp20 * 4));
        M2C_FIELD(var_t1, void **, 8) = (void *) (((void *)D_00CDFF60) + (sp24 * 4) + 0x1088);
        M2C_FIELD(var_t1, void **, 0xC) = (void *) (((void *)D_00CDFF60) + (sp28 * 4) + 0x224C);
        M2C_FIELD(var_t1, void **, 0x10) = (void *) (((void *)D_00CDFF60) + (sp2C * 4) + 0x33E4);
        M2C_FIELD(var_t1, void **, 0x14) = (void *) (((void *)D_00CDFF60) + (sp30 * 4) + 0x347C);
        M2C_FIELD(var_t1, void **, 0x18) = (void *) (((void *)D_00CDFF60) + (sp34 * 4) + 0x34D8);
        M2C_FIELD(var_t1, void **, 0x1C) = (void *) (((void *)D_00CDFF60) + (sp38 * 4) + 0x3594);
        M2C_FIELD(var_t1, void **, 0x20) = (void *) (((void *)D_00CDFF60) + (sp3C * 4) + 0x35DC);
        M2C_FIELD(var_t1, void **, 0x24) = (void *) (((void *)D_00CDFF60) + (sp40 * 4) + 0x3628);
        sp24 += M2C_FIELD(var_t1, u16 *, 0x2A);
        sp28 += M2C_FIELD(var_t1, u16 *, 0x2C);
        sp2C += M2C_FIELD(var_t1, u16 *, 0x2E);
        sp20 += M2C_FIELD(var_t1, u16 *, 0x28);
        sp3C += M2C_FIELD(var_t1, u16 *, 0x36);
        sp30 += M2C_FIELD(var_t1, u16 *, 0x30);
        sp34 += M2C_FIELD(var_t1, u16 *, 0x32);
        temp_v1 = sp40 + M2C_FIELD(var_t1, u16 *, 0x38);
        sp38 += M2C_FIELD(var_t1, u16 *, 0x34);
        var_t1 += 0x3C;
        sp40 = temp_v1;
    } while (var_t2 < 0x39);
}

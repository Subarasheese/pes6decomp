/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_00220A30(void *);
extern void * func_00221230(s32);
M2C_UNK func_001C7F58(void *, M2C_UNK *);           /* extern */
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern char D_0053C9D0[];

void func_0024CE30(void *arg0) {
    M2C_UNK *var_s0;
    s32 var_s2;
    void *temp_v0;
    void *var_s1;

    var_s2 = 0;
    var_s1 = arg0;
    var_s0 = ((void *)D_0053C9D0);
    do {
        temp_v0 = func_00221230(var_s2);
        M2C_FIELD(var_s1, s8 *, 3) = (s8) M2C_FIELD(temp_v0, s8 *, 2);
        M2C_FIELD(var_s1, u8 *, 2) = (u8) M2C_FIELD(temp_v0, u8 *, 0);
        M2C_FIELD(var_s1, s8 *, 0x32) = (s8) M2C_FIELD(temp_v0, s8 *, 1);
        M2C_FIELD(var_s1, s8 *, 0x33) = (s8) M2C_FIELD(temp_v0, s8 *, 3);
        if ((var_s2 == 0) && (func_002DCA30() == 0)) {
            func_00220A30(arg0 + 4);
        } else {
            func_001C7F58(var_s1 + 4, var_s0);
        }
        var_s2 += 1;
        var_s1 += 0x34;
        var_s0 += 0x2E;
    } while (var_s2 < 8);
    M2C_FIELD(arg0, s8 *, 1) = (s8) (*(s8 *)D_003AA201);
    M2C_FIELD(arg0, s8 *, 0x35) = (s8) (*(s8 *)D_003AA235);
    M2C_FIELD(arg0, s8 *, 0x69) = (s8) (*(s8 *)D_003AA269);
    M2C_FIELD(arg0, s8 *, 0x9D) = (s8) (*(s8 *)D_003AA29D);
    M2C_FIELD(arg0, s8 *, 0xD1) = (s8) (*(s8 *)D_003AA2D1);
    M2C_FIELD(arg0, s8 *, 0x105) = (s8) (*(s8 *)D_003AA305);
    M2C_FIELD(arg0, s8 *, 0x139) = (s8) (*(s8 *)D_003AA339);
    M2C_FIELD(arg0, s8 *, 0x16D) = (s8) (*(s8 *)D_003AA36D);
}

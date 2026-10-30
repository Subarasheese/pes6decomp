/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010F968(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00110660(u8, u8, u16);                 /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8310[];
extern char D_005F8320[];
extern void *D_0060245C;

void func_0010F9A4(void *arg0) {
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8310), 0x152, ((void *)D_005F8320));
        return;
    }
    var_s1 = 0;
    if (M2C_FIELD(arg0, s32 *, 8) > 0) {
        temp_v0 = D_0060245C;
loop_5:
        temp_v1 = arg0 + (var_s1 * 2);
        var_s1 += 1;
        if (M2C_FIELD(temp_v0, s32 (**)(), 0x74)() == 0) {
            func_00110660(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(temp_v1, u16 *, 0xC));
            if (var_s1 >= M2C_FIELD(arg0, s32 *, 8)) {

            } else {
                goto loop_5;
            }
        } else {
            func_0010F968(0, 0, 0);
        }
    }
}

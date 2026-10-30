/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F3C30(void *);
extern void func_002F4D80(s32);
extern void func_002F3C70(void *);
extern void func_002F3AE0(void *, void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002F4980(void *, void **);             /* extern */
void *func_002F4E90(M2C_UNK);                       /* extern */
extern void *D_00CDF8F0;
extern char D_00CDF8F4[];

s32 func_00B911B0(void) {
    void *temp_v0;

    if (D_00CDF8F0 != NULL) {
        return 0;
    }
    func_001C48E8(((void *)D_00CDF8F4), 0, 0xF0);
    M2C_FIELD(((void *)D_00CDF8F4), s32 *, 0xE4) = 0x41000000;
    temp_v0 = func_002F4E90(0x17);
    func_002F3C30(temp_v0);
    func_002F3AE0(temp_v0, &D_00CDF8F0 + 0xF8);
    func_002F4980(temp_v0, &D_00CDF8F0 + 4);
    func_002F3C70(temp_v0);
    func_002F4D80((s32) temp_v0);
    D_00CDF8F0 = temp_v0;
    return 1;
}

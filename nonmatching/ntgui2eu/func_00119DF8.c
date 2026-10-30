/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_0019A140(void *, s32, s64);
extern s32 func_0011A0F0(void);
M2C_UNK func_00199E48(void *, M2C_UNK);             /* extern */
M2C_UNK func_00199F50(void *, M2C_UNK);             /* extern */
M2C_UNK func_00199FA8(void *);                      /* extern */
M2C_UNK func_00199FD8(void *, s128);                /* extern */
M2C_UNK func_00199FF0(void *);                      /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_005F8E00[];
extern char D_005F8EF8[];
extern void *D_006024F0;

s32 func_00119DF8(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (func_0011A0F0() < 6) {
        func_0019DBD0(((void *)D_005F8EF8), 0);
        return -1;
    }
    func_00199E48(M2C_FIELD(D_006024F0, void **, 0x564), 0);
    func_00199F50(M2C_FIELD(D_006024F0, void **, 0x564), 0);
    func_00199FD8(M2C_FIELD(D_006024F0, void **, 0x564), (*(s128 *)D_005F8E00));
    func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 0, 0x46);
    func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 1, M2C_FIELD(D_006024F0, s32 *, 0xC0) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0xCC) << 0x18) | (((s64) M2C_FIELD(D_006024F0, s32 *, 0xC8) << 0x10) | ((s64) M2C_FIELD(D_006024F0, s32 *, 0xC4) << 8)));
    func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 5, ((arg0 * 0x10) + 0x6C00) | (((arg3 * 0x10) + 0x6FF0) << 0x10));
    func_0019A140(M2C_FIELD(D_006024F0, void **, 0x564), 5, ((arg2 * 0x10) + 0x6C00) | (((arg3 * 0x10) + 0x7000) << 0x10));
    func_00199FF0(M2C_FIELD(D_006024F0, void **, 0x564));
    func_00199FA8(M2C_FIELD(D_006024F0, void **, 0x564));
    return 0;
}

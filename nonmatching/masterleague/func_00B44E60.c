/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00B45600(void);
M2C_UNK func_001B9D90(s128 *);                      /* extern */
M2C_UNK func_0095EF70(f32 *, M2C_UNK);              /* extern */
extern f32 D_003E7D0C;
extern f32 D_003E7D10;
extern char D_00B807A0[];

s32 func_00B44E60(void) {
    s128 sp10;
    f32 sp28;
    f32 sp2C;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v1;

    sp2C = D_003E7D0C;
    sp10 = (*(s128 *)D_00B807A0);
    sp28 = D_003E7D10;
    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x3B6);
        if (temp_a0 != 3) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3B5);
            switch (temp_v1) {                      /* irregular */
            case 7:
                break;
            case 0:
                if ((temp_a0 == 0) && (temp_v1 != 7)) {
                    func_001B9D90(&sp10);
                    func_0095EF70(&sp2C, 1);
                } else if ((temp_a0 == 1) && (temp_v1 != 7)) {
                    func_001B9D90(&sp10);
                    func_0095EF70(&sp28, 1);
                }
                break;
            }
        }
    }
    return 0;
}

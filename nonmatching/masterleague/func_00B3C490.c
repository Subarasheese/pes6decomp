/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u32 func_00B3D3D0(void);
M2C_UNK func_0095ED30(f32 *, M2C_UNK, s128 *);      /* extern */
extern void *D_003E77B0;
extern char D_00B80070[];
extern char D_00B80074[];
extern char D_00B80078[];
extern char D_00B80080[];

s32 func_00B3C490(void) {
    s128 sp10;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 temp_v1;
    u32 temp_v0;

    sp20 = (*(f32 *)D_00B80070);
    sp24 = (*(f32 *)D_00B80074);
    sp28 = (*(f32 *)D_00B80078);
    sp10 = (*(s128 *)D_00B80080);
    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x114);
            switch (temp_v1) {                      /* irregular */
            case 2:
                break;
            case 1:
                break;
            default:
                func_0095ED30(&sp20, 3, &sp10);
                break;
            }
        }
    }
    return 0;
}

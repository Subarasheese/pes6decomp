/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern float func_00C890E0(s32);
extern void func_00C891A0(s32, float, float);

extern char D_003F7794[];
extern char D_00CCCDC4[];
extern char D_00CCCDD0[];
extern char D_00CCCDD4[];

void func_00C870B0(void) {
    float constantValue = 35.0f;

    f32 value;
    f32 value2;

    if ((*(u8 *)D_00CCCDD4) == 0) {
        if ((*(u8 *)D_00CCCDD0) & 1) {
            value = func_00C890E0(2);
            if (!(value <= 0.0f)) {
                value2 = (*(f32 *)D_00CCCDC4) + constantValue;
                (*(f32 *)D_00CCCDC4) = value2;
                func_00C891A0(2, (((f32)(*(s16 *)D_003F7794) - value) / 2.0f) - 256.0f, value2);
            }
        }
        (*(u8 *)D_00CCCDD4) = 1;
    }
}

/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_003E985C;
extern f32 D_003E9858;
void func_00141AD0(f32, f32, f32, f32);

void func_0017CB90(u8 *obj, f32 value) {
    if ((s8)obj[8] != 0) {
        func_00141AD0(0.0f, 4.0f * D_003E985C, value, D_003E9858);
    } else {
        func_00141AD0(0.0f, D_003E985C, value, D_003E9858);
    }
}

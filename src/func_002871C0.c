/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x10];
    f32 x, y, z;
} Cam;

extern s32 func_00270570(void);
extern void func_009B4010(f32 *v);
extern Cam *D_003E7574;

void func_002871C0(f32 *v) {
    if (func_00270570() == 0) {
        v[0] = D_003E7574->x;
        v[1] = D_003E7574->y;
        v[2] = D_003E7574->z;
    } else {
        func_009B4010(v);
    }
}

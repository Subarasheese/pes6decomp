/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 x0;
    u8 pad[0x124];
    s32 x128;
} SC;

extern void func_00CF49E0(SC *);
void func_002F2ED0(s32);
s32 func_002F3850(s32);
void func_002F50D0(s32);
extern s32 D_003EB33C;

s32 func_00CF4F20(SC *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if ((D_003EB33C == 0) && (func_002F3850(arg0->x0) == 2)) {
        func_00CF49E0(arg0);
    }
    func_002F2ED0(arg0->x0);
    if (arg0->x128 != 0) {
        func_002F50D0(arg0->x128);
    }
    return 1;
}

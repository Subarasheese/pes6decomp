/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memset(void *, int, unsigned int);
extern s32 func_00262340(void);
extern s32 func_00CD3D30(s32);
extern s32 func_00CF52E0(void *, s32);
extern s32 func_00CF52A0(void **);
extern s32 func_00CF4FA0(void *);
extern s32 func_00CF51B0(void *, s32, s32, s32);
extern s32 func_002F3940(s8 *);
extern s32 D_003E7E1C;
extern s32 D_003EB2CC;

void func_00CDF630(void) {
    int arg0;
    void **arg0_00;

    arg0_00 = (void **)(D_003E7E1C + 400);
    memset(arg0_00, 0, 0x134);
    arg0 = func_00262340();
    D_003EB2CC = func_00CD3D30(arg0);
    func_00CF52E0(arg0_00, 0);
    func_00CF52A0(arg0_00);
    func_00CF4FA0(arg0_00);
    func_00CF51B0(arg0_00, D_003EB2CC, 2, 0);
    func_002F3940(*arg0_00);
}

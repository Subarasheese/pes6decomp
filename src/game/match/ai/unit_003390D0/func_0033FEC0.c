/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern int func_0024ECF0(int);
extern s32 func_003388B0(s32);
extern int func_0024ED00(void);
extern void Pes6Job_SetDone(int);
extern char D_00591DB7[];

s32 func_0033FEC0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_0024ED00() & 0xFF;
    switch (temp_s0) {                              /* irregular */
    case 1:
        if ((*(u8 *)D_00591DB7) != 0) {
            func_0024ECF0(2);
        }
        break;
    case 2:
        if ((*(u8 *)D_00591DB7) == 0) {
            func_0024ECF0(3);
        }
        break;
    }
    if (temp_s0 == 3) {
        func_003388B0(3);
        Pes6Job_SetDone(arg0);
    }
    return 1;
}

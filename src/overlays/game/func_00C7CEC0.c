/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002F9110(s32);
extern s32 D_003EA860;
extern s32 D_00CCBFA0[];
typedef struct { u8 a:1; u8 b:7; } BF;
extern BF D_00CCBFC8[];

void func_00C7CEC0(void) {
    if (D_003EA860 != 0) {
        if (D_00CCBFC8[0].a) {
            func_002F9110(D_00CCBFA0[0]);
            D_00CCBFA0[0] = 0;
            D_00CCBFC8[0].a = 0;
        }
        D_003EA860 = 0;
    }
}

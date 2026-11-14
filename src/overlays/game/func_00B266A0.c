/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { u8 a:3; u8 b:1; u8 c:4; } BF;
extern BF D_00CBBE7C[];

void func_00B266A0(s32 arg0) {
    D_00CBBE7C[0].b = arg0;
}

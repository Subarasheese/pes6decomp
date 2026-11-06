/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
typedef struct E { char pad[0x348]; s16 f348; char pad2[0x354 - 0x34A]; } E;
extern E *D_003E758C;
extern u16 D_005A3030[];
s32 func_009B4860(void) {
    return D_003E758C[(D_005A3030[0] + 0x12B) % 300].f348 != 0x7FFF;
}

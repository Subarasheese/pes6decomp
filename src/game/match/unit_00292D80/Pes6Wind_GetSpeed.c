/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 Pes6Wind_Strength[];

f32 Pes6Wind_GetSpeed(void) {
    return 0.3f * Pes6Wind_Strength[0];
}

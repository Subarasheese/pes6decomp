/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char Pes6MatchFlow_State[];

u8 Pes6MatchFlow_GetState(s32 arg0) {
    return *(((char *)Pes6MatchFlow_State) + arg0);
}

/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char Pes6MatchObj28_Heading[];

void func_002A9220(f32 fparg0) {
    u16 v = (49152.0f - ((32768.0f * fparg0) / 3.1415927f)); *(s16 *)Pes6MatchObj28_Heading = v;
}

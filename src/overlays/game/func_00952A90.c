/* compiler: mwcc-3.0.1b151 */

#include "pes6/pass_directions.h"

s32 func_00952A90(u16 heading, u8 limit) { return D_00CB5374[headingSector(heading)] <= limit; }

/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
s8 func_00C22860(void) {
    if (!D_003EA764) {
        return -1;
    } else {
        s8 value = (s8)D_003EA764->incoming;
        return (s8)(0 <= value ? value : -value);
    }
}

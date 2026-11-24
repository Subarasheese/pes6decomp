/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
s32 func_00C22540(void) {
    u16 flags;
    if (!D_003EA764)
        return -1;
    flags = D_003EA764->flags;
    return (s8)(substitutionFlag(flags, SUBST_KIND_5_BIT) &&
                !substitutionFlag(flags, SUBST_KIND_6_BIT) &&
                !substitutionFlag(flags, SUBST_INCOMING_STATUS_BIT) &&
                !substitutionFlag(flags, SUBST_INCOMING_UNAVAILABLE_BIT));
}

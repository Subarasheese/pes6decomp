/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_ranking_format.h"

char *func_009EAE00(char *out, const char *format, s32 index) {
    return lobby_format_ranking_value(out, format, D_00A7DF98[0]->value04(index));
}

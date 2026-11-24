/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    s32 clip, kind[2];
} CueSelection;
extern CueSelection D_00C9F230;
extern s32 func_00C22A60(void);
void func_00C22DF0(const u8 *kind) {
    CueSelection *selected = &D_00C9F230;
    s32 i;
    for (i = 0; i < 2U; ++i) {
        selected->kind[i] = kind[i];
    }
    func_00C22A60();
}

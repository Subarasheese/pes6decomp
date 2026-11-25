/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct RenderEffect RenderEffect;
extern RenderEffect *D_00522970[], *D_00522974[];
extern f32 D_00522978[], D_0052297C[];
extern RenderEffect *func_001E6020(void);
extern void func_001E59D0(RenderEffect *, s8);
extern void func_001E5A10(RenderEffect *, f32);
extern void func_001E5E50(RenderEffect *, s64);
void func_001B6D60(void) {
    RenderEffect *effect;
    D_00522978[0] = 16000.0f;
    D_0052297C[0] = 12500.0f;
    effect = D_00522970[0];
    if (!effect) {
        D_00522970[0] = func_001E6020();
        effect = D_00522970[0];
        if (!effect)
            return;
    }
    func_001E59D0(effect, 1);
    func_001E5A10(D_00522970[0], D_00522978[0]);
    func_001E5E50(D_00522970[0], 0x61);
    effect = D_00522974[0];
    if (!effect) {
        D_00522974[0] = func_001E6020();
        effect = D_00522974[0];
        if (!effect)
            return;
    }
    func_001E59D0(effect, 1);
    func_001E5A10(D_00522974[0], D_0052297C[0]);
    func_001E5E50(D_00522974[0], 1);
}

/* compiler: mwcc-3.0.1b210-sdata4-merged-sections */
#include "types.h"

typedef struct {
    f32 x, y;
} MenuPoint;
typedef struct {
    f32 x, y, w, h;
} MenuRect;
typedef struct {
    u8 red, green, blue, alpha;
} MenuTint;
typedef struct ImageNode ImageNode;
extern ImageNode *D_003E9A70, *D_003E9A74, *D_003E9A78;
extern MenuTint D_003E7500;
extern ImageNode *func_001F1F10(void), *func_001F2050(ImageNode *);
extern ImageNode *func_001F2880(ImageNode *);
extern void func_001F3D10(ImageNode *, u8), func_001F3C80(ImageNode *, f32),
    func_001F3D80(ImageNode *, const MenuRect *, s32),
    func_001F2530(ImageNode *, s32, const MenuPoint *),
    func_001F26F0(ImageNode *, const MenuTint *), func_001F27D0(ImageNode *, u8);

void func_0023D6A0(MenuPoint start, MenuPoint end, f32 x, f32 y, f32 depth) {
    MenuRect rect = {0, 0, 200, 200};
    MenuTint tint;
    D_003E9A78 = func_001F1F10();
    func_001F3D10(D_003E9A78, 1);
    func_001F3C80(D_003E9A78, 0.0f);
    func_001F3D80(D_003E9A78, &rect, 0);
    D_003E9A70 = func_001F2050(D_003E9A78);
    func_001F3C80(D_003E9A70, depth);
    func_001F3D10(D_003E9A70, 1);
    D_003E9A74 = func_001F2880(D_003E9A70);
    func_001F27D0(D_003E9A74, (u8)depth);
    func_001F3D10(D_003E9A74, 1);
    rect.x = x;
    rect.y = y;
    rect.w = 0;
    rect.h = 0;
    func_001F3D80(D_003E9A74, &rect, 0);
    func_001F2530(D_003E9A74, 0, &start);
    func_001F2530(D_003E9A74, 1, &end);
    tint = D_003E7500;
    func_001F26F0(D_003E9A74, &tint);
}

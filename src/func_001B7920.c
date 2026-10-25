/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct Save {
    u8 data[0xC00];
    s32 a;
    s32 b;
    struct Save *next;
} Save;

extern u8 D_005229F0[];
extern s32 D_0052298C[];
extern s32 D_00522988[];
extern Save *D_00524794[];
extern s8 D_00524790[];
extern void *func_00154060(s32 a, s32 size);
extern void func_001C4730(void *dst, void *src, s32 n);
extern void func_00153FA0(void *p);
extern void func_001B70A0(void);

void func_001B7920(void) {
    Save *s = D_00524794[0];

    if (D_00524790[0] == 0) {
        return;
    }
    func_001C4730(D_005229F0, s, 0xC00);
    D_0052298C[0] = D_00524794[0]->a;
    D_00522988[0] = D_00524794[0]->b;
    D_00524794[0] = D_00524794[0]->next;
    func_00153FA0(s);
    D_00524790[0]--;
    func_001B70A0();
}

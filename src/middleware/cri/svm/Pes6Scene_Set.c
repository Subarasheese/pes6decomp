/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 value;
    s32 flag;
} Pair;

extern Pair Pes6SceneStack[];
void func_001C48E8(void *, s32, s32);

void Pes6Scene_Set(s32 index, s32 value) {
    Pes6SceneStack[index].value = value;
    Pes6SceneStack[index].flag = 0;
    if (index <= 100) {
        func_001C48E8(&Pes6SceneStack[index + 1], 0, (3 - (index + 1)) * sizeof(Pair));
    }
}

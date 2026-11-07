/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct State {
    int pad0[2];
    int active;
    int pad1;
    int count;
};
extern volatile struct State D_00372998;

int func_001107F0(int *used, int *free)
{
    volatile struct State *s = &D_00372998;
    if (s->active < 0)
        return 0x80008001;
    if (used)
        *used = s->count;
    if (free)
        *free = 0x80 - s->count;
    return 0;
}

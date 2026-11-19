/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Slot {
    int unk0;
    int flags;
    int unk8;
    int unkC;
} Slot;

extern int D_005CABF0;
extern Slot D_01204840[32];
extern void func_0019F560(void);
extern int func_0019B160(int sema);
extern int func_0019B140(int sema);

Slot *func_0019F650(void)
{
    Slot *s;

    func_0019F560();
    func_0019B160(D_005CABF0);
    for (s = D_01204840; s < D_01204840 + 32; s++) {
        if (s->flags == 0) {
            s->flags = 0x10000000;
            func_0019B140(D_005CABF0);
            return s;
        }
    }
    func_0019B140(D_005CABF0);
    return 0;
}

/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Slot {
    int unk0;
    int flags;
    int unk8;
    int unkC;
} Slot;

extern int D_00371398;
extern Slot D_003EF200[32];
extern void func_001099D8(void);
extern int func_001053A0(int sema);
extern int func_00105380(int sema);

Slot *func_00109AC8(void)
{
    Slot *s;

    func_001099D8();
    func_001053A0(D_00371398);
    for (s = D_003EF200; s < D_003EF200 + 32; s++) {
        if (s->flags == 0) {
            s->flags = 0x10000000;
            func_00105380(D_00371398);
            return s;
        }
    }
    func_00105380(D_00371398);
    return 0;
}

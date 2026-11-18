/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Unlink a registered group while interrupts are excluded. Returns the old
 * head when removing it, otherwise its predecessor, or null when absent.
 * The caller supplies a valid group; the original always reenables IRQs. */
struct Group { char unknown0[0x14]; struct Group *next; };
struct Pool { char unknown0[0x28]; struct Group *groups; };
extern struct Pool D_012032C0;
extern int func_001A4728(void);
extern int func_001A4778(void);
struct Group *func_0019F270(struct Group *target) {
    struct Group *group;
    func_001A4728();
    group = D_012032C0.groups;
    if (group == target) {
        D_012032C0.groups = group->next;
    } else {
        for (; group; group = group->next) {
            if (group->next == target) {
                group->next = target->next;
                break;
            }
        }
    }
    func_001A4778();
    return group;
}

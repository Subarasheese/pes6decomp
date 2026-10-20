/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Unlink a registered group while interrupts are excluded. Returns the old
 * head when removing it, otherwise its predecessor, or null when absent.
 * The caller supplies a valid group; the original always reenables IRQs. */
struct Group { char unknown0[0x14]; struct Group *next; };
struct Pool { char unknown0[0x28]; struct Group *groups; };
extern struct Pool D_003EDC80;
extern int func_0010F420(void);
extern int func_0010F470(void);
struct Group *func_001096E8(struct Group *target) {
    struct Group *group;
    func_0010F420();
    group = D_003EDC80.groups;
    if (group == target) {
        D_003EDC80.groups = group->next;
    } else {
        for (; group; group = group->next) {
            if (group->next == target) {
                group->next = target->next;
                break;
            }
        }
    }
    func_0010F470();
    return group;
}

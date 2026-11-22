/* compiler: ee-gcc-2.96-G0 */
/* Adapted from gt4-decomp, src/runtime/unit_0059BE80/func_005BC438.c.
 * MIT licence. See THIRD_PARTY.md. */
/* GCC runtime (gcc 2000-10-03 snapshot, libgcc.a): __do_global_dtors (libgcc2.c).
 * licence: gcc-runtime (GPL with the GCC runtime exception, see THIRD_PARTY.md) */
/* The function's own statics (p = __DTOR_LIST__ + 1, completed) live in its .data and are
 * reached through their addresses; __EH_FRAME_BEGIN__ is 0x006D3E00. */
typedef void (*func_ptr)(void);

extern func_ptr *D_005CC20C;
extern int D_005CC210;
extern char D_005CC978[];
extern void *func_001AC398(void *begin);

void func_001AB078(void) {
    while (*D_005CC20C) {
        D_005CC20C++;
        (*(D_005CC20C - 1))();
    }
    if (!D_005CC210) {
        D_005CC210 = 1;
        func_001AC398(D_005CC978);
    }
}

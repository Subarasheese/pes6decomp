/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_003C3F70[];
extern char *D_00371730;
extern void func_0010F900(void *list, void *self, int arg);
extern void func_0010FA18(void);
extern void func_00105780(void *self, char *p);

void func_0010FB00(void *self, int arg) {
    func_0010F900(D_003C3F70, self, arg);
    func_0010FA18();
    func_00105780(self, D_00371730 + 4);
}

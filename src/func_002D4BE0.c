/* compiler: mwcc-3.0.1b210 */
struct EntryTable {
    unsigned char unknown00[0x568];
    void *entries[];
};
extern struct EntryTable *func_00256140(void);
extern void func_0026E560(void *);
extern int func_009B45F0(void);
extern int func_009B4650(void);
void func_002D4BE0(int index) {
    if (func_009B45F0() == 0 || (func_009B4650() & 0xFF) != 4) {
        func_0026E560(func_00256140()->entries[index]);
    }
}

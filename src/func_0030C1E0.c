/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00223BC0(void);
extern void func_001F85A0(const void *, void *);
extern void *memcpy(void *, const void *, unsigned int);

void func_0030C1E0(int index, void *destination) {
    unsigned char buffer[0x2E];
    func_001F85A0(func_00223BC0() + index * 0x9C + 0x10, buffer);
    memcpy(destination, buffer, 0x2E);
}

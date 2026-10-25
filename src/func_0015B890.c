/* compiler: ee-gcc-2.96-G0 */
int func_0015B890(int size) {
    int sectors = size / 2048;

    return sectors + (size - sectors * 2048 > 0);
}

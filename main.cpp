#include <iostream>
#include <cassert>

int my_strlen(const char *str) {
    int count = 0;
    assert(str != NULL);//断言指针，保证指针的有效性
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int main() {
    char arr[] = "argh";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}

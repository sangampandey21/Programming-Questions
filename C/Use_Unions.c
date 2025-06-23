#include <stdio.h>
union Data {
    int intValue;
    float floatValue;
    char charValue;
};
void displayUnionData(const union Data *data, char type) {
    switch (type) {
        case 'i':
            printf("Integer value: %d\n", data->intValue);
            break;
        case 'f':
            printf("Float value: %.2f\n", data->floatValue);
            break;
        case 'c':
            printf("Character value: %c\n", data->charValue);
            break;
        default:
            printf("Unknown type\n");
            break;
     }
        }

int main() {
    union Data data;
    data.intValue = 21;
    printf("Storing integer value:\n");
    displayUnionData(&data,'i');
    data.floatValue = 3.14;
    printf("\nStoring float value:\n");
    displayUnionData(&data,'f');
    data.charValue = 'S';
    printf("\nStoring character value:\n");
    displayUnionData(&data,'c');

    return 0;
}

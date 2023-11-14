#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "nanojson/parse.h"

struct Person {
    char *name;
    int age;
} person;

void callback(const char *key, const char *value, const char *parentKey) {
    if (strcmp(key, "name") == 0) person.name = strdup(value);
    if (strcmp(key, "age") == 0) person.age = atoi(value);
}

int main() {
    char *json = "{\"name\": \"John Doe\", \"age\": 25}";
    // nanojson_parse_object(json, callback, NULL);
    printf("Name: %s, Age: %d", person.name, person.age); // Name: John Doe, Age: 25
    return 0;
}

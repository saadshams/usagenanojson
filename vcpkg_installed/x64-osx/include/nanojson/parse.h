/**
MIT License

Copyright (c) 2023 Open Source Patterns Inc.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef NANOJSON_PARSE_H
#define NANOJSON_PARSE_H

#define KEY_SIZE	128
#define VALUE_SIZE	1024

/**
 * @brief Parses a JSON array and invokes a callback function for each element.
 *
 * This function is used to parse a JSON array and invoke a user-defined callback
 * function for each element found within the array. It supports the parsing of
 * deep nested objects and arrays and can handle various data types such as strings,
 * numbers, booleans, and null values.
 *
 * @param start       A pointer to the beginning of the JSON array to parse.
 * @param callback    A function pointer to a callback function that takes three
 *                    parameters: key, value, and parentKey. The key is a string
 *                    representing the element's subscript, the value is the
 *                    string representation of the element's value, and the
 *                    parentKey is the key of the parent object or user's value.
 * @param parentKey   The key of the parent object or user's value. If it's NULL, an
 *                    empty string is used as the parent key.
 */
void parse_array(const char *start, void (*callback)(const char *key, const char *value, const char *parentKey), const char *parentKey);

/**
 * @brief Parses a JSON object and invokes a callback function for each key-value pair.
 *
 * This function is used to parse a JSON object and invoke a user-defined callback
 * function for each key-value pair within the object. It supports the parsing of
 * deep nested objects and arrays and can handle various data types such as strings,
 * numbers, booleans, and null values.
 *
 * @param start       A pointer to the beginning of the JSON object to parse.
 * @param callback    A function pointer to a callback function that takes three
 *                    parameters: key, value, and parentKey. The key is a string
 *                    representing the current key, the value is the string
 *                    representation of the current value, and the parentKey is
 *                    the key of the parent object or user's value.
 * @param parentKey   The key of the parent object or user's value. If it's NULL, an
 *                    empty string is used as the parent key.
 */
void parse_object(const char *start, void (*callback)(const char *key, const char *value, const char *parentKey), const char *parentKey);

#endif //NANOJSON_PARSE_H

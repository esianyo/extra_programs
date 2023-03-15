char* str_concat(char* s1, char* s2) {
    // Treat NULL as an empty string
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    // Allocate memory for the concatenated string
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    char* result = malloc(len1 + len2 + 1);  // +1 for null terminator
    if (result == NULL) {
        return NULL;  // Insufficient memory
    }

    // Copy the contents of the input strings into the result string
    strcpy(result, s1);
    strcat(result, s2);

    return result;
}


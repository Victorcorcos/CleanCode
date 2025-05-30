// SRP (Single Responsibility Principle)
// Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Before
void generate_report_before(char data[][10], int size) {
    // Process the data
    char processed_data[4][10];
    for (int i = 0; i < size; i++) {
        strcpy(processed_data[i], data[i]);
        for (int j = 0; processed_data[i][j]; j++) {
            processed_data[i][j] = toupper(processed_data[i][j]);
        }
    }

    // Convert data to JSON (simplified)
    printf("Saving to file: [");
    for (int i = 0; i < size; i++) {
        printf("\"%s\"", processed_data[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");

    // Send the report via email (simulated)
    printf("Email sent with data: [");
    for (int i = 0; i < size; i++) {
        printf("\"%s\"", processed_data[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

// After
void process_data(char data[][10], char processed_data[][10], int size) {
    for (int i = 0; i < size; i++) {
        strcpy(processed_data[i], data[i]);
        for (int j = 0; processed_data[i][j]; j++) {
            processed_data[i][j] = toupper(processed_data[i][j]);
        }
    }
}

void convert_to_json_and_save(char processed_data[][10], int size) {
    printf("Saving to file: [");
    for (int i = 0; i < size; i++) {
        printf("\"%s\"", processed_data[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

void send_report(char processed_data[][10], int size) {
    printf("Email sent with data: [");
    for (int i = 0; i < size; i++) {
        printf("\"%s\"", processed_data[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

void generate_report(char data[][10], int size) {
    char processed_data[4][10];
    process_data(data, processed_data, size);
    convert_to_json_and_save(processed_data, size);
    send_report(processed_data, size);
}

int main() {
    char data[4][10] = {"a", "b", "c", "d"};
    
    generate_report_before(data, 4);
    printf("\n");
    generate_report(data, 4);

    return 0;
}

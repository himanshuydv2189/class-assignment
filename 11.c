#include <stdio.h>

int main() {
   
    FILE *file = fopen("student_data.txt", "a");

    if (file != NULL) {
        // Append table of numbers from 2 to 50
        fprintf(file, "\nTable of Numbers:\n");
        for (int num = 2; num <= 50; num++) {
            fprintf(file, "%d ", num);
        }

        fclose(file);

        printf("File data appended with table of numbers successfully.\n");
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}
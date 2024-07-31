#include <stdio.h>

int main() {
    int studentMarks = 80;
    int failInExam = 33;

    // Check if student has passed or failed
    if (studentMarks < failInExam) {
        printf("This student has failed the exam.\n");
    } else {
        printf("This student has passed the exam.\n");
    }

    return 0;
}
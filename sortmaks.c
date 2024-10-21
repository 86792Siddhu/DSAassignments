#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

void sortStudentsByMarks(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].marks > students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[10] = {
        {1, "manish", 85.5},
        {2, "vishnu", 92.0},
        {3, "shashi", 78.0},
        {4, "harish", 88.5},
        {5, "manoj", 91.0},
        {6, "jeshwanth", 75.5},
        {7, "pawan", 89.0},
        {8, "puneeth", 82.0},
        {9, "joshi", 95.0},
        {10, "ashish", 80.0}
    };

    int n = 10;

    sortStudentsByMarks(students, n);

    printf("Students sorted by marks:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}

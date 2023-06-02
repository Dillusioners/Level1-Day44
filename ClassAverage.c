/**
 * Author - Debag101
 * Purpose - Average Mark calculator
 * Date - 02 06 2023
 * */


#include <stdio.h>

// Function to calculate Average marks
float get_average(int students) {
	float total_marks = 0, individual_marks;
	for(int i = 1; i <= students ; i++) {
		printf("\nEnter marks of student %d => ", i);
		scanf("%f", &individual_marks); // Getting individual marks of each student
		total_marks += individual_marks; // Adding marks to total_marks
	}
	return total_marks / students; // Returning average marks
}

// Main exec starts
int main(int argc, char const *argv[]) {
	int student_count;
	// Logger for negative student count
	negative_students:
		printf("\nEnter the number of students in your class => ");
		scanf("%d", &student_count); // Getting count of the students in the class
		if(student_count < 0) {
			printf("\nPlease enter valid student count !");
			goto negative_students; // Efficient counter logger for negative count of students
		}
	// Printing the result 
	printf("\nThe average marks of the students is => %.2f ", get_average(student_count));
	return 0;
}

//WAP with char name and char str to display and feed your name, college name, roll no, postal code//

#include <stdio.h>
#include <string.h>

int main() 
{
    char name[50], college[100], roll_no[20], postal_code[10];

    //name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    //college name
    printf("Enter your college name: ");
    fgets(college, sizeof(college), stdin);
    college[strcspn(college, "\n")] = 0;

    //roll number
    printf("Enter your roll number: ");
    fgets(roll_no, sizeof(roll_no), stdin);
    roll_no[strcspn(roll_no, "\n")] = 0; 

    //postal code
    printf("Enter your postal code: ");
    fgets(postal_code, sizeof(postal_code), stdin);
    postal_code[strcspn(postal_code, "\n")] = 0; 

    // Idhar INFO milega
    printf("\n--- Your Information ---\n");
    printf("Name: %s\n", name);
    printf("College Name: %s\n", college);
    printf("Roll Number: %s\n", roll_no);
    printf("Postal Code: %s\n", postal_code);

    return 0;
}
